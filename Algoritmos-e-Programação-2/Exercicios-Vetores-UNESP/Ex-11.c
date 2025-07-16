/*
11. Faça um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
quantidade de numeros negativos e a soma dos números positivos desse vetor. 
*/

#include <stdio.h>

int main(void) {
    int numero[10];
    int qtdNumerosNegativos=0;
    int somaNumerosPositivos=0;
    int i;

    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° real: ", i + 1);
        scanf("%d", &numero[i]);
        if (numero[i] < 0) {
            qtdNumerosNegativos++;
        } else {
            somaNumerosPositivos += numero[i];
        }
    }

    printf("\nQuantidade de números negativos: %2d\n", qtdNumerosNegativos);
    printf("Soma dos números positivos: %2d\n", somaNumerosPositivos);
    printf("\n\n");
    return 0;
}