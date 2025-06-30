/*
4 - Faça um programa para calcular as raízes reais de uma equação do 2º grau (AX^2 + BX + C = 0)
Dica: ∆ = B^2 – 4AC 
    Se ∆ < 0, não existe raiz real.
    Se ∆ = 0, X1 = X2 = -B / 2 * A. 
    Se ∆ > 0

    X1 = (-B + raiz(∆)) / 2A 
    X2 = (-B - raiz(∆)) / 2A
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;
    
    printf("Digite o valor de A, B e C\n");
    printf("A: ");
    scanf("%lf", &a);
    printf("B: ");
    scanf("%lf", &b);
    printf("C: ");
    scanf("%lf", &c);

    if (a == 0.0) {
        printf("\nNão é uma equação do 2º grau (A não pode ser zero).\n\n");
        return 0;
    } else {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0.0) {
            printf("\nNão existe raiz real!\n\n");
        } else if (delta == 0.0) {
            x2 = -b / (2 * a);
            x1 = x2;
            printf("\nRaízes reais e iguais:\n");
        } else { // Delta > 0.0
            x1 = (-(b) + sqrt(delta)) / (2 * a);
            x2 = (-(b) - sqrt(delta)) / (2 * a);
            printf("\nRaízes reais e diferentes:\n");
        }
    }

    // Valida e imprime x1 e x2 se for decimal ou não.
    if (fabs(x1 - (int)x1) < 0.000001 && fabs(x2 - (int)x2) < 0.000001) { // fabs é equivalente ao módulo matemático |x| 
        printf("X1 = %.0lf\n", x1);
        printf("X2 = %.0lf\n\n", x2);
    } else {
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n\n", x2);
    }

    return 0;
}