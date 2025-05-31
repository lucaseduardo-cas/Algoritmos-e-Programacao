/*
5 - Faça um programa para ler dois valores inteiros, uma para a variável A e outro para a variável B, e para
efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e variável B passe
a possuir o valor da variável A. OBS: Não utilize uma variável auxiliar.
*/

#include <stdio.h>

int main () {
    int a, b, aux;

    printf("Digite o valor de:\n");
    printf("  A: "); scanf("%d", &a);
    printf("  B: "); scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nValor de A: %d\n", a);
    printf("Valor de B: %d\n\n", b);

    return 0;
}
