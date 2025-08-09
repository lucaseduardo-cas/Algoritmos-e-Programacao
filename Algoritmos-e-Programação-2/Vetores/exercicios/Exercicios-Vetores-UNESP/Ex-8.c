/*
8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ?
na ordem inversa.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[6];
    int i;

    printf("Digite 6 números inteiros:\n");
    for (i=0; i<6; i++) {
        printf("%d° número: ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i=5; i>-1; i--) {
        if (i > 0) {
            printf("%d; ", n[i]);
        } else {
            printf("%d ", n[i]);
        }
    }

    printf("\n\n\n");
}