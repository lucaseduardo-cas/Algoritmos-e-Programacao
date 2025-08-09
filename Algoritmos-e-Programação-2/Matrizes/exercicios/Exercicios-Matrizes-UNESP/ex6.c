#include <stdio.h>
#include <stdlib.h>

#define TAM 4
#define SENTINELA -999999

// Imprime a matriz mostrando apenas a linha e coluna atuais
void imprimirMatriz(int mat[TAM][TAM], int linhaAtual, int colunaAtual) {
    // Parte que substitui a função imprimirColunaAtual
    printf(" L/C");
    for (int j = 0; j < 6 * colunaAtual + 4; j++) {
        printf(" ");
    }
    printf("%d\n", colunaAtual);

    // Impressão da grade com os dados
    printf("     +-----+-----+-----+-----+\n");
    for (int i = 0; i < TAM; i++) {
        if (i == linhaAtual) {
            printf("  %d  ", i);
        } else {
            printf("     ");
        }

        for (int j = 0; j < TAM; j++) {
            if (i < linhaAtual || (i == linhaAtual && j <= colunaAtual)) {
                if (mat[i][j] == SENTINELA) {
                    printf("|     ");
                } else {
                    printf("|%3d  ", mat[i][j]);
                }
            } else {
                printf("|     ");
            }
        }
        printf("|\n");
        printf("     +-----+-----+-----+-----+\n");
    }
}

int main(void) {
    int mat[TAM][TAM];
    int i, j;

    // Inicializa a matriz com valor sentinela
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            mat[i][j] = SENTINELA;
        }
    }

    // Entrada de dados com atualização dinâmica
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            system("clear");
            printf("Digite o valor da posição [%d][%d]:\n\n", i, j);
            imprimirMatriz(mat, i, j);
            printf("\n> ");
            scanf("%d", &mat[i][j]);
        }
    }

    return 0;
}
