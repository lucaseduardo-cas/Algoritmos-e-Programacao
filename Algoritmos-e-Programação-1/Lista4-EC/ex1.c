/*
1 – Faça um programa para ler dois números inteiros M e N e determinar se M é divisível por N. 
*/

#include <stdio.h>

int main(void) {
    int m, n, resultado;

    printf("Leia dois números inteiros:\n");
    printf("1° número: ");
    scanf("%d", &m);
    printf("2° número: ");
    scanf("%d", &n);

    if (m % n == 0) {
        resultado = m / n;
        printf("\n%d é divisível por %d!\nResultado = %d\n\n", m, n, resultado);
    } else {
        printf("\n%d NÃO é divisível por %d!\n\n", m, n);
    }

    return 0;
}