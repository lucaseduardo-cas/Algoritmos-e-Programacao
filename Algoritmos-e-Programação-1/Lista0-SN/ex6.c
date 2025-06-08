/*
6) Crie um programa que peça ao usuário 2 valores não inteiros e mostre na tela a soma destes
valores ocupando 20 posições na tela e alinhando a informação à direita.
*/

#include <stdio.h>

int main() {
    double a, b, soma;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    soma = a + b;

    printf("\nValos soma: %20.2f\n\n", soma);

    return 0;
}
