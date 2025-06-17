/*
3) Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar
*/

#include <stdio.h>

int main () {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d é um número par\n", n);
    }

    return 0;
}
