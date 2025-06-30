/*
8. Escreva um algoritmo que calcule a m�dia dos n�meros digitados pelo 
usu�rio, se eles forem pares. Termine a leitura se o usu�rio digitar zero (0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int n, soma, media;
    int i=0;

    while (1) {
        printf("Digite o %d� n�mero inteiro:\n", i + 1);
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n % 2 == 0) {
            soma += n;
        } else {
            printf("\n  N�mero n�o � par!\n\n");
            system("pause");
            system("cls");
            continue;
        }
        i++;
    }

    media = soma / i;

    printf("\nA m�dia dos n�meros pares digitados �: %d", media);
    printf("\n\n\n");

    return 0;
}