/*
18 - Fazer um algoritmo que leia um inteiro positivo, calcule e escreva as seguintes itens:
    Numero:
    Quadrado:
    Raiz Quadrada:
*/

#include <stdio.h>
#include <math.h>

int main () {
    int n, quadrado;
    double raizQuadrada;

    printf("Digite um número: ");
    scanf("%d", &n);

    quadrado     = n * n;
    raizQuadrada = sqrt(n);

    printf("Quadrado: %d\n", quadrado);
    printf("Raiz Quadrada: %.1f\n\n", raizQuadrada);

    return 0;
}
