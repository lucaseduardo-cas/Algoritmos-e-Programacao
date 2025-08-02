/*
FUNÇÃO PARÂMETRO FLOAT
*/

#include <stdio.h>

float maiorNumero(float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    float n1, n2, maior;

    printf("Insira 2 números inteiros:\n");
    printf("1° número: ");
    scanf("%f", &n1);
    printf("2° número: ");
    scanf("%f", &n2);
    maior = maiorNumero(n1, n2);
    printf("Maior número: %.2f\n", maior);

    return 0;
}