/*
5. Leia uma matriz 5 x 5. Leia tambem um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “nao encontrado”. 
*/

#include <stdio.h>
#include <stdlib.h> // system("clear")

#define TAM 5

void imprimirMatriz(int mat[TAM][TAM]) {
    printf("        0     1     2     3     4\n");
    printf("     +-----+-----+-----+-----+-----+\n  0  ");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (mat[i][j] == -999) {
                printf("|     ");
            } else {
                printf("|%3d  ", mat[i][j]);
            }
        }
        printf("|\n     +-----+-----+-----+-----+-----+\n");
        if (i < TAM - 1) {
            printf("  %d  ", i + 1);
        }
    }
}

void encontrarNumero(int mat[TAM][TAM], int numero) {
    int encontrado = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (numero == mat[i][j]) {
                printf("Número %d encontrado nas coordenadas [%d][%d]\n", numero, i, j);
                encontrado = 1;
                break;
            }
        }
        if(encontrado) {
            break;
        }
    }
    if (!encontrado) {
        printf("Número %d não encontrado\n", numero);
    }
}

int main(void) {
    int mat[TAM][TAM];
    int x;
    // Inicializa a matriz com -999 para representar "vazio"
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            mat[i][j] = -999;
        }
    }

    // Preenchendo dinamicamente
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            system("clear"); // Limpa a tela no WSL/Ubuntu
            printf("Digite o valor da posição [%d][%d]:\n\n", i, j);
            imprimirMatriz(mat); // Mostra a matriz atual antes da entrada
            printf("\n> ");
            scanf("%d", &mat[i][j]);
        }
    }

    // Impressão final
    system("clear");
    printf("Matriz completa:\n\n");
    imprimirMatriz(mat);

    printf("\nDigite um número inteiro: ");
    scanf("%d", &x);
    encontrarNumero(mat, x);
    return 0;
}
