/*
06 - Fazer um algoritmo que dado os lados de um triângulo A, B e C. Dizer se os lados dados formam um triângulo: retângulo
(A2^2=B2^2+C2^2), obtusângulo (A2^2>B2^2+C2^2) ou acutângulo (A2^2<B2^2+C2^2). 
*/

#include <stdio.h>
#include <math.h>

int main (void) {
    int a, b, c;

    printf("Digite os lados de um triangulo:\n");
    printf("Lado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);

    if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        printf("\nTriângulo retângulo!\n");
    } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
        printf("\nTriângulo obtusângulo!\n");
    } else {
        printf("\nTriângulo acutângulo!\n");
    }

    return 0;
}