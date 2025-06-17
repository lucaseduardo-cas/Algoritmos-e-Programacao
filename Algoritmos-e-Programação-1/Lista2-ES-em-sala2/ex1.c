/*
1) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.
*/

#include <stdio.h>

int main () {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a + b < c) {
        printf("A soma de %d + %d é maior menor do que %d\n", a, b, c);
    } else {
        return 1;
    }

    return 0;
}
