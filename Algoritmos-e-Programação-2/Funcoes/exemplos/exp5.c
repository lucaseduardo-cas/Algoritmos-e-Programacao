#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>   // Para time_t, struct tm, localtime, strftime
#include <ctype.h>  // Para tolower (para strcasecmp portátil)

#define MAX_PRODUTOS 5 // Limite máximo de produtos no estoque

typedef struct {
    char codigo[12]; // CORREÇÃO: Aumentado para evitar warning (ex: "001" + '\0' + margem)
    char nome[50];
    int quantidade;
    float preco;
} Produto;

// Protótipos das funções
void limparBuffer(void);
void limparTela(void);
void pausarTela(void);
// void encerrarPrograma(void); // Removida, pois movimentacoes.csv é um log
int encontrarProduto(Produto produtos[], int totalProdutos, const char *termoBusca); // Nova função auxiliar
void cadastrarProduto(Produto produtos[], int *totalProdutos);
void listarProdutos(Produto produtos[], int totalProdutos);
void atualizarEstoque(Produto produtos[], int totalProdutos, int tipoMovimentacao); // tipoMovimentacao: 1=entrada, 0=saida
void salvarEstoqueAtual(Produto produtos[], int totalProdutos); // Salva apenas o estado atual do estoque
void registrarMovimentacao(const Produto* produto, int quantidade, int tipoMovimentacao); // Registra no log de movimentacoes

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Produto produtos[MAX_PRODUTOS];
    int totalProdutos = 0;
    int opcao;

    // Tenta carregar o estoque inicial do arquivo (se existir)
    // (Implementação futura: carregarEstoqueInicial)

    do {
        limparTela();
        printf("================================ CONTROLE DE ESTOQUE ================================\n\n");
        printf("[1] Cadastrar produto\n");
        printf("[2] Entrada de produtos\n");
        printf("[3] Saída de produtos\n");
        printf("[4] Listar produtos em estoque\n");
        printf("[0] Sair\n\n");
        printf("Escolha uma opção: ");
        
        // CORREÇÃO: Limpar buffer SEMPRE após scanf, mesmo que bem-sucedido
        if (scanf("%d", &opcao) != 1) {
            limparBuffer(); // Limpa o buffer se a entrada não for um número
            printf("\nOpção inválida! Digite um número.\n\n");
            pausarTela();
            continue;
        }
        limparBuffer(); // Limpa o buffer após ler a opção (se foi um número válido)

        switch (opcao) {
            case 1:
                if (totalProdutos < MAX_PRODUTOS) {
                    cadastrarProduto(produtos, &totalProdutos);
                } else {
                    printf("\nLimite máximo de produtos cadastrados (%d) atingido!\n\n", MAX_PRODUTOS);
                    pausarTela();
                }
                break;
            case 2:
                atualizarEstoque(produtos, totalProdutos, 1); // 1 para ENTRADA
                break;
            case 3:
                atualizarEstoque(produtos, totalProdutos, 0); // 0 para SAÍDA
                break;
            case 4:
                listarProdutos(produtos, totalProdutos);
                break;
            case 0:
                salvarEstoqueAtual(produtos, totalProdutos); // Salva o estado final do estoque
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n\n");
                pausarTela();
        }
    } while (opcao != 0);

    return 0;
}

// Implementações das funções auxiliares
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausarTela() {
#ifdef _WIN32
    system("pause");
#else
    printf("Pressione Enter para continuar...");
    getchar(); // Espera por um Enter
#endif
}

// Nova função auxiliar para buscar produto
// Retorna o índice do produto encontrado, ou -1 se não encontrar
int encontrarProduto(Produto produtos[], int totalProdutos, const char *termoBusca) {
    int i;
    int codigo_num;
    char codigo_formatado[12]; // Para formatar códigos numéricos

    // Tenta converter o termo de busca para número (código)
    if (sscanf(termoBusca, "%d", &codigo_num) == 1) {
        // Se for um número, formata para "%03d" para comparar com o código do produto
        snprintf(codigo_formatado, sizeof(codigo_formatado), "%03d", codigo_num);
        termoBusca = codigo_formatado; // Usa o código formatado para a busca
    }

    for (i = 0; i < totalProdutos; i++) {
        // strcasecmp para comparação de nomes (case-insensitive)
        // strcmp para comparação de códigos (case-sensitive, mas códigos são numéricos)
        if (strcmp(produtos[i].codigo, termoBusca) == 0 ||
            strcasecmp(produtos[i].nome, termoBusca) == 0) { // CORREÇÃO: strcasecmp é para nome
            return i; // Produto encontrado, retorna o índice
        }
    }
    return -1; // Produto não encontrado
}


void cadastrarProduto(Produto produtos[], int *totalProdutos) {
    Produto novoProduto;
    // snprintf para formatar o código (ex: "001", "002")
    snprintf(novoProduto.codigo, sizeof(novoProduto.codigo), "%03d", *totalProdutos + 1);
    
    int nomeDuplicado;
    int i;

    while (1) { // Loop para garantir nome único
        limparTela();
        printf("================================ CADASTRO DE PRODUTOS ===============================\n\n");
        printf("Código de cadastro: %s\n", novoProduto.codigo);
        printf("(Insira 0 em qualquer campo para voltar ao menu principal)\n\n");

        printf("Nome do produto: ");
        // getchar(); // Removido, pois limparBuffer() já cuida do '\n'
        fgets(novoProduto.nome, sizeof(novoProduto.nome), stdin);
        novoProduto.nome[strcspn(novoProduto.nome, "\n")] = '\0'; // Remove '\n'
        
        if (strcmp(novoProduto.nome, "0") == 0) {
            return; // Volta ao menu principal
        }

        // Verifica se já existe um produto com o mesmo nome (case-insensitive)
        nomeDuplicado = 0;
        for (i = 0; i < *totalProdutos; i++) {
            if (strcasecmp(produtos[i].nome, novoProduto.nome) == 0) { // strcasecmp para nomes
                nomeDuplicado = 1;
                break;
            }
        }
        if (nomeDuplicado) {
            printf("\nErro: Já existe um produto com este nome! Tente outro.\n\n");
            pausarTela();
            continue; // Pede o nome novamente
        }
        break; // Nome válido e único, sai do loop do nome
    }

    // Validação da quantidade
    while (1) { // Loop para garantir quantidade válida
        limparTela();
        printf("================================ CADASTRO DE PRODUTOS ===============================\n\n");
        printf("Código de cadastro: %s\n", novoProduto.codigo);
        printf("(Insira 0 em qualquer campo para voltar ao menu principal)\n\n");
        printf("Nome do produto: %s\n", novoProduto.nome); 

        printf("Quantidade inicial: ");
        if (scanf("%d", &novoProduto.quantidade) != 1 || novoProduto.quantidade < 0) { // Quantidade não pode ser negativa
            limparBuffer(); // Limpa o buffer se a entrada não for um número
            printf("\nErro! Digite uma quantidade válida (número não negativo).\n");
            pausarTela();
            continue; // Pede a quantidade novamente
        }
        limparBuffer(); // Limpa o buffer após ler a quantidade

        if (novoProduto.quantidade == 0) { // Se a quantidade inicial for 0, volta
            return;
        } else { 
            break; // Quantidade válida, sai do loop
        } 
    }

    // Solicita o preço do produto
    while (1) { // Loop para garantir preço válido
        limparTela();
        printf("================================ CADASTRO DE PRODUTOS ===============================\n\n");
        printf("Código de cadastro: %s\n", novoProduto.codigo);
        printf("(Insira 0 em qualquer campo para voltar ao menu principal)\n\n");
        printf("Nome do produto: %s\n", novoProduto.nome); 
        printf("Quantidade inicial: %d\n", novoProduto.quantidade); 

        printf("Preço do produto: R$");
        if (scanf("%f", &novoProduto.preco) != 1 || novoProduto.preco < 0) { // Preço não pode ser negativo
            limparBuffer(); // Limpa o buffer se a entrada não for um número
            printf("\nErro! Digite um preço válido (número não negativo).\n");
            pausarTela();
            continue; // Pede o preço novamente
        }
        limparBuffer(); // Limpa o buffer após ler o preço
        
        if (novoProduto.preco == 0) { // Se o preço for 0, volta
            return;
        } else { 
            break; // Preço válido, sai do loop
        } 
    }

    // Adiciona o novo produto ao array de produtos
    produtos[*totalProdutos] = novoProduto;
    (*totalProdutos)++; // Incrementa o contador total de produtos

    // Registra o cadastro como uma movimentação de ENTRADA
    registrarMovimentacao(&novoProduto, novoProduto.quantidade, 1); 
    
    limparTela();
    printf("Produto cadastrado com sucesso! Código: %s\n\n", novoProduto.codigo);
    pausarTela();
    // return; // Removido, pois a função já termina aqui
}


void atualizarEstoque(Produto produtos[], int totalProdutos, int tipoMovimentacao) {
    char entradaUsuario[50];
    int encontrado_idx; // Índice do produto encontrado
    int quantidade_movimentar;
    
    if (totalProdutos == 0) {
        limparTela();
        printf("Nenhum produto cadastrado para atualizar o estoque!\n\n");
        pausarTela();
        return;
    }

    while (1) { // Loop para garantir que a operação seja concluída ou cancelada
        limparTela(); 
        if (tipoMovimentacao == 1) {
            printf("================================ ENTRADA DE PRODUTOS ================================\n\n");
        } else {
            printf("================================= SAÍDA DE PRODUTOS =================================\n\n");
        }
        
        printf("(Insira 0 para voltar ao menu principal)\n\n");
        printf(" ___________________________________________________________________________________\n");
        printf("|   CÓDIGO  |                                  NOME                                 | QUANTIDADE |   PREÇO   |\n");
        printf("|___________|_____________________________________________________________________|____________|_____________|\n");
        for (int i = 0; i < totalProdutos; i++) {
            printf("|    %-5s | %-43s |     %-6d |   R$%.2f   |\n",
                     produtos[i].codigo,
                     produtos[i].nome,
                     produtos[i].quantidade,
                     produtos[i].preco);
        }
        printf("|___________|_____________________________________________________________________|____________|_____________|\n\n");

        printf("Digite o código ou o nome do produto: ");
        fgets(entradaUsuario, sizeof(entradaUsuario), stdin);
        entradaUsuario[strcspn(entradaUsuario, "\n")] = '\0'; // Remove '\n'
        
        if (strcmp(entradaUsuario, "0") == 0) {
            return; // Volta ao menu principal
        }
        
        // Busca o produto pelo código ou nome
        encontrado_idx = encontrarProduto(produtos, totalProdutos, entradaUsuario);

        if (encontrado_idx == -1) { // Valida se o produto foi encontrado
            printf("\nProduto não encontrado! Verifique o código ou o nome.\n\n");
            pausarTela();
            continue; // Pede a entrada novamente
        }

        printf("Digite a quantidade a %s: ", (tipoMovimentacao == 1) ? "adicionar" : "remover");
        if (scanf("%d", &quantidade_movimentar) != 1 || quantidade_movimentar < 1) { // Quantidade deve ser positiva
            limparBuffer(); // Limpa o buffer
            printf("\nErro! Digite uma quantidade válida (número inteiro positivo).\n\n");
            pausarTela();
            continue; // Pede a quantidade novamente
        }
        limparBuffer(); // Limpa o buffer após ler a quantidade

        // Atualiza estoque
        if (tipoMovimentacao == 1) { // ENTRADA
            produtos[encontrado_idx].quantidade += quantidade_movimentar;
            printf("Estoque atualizado com sucesso! Novo estoque de %s: %d\n\n", produtos[encontrado_idx].nome, produtos[encontrado_idx].quantidade);
            // Registra a movimentação de ENTRADA
            registrarMovimentacao(&produtos[encontrado_idx], quantidade_movimentar, 1);
        } else { // SAÍDA (Venda)
            if (quantidade_movimentar > produtos[encontrado_idx].quantidade) {
                printf("\nQuantidade insuficiente em estoque! Disponível: %d\n\n", produtos[encontrado_idx].quantidade);
                pausarTela();
                continue; // Volta para pedir a quantidade novamente
            }
            produtos[encontrado_idx].quantidade -= quantidade_movimentar;
            printf("Venda registrada com sucesso! Novo estoque de %s: %d\n\n", produtos[encontrado_idx].nome, produtos[encontrado_idx].quantidade);
            // Registra a movimentação de SAÍDA
            registrarMovimentacao(&produtos[encontrado_idx], quantidade_movimentar, 0);
        }
        
        pausarTela();
        break; // Sai do loop após a operação bem-sucedida
    }
}


void listarProdutos(Produto produtos[], int totalProdutos) {
    limparTela();
    if (totalProdutos == 0) {
        printf("Não há nenhum produto cadastrado!\n\n");
        pausarTela();
        return;
    }
    
    printf("===== Produtos em Estoque =====\n");
    printf(" ___________________________________________________________________________________\n");
    printf("|   CÓDIGO  |                                  NOME                                 | QUANTIDADE |   PREÇO   |\n");
    printf("|___________|_____________________________________________________________________|____________|_____________|\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("|    %-5s | %-43s |     %-6d |   R$%.2f   |\n",
                 produtos[i].codigo,
                 produtos[i].nome,
                 produtos[i].quantidade,
                 produtos[i].preco);
    }
    printf("|___________|_____________________________________________________________________|____________|_____________|\n\n");
    
    // Opcional: Salvar o estoque atual em arquivo após listar (se for o caso)
    // salvarEmArquivo(produtos, totalProdutos); // Esta funcao agora eh para salvar o estoque completo
    
    pausarTela();
}

// Salva o estado atual de TODOS os produtos no arquivo principal de estoque
void salvarEstoqueAtual(Produto produtos[], int totalProdutos) {
    FILE *arquivoCompleto = fopen("controle_estoque.csv", "w"); // Abre em modo de escrita (sobrescreve)
    if (arquivoCompleto == NULL) {
        printf("Erro ao abrir o arquivo de controle de estoque para salvar!\n");
        return;
    }

    fprintf(arquivoCompleto, "ESTOQUE ATUAL\n");
    fprintf(arquivoCompleto, "CÓDIGO;NOME;QUANTIDADE;PREÇO\n");

    for (int i = 0; i < totalProdutos; i++) {
        fprintf(arquivoCompleto, "%s;%s;%d;%.2f\n", // Preço sem "R$" para CSV
                produtos[i].codigo,
                produtos[i].nome,
                produtos[i].quantidade,
                produtos[i].preco);
    }
    fclose(arquivoCompleto);
    printf("\nEstoque atual salvo com sucesso em controle_estoque.csv!\n");
}

// Registra uma única movimentação (entrada/saída) no arquivo de log
void registrarMovimentacao(const Produto* produto, int quantidadeMovimentada, int tipoMovimentacao) {
    FILE *arquivoLog = fopen("movimentacoes.csv", "a+"); // Abre em modo append (adiciona ao final)
    if (arquivoLog == NULL) {
        printf("Erro ao abrir o arquivo de movimentações para registro!\n");
        return;
    }

    // Adiciona cabeçalho se o arquivo estiver vazio
    fseek(arquivoLog, 0, SEEK_END); // Vai para o final do arquivo
    if (ftell(arquivoLog) == 0) { // Se a posição for 0, o arquivo estava vazio
        fprintf(arquivoLog, "TIPO;CÓDIGO;NOME;QUANTIDADE;DATA;HORA\n");
    }

    // Obter data e hora atual
    time_t now;
    struct tm *local;
    char dataStr[11]; // DD/MM/AAAA + '\0'
    char horaStr[9];  // HH:MM:SS + '\0'

    time(&now);
    local = localtime(&now);

    strftime(dataStr, sizeof(dataStr), "%d/%m/%Y", local);
    strftime(horaStr, sizeof(horaStr), "%H:%M:%S", local);

    // Escreve a linha de movimentação
    if (tipoMovimentacao == 1) { // ENTRADA
        fprintf(arquivoLog, "ENTRADA;%s;%s;%d;%s;%s\n",
                produto->codigo,
                produto->nome,
                quantidadeMovimentada,
                dataStr,
                horaStr);
    } else { // SAÍDA
        fprintf(arquivoLog, "SAIDA;%s;%s;%d;%s;%s\n",
                produto->codigo,
                produto->nome,
                quantidadeMovimentada,
                dataStr,
                horaStr);
    }

    fclose(arquivoLog);
    // printf("Movimentacao registrada no log.\n"); // Opcional: mensagem de confirmacao
}

// Removida: A função encerrarPrograma() não deve remover movimentacoes.csv
// void encerrarPrograma() {
//     remove("movimentacoes.csv");
// }