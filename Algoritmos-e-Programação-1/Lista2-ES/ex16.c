/*
16 - Fazer um algoritmo que dado 4 notas de provas, a b, c, e d calcule e escreva o valor das seguintes médias:
(Consultar pdf)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a=10.0, b=9.0, c=8.0, d=7.0;
    float aritmetica, harmonica, geometrica, quadratica;

    aritmetica = (a + b + c + d) / 4;
    harmonica  = 4 / ((1/a) + (1/b) + (1/c) + 1/d);
    geometrica = pow(a * b * c * d, 1.0 / 4.0);
    quadratica = sqrt ((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4);

    printf("Média Aritmética: %.2f\n", aritmetica);
    printf("Média Harmônica:  %.2f\n", harmonica);
    printf("Média Geomética:  %.2f\n", geometrica);
    printf("Média Quadrática: %.2f\n\n", quadratica);

    return 0;
}
