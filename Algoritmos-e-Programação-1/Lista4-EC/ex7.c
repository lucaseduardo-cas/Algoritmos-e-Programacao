/*
8 - Faça um programa para ler três números A, B e C, e determinar qual o maior e qual o menor. 
*/

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite 3 números inteiros:\n");
    printf("1° número: ");
    scanf("%d", &a);
    printf("2° número: ");
    scanf("%d", &b);
    printf("3° número: ");
    scanf("%d", &c);

    printf("Maior número:\n");
    if (a > b && a > c) {
        printf("\n%d", a);
    } else if (b > c && b > a) {
        printf("\n%d", b);
    } else if (c > a && c > b) {
        printf("\n%d", c);
    } else {
        printf("\nErro! Números iguais!\n");
    }

    printf("\n\n");
    return 0;
}