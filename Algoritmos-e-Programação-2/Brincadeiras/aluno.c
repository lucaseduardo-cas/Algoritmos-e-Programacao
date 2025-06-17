#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct {
    int matricula;
    char nome[MAX_NOME];
} Aluno;

// Função para ler e validar a quantidade de alunos
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

// Função para ler e validar matrícula
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

// Função para ler e confirmar nome
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
            getchar();
        }
    }
}

// Função principal
int main() {
    int qtd = lerQuantidadeAlunos();
    Aluno alunos[qtd];

    for (int i = 0; i < qtd; i++) {
        alunos[i].matricula = lerMatricula(i, qtd);
        lerNome(alunos[i].nome, i, qtd, alunos[i].matricula);
    }

    // Exibir lista
    system("clear || cls");
    printf("\n===== LISTA DE ALUNOS =====\n");
    for (int i = 0; i < qtd; i++) {
        printf("Aluno %d: Matrícula: %d | Nome: %s\n", i + 1, alunos[i].matricula, alunos[i].nome);
    }

    return 0;
}
