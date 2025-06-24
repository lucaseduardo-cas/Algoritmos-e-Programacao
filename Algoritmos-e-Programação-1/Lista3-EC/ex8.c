/*
08 - Números quadrados perfeitos são aqueles cuja raiz quadrada é um número inteiro. Exemplo 144. Fazer um algoritmo que dado
um número inteiro positivo, calcule e escreva se este é ou não quadrado perfeito.
*/

#include <stdio.h>
#include <math.h>

int main () {
    int n, raiz;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    raiz = sqrt(n);

    if (n < 1) {
        printf("Número negativo! Digite um número inteiro positivo.");
        return 0;
    } else {
        if (raiz * raiz == n) {
            printf("\n%d é um quadrado perfeito!\n", n);
        } else {
            printf("\n%d NÃO é um quadrado perfeito!\n", n);
        }
    }

    return 0;
}