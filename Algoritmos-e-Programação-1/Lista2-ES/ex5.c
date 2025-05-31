/*
05 - Dada a base e a altura de uma pirâmide, fazer um algoritmo que calcule e escreva o seu volume.

Volume = 1/3 * base * altura;
*/

#include <stdio.h>

int main() {
    float base, altura, volume;

    printf("Digite as dimensões da pirâmide:\n");
    printf("Base ... : ");
    scanf("%f", &base);
    printf("Altura . : ");
    scanf("%f", &altura);

    volume = (1.0 / 3.0) * base * altura;

    printf("\nVolume da pirâmide de %.2f (base) x %.2f (altura): %.2f\n\n", base, altura, volume);

    return 0;
}
