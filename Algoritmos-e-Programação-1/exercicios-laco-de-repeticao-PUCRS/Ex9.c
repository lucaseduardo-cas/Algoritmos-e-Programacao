/*
9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. 
Mostre o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int n, maior=1, menor=10000;
    int i;

    for (i=1; i<=50; i++) {
        printf("Digite o %d° número inteiro: ", i);
        scanf("%d", &n);

       if (n > maior) {
            maior = n;
       } else if (n < menor) {
            menor = n;
       } 
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n\n\n", menor);

    return 0;
}