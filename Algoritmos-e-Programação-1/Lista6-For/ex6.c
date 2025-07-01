/*
6) Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado
daquele tamanho com asteriscos.
Por exemplo, para lado igual a 5:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main (void) {
    int n, i, j;

    printf("Lado do quadrado: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
