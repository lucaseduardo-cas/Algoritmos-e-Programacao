/*
PROTÓTIPO DE FUNÇÃO
*/

#include <stdio.h>

// Protótipo da função (Permite que a função fique abaixo do main)
float maior(float num1, float num2);

int main(void) {
    float x, y, m;

    printf("Insira um valor: ");
    scanf("%f", &x);
    printf("Insira mais um valor: ");
    scanf("%f", &y);

    m = maior (x, y);
    printf("Maior valor: %.2f\n", m);
    return 0;
}

float maior(float num1, float num2) {
    if(num1 > num2) {
        return num1;
    }
}