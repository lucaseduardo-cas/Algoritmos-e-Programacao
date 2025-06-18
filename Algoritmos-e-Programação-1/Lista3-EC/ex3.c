/*
03 - Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equação do segundo grau (Ax^2 + Bx + C = 0) e que calcule
suas raízes. O algoritmo deve mostrar, quando possível, o valor das raízes calculadas e a classificação das mesmas: “RAÍZES
IMAGINÁRIAS”, “RAiZ ÚNICA” ou “RAÍZES DISTINTAS”.
*/

#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    double delta, x1, x2;

    printf("Digite os valores de:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("\nRAÍZES IMAGINÁRIAS!\n");
    } else if (delta == 0) {
        x1 = -(b) / (2.0 * a);
        printf("\nRAiZ ÚNICA!\n");
        printf("X: %.2f\n", x1);
    } else {
        x1 = (-(b) + sqrt(delta)) / (2.0 * a);
        x2 = (-(b) - sqrt(delta)) / (2.0 * a);
        printf("\nRAÍZES DISTINTAS!");
        printf("\nX1: %.2f\nX2: %.2f\n", x1, x2);
    }

    return 0;
}
