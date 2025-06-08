/*
11) Escreva um programa em linguagem C chamado exercicio11.c que peça para a pessoa
informar dois números inteiros e depois forneça o resultado da divisão e o seu resto.
*/

#include <stdio.h>

int main() {
    int n1, n2, resto;
    float div;

    printf("Digite 2 números:\n");
    printf("1° número: ");
    scanf("%d", &n1);
    printf("2° número: ");
    scanf("%d", &n2);

    div   = (float)n1 / n2;
    resto = n1 % n2;

    printf("\nDivisão: %d / %d = %.2f", n1, n2, div);
    printf("\nResto  : %d / %d = %d\n\n\n", n1, n2, resto);

    return 0;
}
