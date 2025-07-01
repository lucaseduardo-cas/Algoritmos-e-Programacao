/*
1) Escreva um programa que mostre na tela todos os múltiplos de 10, que estão entre 1 e 1000.
*/

#include <stdio.h>

int main (void) {
    int i;

    for (i=10; i<=1000; i+=10) {
        printf("%d\n", i);
    }

    return 0;
}