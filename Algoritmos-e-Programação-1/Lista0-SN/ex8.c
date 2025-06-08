/*
8) Faça um programa que peça 5 numeros ao usuário e mostre estes numeros na tela na mesma
linha.
*/

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;

    printf("Digite 5 números:\n");
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);
    printf("Número 3: ");
    scanf("%d", &n3);
    printf("Número 4: ");
    scanf("%d", &n4);
    printf("Número 5: ");
    scanf("%d", &n5);

    printf("\n%d, %d, %d, %d, %d\n\n", n1, n2, n3, n4, n5);

    return 0;
}
