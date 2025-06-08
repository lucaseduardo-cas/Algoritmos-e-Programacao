/*
1) Escreva um programa que mostre na tela todos os múltiplos de 10, que estão entre 1 e 1000.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int i;

    for (i=10; i<=1000; i+=10) {
        printf("%d\n", i);
    }

    system("Pause");
    return 0;
}