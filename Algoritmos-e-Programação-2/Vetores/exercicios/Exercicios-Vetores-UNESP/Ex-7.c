/*
7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posic�ao que ele se encontra.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[10], maior, posicao=0;
    int i;
    
    printf("Digite 10 n�meros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%d� n�mero: ", i + 1);
        scanf("%d", &n[i]);

        if (maior < n[i]) {
            maior = n[i];
            posicao++;
        }
    }

    printf("\nMaior n�meros: %d\n", maior);
    printf("Posi��o: %d", posicao);

    printf("\n\n\n");
}