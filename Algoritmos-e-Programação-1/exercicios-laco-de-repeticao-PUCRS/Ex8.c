/*
8. Escreva um algoritmo que calcule a média dos números digitados pelo 
usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int n, soma, media;
    int i=0;

    while (1) {
        printf("Digite o %d° número inteiro:\n", i + 1);
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n % 2 == 0) {
            soma += n;
        } else {
            printf("\n  Número não é par!\n\n");
            system("pause");
            system("cls");
            continue;
        }
        i++;
    }

    media = soma / i;

    printf("\nA média dos números pares digitados é: %d", media);
    printf("\n\n\n");

    return 0;
}