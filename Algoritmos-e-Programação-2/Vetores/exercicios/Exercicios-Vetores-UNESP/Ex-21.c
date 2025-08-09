/*
21. Faça um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.
*/

#include <stdio.h>

int main(void) {
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];
    int i;

    printf("VETOR A - Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");
    
    printf("VETOR B - Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
    printf("\n");

    printf("VETOR A - VETOR B = VETOR C:\n");
    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%2d - %2d = %2d\n", vetorA[i], vetorB[i], vetorC[i]);
    }
    printf("\n\n");
    return 0;
}