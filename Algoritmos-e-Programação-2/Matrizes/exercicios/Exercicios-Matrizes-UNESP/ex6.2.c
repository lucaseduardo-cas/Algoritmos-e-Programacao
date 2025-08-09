/*
6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main(void) {
    int mat1[TAM][TAM];    
    int mat2[TAM][TAM];    
    int mat3[TAM][TAM];
    int vet[32], vet2[16];
    int i, j, k=-1;

    system("clear");
    printf("(MATRIZ A) Digite uma matriz 4x4:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            //printf("Coordenada [%d][%d]: ", i, j);
            //scanf("%d", &mat1[i][j]);
            k++;
            mat1[i][j] = k;
            vet[k] = mat1[i][j];
        }
        printf("\n");
    }
    
    system("clear");
    printf("(MATRIZ B) Digite uma matriz 4x4:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            //printf("Coordenada [%d][%d]: ", i, j);
            //scanf("%d", &mat2[i][j]);
            k++;
            mat2[i][j] = k;
            vet[k] = mat2[i][j];
        }
        printf("\n");
    }

    k = 0;
    for (i = 0; i < 32; i++) {
        //for (j = 1; j < 32; j++) {
        for (j = 31; j > i; j--) {
            if (vet[i] > vet[j] && j != i) {
                vet2[k] = vet[i];
                k++;
                break;
            }
        }
    }

    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            mat3[i][j] = vet2[i];
        }
    }

    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            printf("%d   ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
