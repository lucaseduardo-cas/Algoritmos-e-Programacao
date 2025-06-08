/*
4) Faça um programa que leia um valor numérico inserido por um usuário e atribua ele para
uma variável e depois imprima o dado presente nessa variável.
*/

#include <stdio.h>

int main() {
    int n, x;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    x = n;

    printf("\nValor de X: %d\n\n", x);

    return 0;
}
