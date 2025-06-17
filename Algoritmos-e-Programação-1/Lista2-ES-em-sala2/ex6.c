/*
6) Escreva um algoritmo em C para determinar se um número A é divisível por um
outro número B. Esses valores devem ser fornecidos pelo usuário.
*/

#include <stdio.h>

int main () {
    int a, b;

    printf("Digite o número A: ");
    scanf("%d", &a);
    printf("Digite o número B: ");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("%d é divisível por %d\n", a, b);
    } else {
        return 1;
    }

    return 0;
}
