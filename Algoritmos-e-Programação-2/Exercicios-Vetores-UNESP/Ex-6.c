/*
6. Fa�a um programa que receba do usuario um vetor com 10 posi��es. Em seguida dever�
ser impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[10], maior=-100000, menor=100000;
    int i;

    printf("Digite 10 n�meros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%d� posi��o: ", i + 1);
        scanf("%d", &n[i]);

        if (maior < n[i]) {
            maior = n[i];
        }  
        if (menor > n[i]) {
            menor = n[i];
        }
    }

    printf("\nMaior n�mero: %d", maior);
    printf("\nMenor n�mero: %d", menor);

    printf("\n\n\n");
    return 0;
}