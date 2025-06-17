#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libpq-fe.h> // NOVO: Incluir a biblioteca do PostgreSQL

#define MAX_NOME 50

typedef struct {
    int matricula;
    char nome[MAX_NOME];
} Aluno;

// Funções de entrada e validação (iguais ao seu código)
int lerQuantidadeAlunos() {
    int qtd;
    do {
        system("clear || cls");
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &qtd);
        getchar(); // Limpa o \n

        if (qtd <= 0) {
            printf("Quantidade inválida!\nAperte Enter para continuar...\n");
            getchar();
        }
    } while (qtd <= 0);
    return qtd;
}

int lerMatricula(int indice, int total) {
    int mat;
    while (1) {
        system("clear || cls");
        printf("Aluno %d de %d\n", indice + 1, total);
        printf("Digite a matrícula (6 dígitos): ");
        scanf("%d", &mat);
        getchar();

        if (mat < 100000 || mat > 999999) {
            printf("\nMatrícula inválida! Deve conter exatamente 6 dígitos.\n");
            printf("Aperte Enter para tentar novamente...");
            getchar();
        } else {
            break;
        }
    }
    return mat;
}

void lerNome(char nome[MAX_NOME], int indice, int total, int matricula) {
    char opcao;
    while (1) {
        system("clear || cls");
        printf("Aluno %d de %d\n", indice + 1, total);
        printf("Matrícula: %d\n", matricula);

        printf("Digite o nome do aluno: ");
        fgets(nome, MAX_NOME, stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remover '\n'

        printf("\nConfirma o nome \"%s\"? (s/n): ", nome);
        scanf("%c", &opcao);
        getchar();

        if (opcao == 's' || opcao == 'S') {
            break;
        } else if (opcao != 'n' && opcao != 'N') {
            printf("Opção inválida. Pressione Enter para tentar novamente...\n");
            printf("Pressione Enter para continuar...");
            getchar(); // Limpa o \n
        }
    }
}

// NOVO: Função para conectar ao banco de dados
PGconn* conectarAoBanco() {
    // Substitua os valores abaixo pelos seus dados de conexão
    // Host: seu IP do WSL (pode mudar se reiniciar o Windows/WSL)
    // Port: 5432 (porta padrao do PostgreSQL)
    // DBNAME: o banco de dados que você criou para a atividade (lucas ou aluno)
    // USER: seu usuario do postgresql (lucas ou meuusuario)
    // PASSWORD: sua senha do postgresql
    const char *conninfo = "host=172.29.178.215 port=5432 dbname=aluno user=lucas password=260261";

    PGconn *conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "ERRO CRÍTICO: Falha na conexão com o BD!\n");
        fprintf(stderr, "Detalhes do erro: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        return NULL;
    }
    printf("Conexão com o banco de dados 'aluno' estabelecida com sucesso!\n");
    printf("DEBUG CONEXAO: Conectado como %s@%s:%s\n", PQuser(conn), PQhost(conn), PQport(conn)); // NOVO DEBUG
    printf("DEBUG CONEXAO: Usando o banco de dados: %s\n", PQdb(conn)); // NOVO DEBUG

    return conn;
}

// NOVO: Função para inserir um aluno no banco de dados
void inserirAlunoNoBanco(PGconn *conn, const Aluno *aluno) {
    char sql_query[256];
    PGresult *res;

    // Certifique-se que esta linha está ativa para depuração
    printf("DEBUG: Tentando inserir aluno %d | Nome: %s\n", aluno->matricula, aluno->nome);

    snprintf(sql_query, sizeof(sql_query),
             "INSERT INTO aluno (matricula, nome) VALUES (%d, '%s');",
             aluno->matricula, aluno->nome);

    // Certifique-se que esta linha está ativa para depuração
    printf("Executando SQL: %s\n", sql_query);

    res = PQexec(conn, sql_query);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        // Se der erro, esta mensagem DEVE aparecer
        fprintf(stderr, "Erro ao inserir aluno %d (%s): %s\n",
                aluno->matricula, aluno->nome, PQerrorMessage(conn));
    } else {
        // Se der sucesso, esta mensagem DEVE aparecer
        printf("Aluno %d (%s) cadastrado no banco de dados com sucesso!\n",
               aluno->matricula, aluno->nome);
    }
    PQclear(res);
}


int main() {
    int qtd = lerQuantidadeAlunos();
    Aluno alunos[qtd]; // VLA (Variable Length Array)

    // NOVO: Conecta ao banco de dados antes de iniciar o loop de entrada
    PGconn *conn = conectarAoBanco();
    if (conn == NULL) {
        return 1; // Sai se a conexão com o BD falhar
    }

    for (int i = 0; i < qtd; i++) {
        alunos[i].matricula = lerMatricula(i, qtd);
        lerNome(alunos[i].nome, i, qtd, alunos[i].matricula);

        // NOVO: Insere o aluno no banco de dados após coletar os dados
        inserirAlunoNoBanco(conn, &alunos[i]);
    }

    // NOVO: Exibir os dados do banco de dados (opcional, para confirmar)
    system("clear || cls");
    printf("\n===== DADOS RECUPERADOS DO BANCO DE DADOS =====\n");
    PGresult *res = PQexec(conn, "SELECT matricula, nome FROM aluno ORDER BY matricula;"); // Mudar 'alunos' para 'aluno'
    if (PQresultStatus(res) == PGRES_TUPLES_OK) {
        int rows = PQntuples(res);
        int cols = PQnfields(res);
        for (int i = 0; i < rows; i++) {
            printf("Aluno: Matrícula: %s | Nome: %s\n",
                   PQgetvalue(res, i, 0), // Coluna 0 (matricula)
                   PQgetvalue(res, i, 1)); // Coluna 1 (nome)
        }
    } else {
        fprintf(stderr, "Erro ao recuperar dados do banco: %s\n", PQerrorMessage(conn));
    }
    PQclear(res);


    // Exibir lista (apenas como referência, esses dados já estao no BD)
    printf("\n===== LISTA DE ALUNOS (DA MEMORIA) =====\n");
    for (int i = 0; i < qtd; i++) {
        printf("Aluno %d: Matrícula: %d | Nome: %s\n", i + 1, alunos[i].matricula, alunos[i].nome);
    }

    // NOVO: Fechar a conexão com o banco de dados
    PQfinish(conn);
    printf("\nConexão com o banco de dados fechada.\n");

    return 0;
}
