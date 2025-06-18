/*
1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação.
https://www.inf.pucrs.br/~pinho/LaproI/Exercicios/Repeticao/Lista1.htm
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    int a;
    int i=1, numeros_negativos=0;

    printf("Escolha 5 números inteiros para A\n");
    while(i <= 5) {
        printf("%d° valor de A: ", i);
        scanf("%d", &a);
        i++;

        if (a < 0) {
            numeros_negativos++;
        }
    }

    printf("\n%d número(s) são negativos.", numeros_negativos);
    printf("\n\n\n");

    return 0;
}