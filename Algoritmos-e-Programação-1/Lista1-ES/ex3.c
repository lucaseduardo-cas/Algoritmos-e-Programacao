/*
3– Um sistema de equações lineares da forma
ax + by = c
dx + ey = f
pode ser resolvido utilizando-se as seguintes fórmulas:

x = (ce - br) / (ae - bd)

y = (af - cd) / (ae - bd)

Faça um programa para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e y.
*/

#include <stdio.h>

int main () {
    int x, y;
    int a, b, c, d, e, f;

    printf("Digite os valores de:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("D: ");
    scanf("%d", &d);
    printf("E: ");
    scanf("%d", &e);
    printf("F: ");
    scanf("%d", &f);

    x = (c * e - b * e) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    printf("\nValor de X: %3d\nValor de Y: %3d\n\n", x, y);

    return 0;
}
