/*
7) Crie um programa que peça ao usuário 3 números e calcule a média entre eles e exiba na
tela
*/

#include <stdio.h>

int main() {
    float a, b, c, media;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("\nMédia de A, B e C: %.2f\n\n", media);

    return 0;
}
