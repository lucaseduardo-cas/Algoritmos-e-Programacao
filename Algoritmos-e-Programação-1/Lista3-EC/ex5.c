/*
05 - O número 3025 possui a seguinte característica:
20 + 25 = 55
55^2    = 3025

Fazer um algoritmo que dado um número de 4 dígitos calcule e escreva se ele possui ou não esta característica.
*/

#include <stdio.h>

int main () {
    int n1;
    int p1, p2, sp; // "Parte 1 e 2 do número" e soma partes

    printf("Digite um número de 4 dígitos:\n");
    printf("Número: ");
    scanf("%d", &n1);

    if (n1 < 1000 || n1 > 9999) {
        printf("Número inválido!\n");
        return 0;
    }

    p1 = n1 / 100;
    p2 = n1 % 100;
    sp = p1 + p2;

    if ((sp * sp) == n1) {
        printf("%d possuí essa característica!\n", n1);
        printf("%d   + %d  = %d\n", p1, p2, sp);
        printf("%d^2       = %d\n", sp, sp * sp);
    } else {
        printf("%d NÃO possuí essa característica!\n", n1);
    }

    return 0;
}