/*
04 - Dados os pontos A e B, cujas coordenadas A(x1,y1) e B (x2,y2) serão informadas via teclado, desenvolver um algoritmo que
calcule a distância entre A e B.
Onde:
    Distância: V(x2-x1)^2 + (y2-y1)^2
    V = raiz quadrada
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1; // A
    float x2, y2; // B
    float distancia;

    printf("Digite os valores da coordenada A:\n");
    printf("X1: ");
    scanf("%f", &x1);
    printf("Y1: ");
    scanf("%f", &y1);

    printf("\nDigite os valores da coordenada B:\n");
    printf("X2: ");
    scanf("%f", &x2);
    printf("Y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("\nDistância entre A e B: %.2f\n\n", distancia);

    return 0;
}
