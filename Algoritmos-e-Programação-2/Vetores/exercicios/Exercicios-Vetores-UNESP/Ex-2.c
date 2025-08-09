/*
2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int n[6];
    int i;

    for (i=0; i<6; i++) {
        printf("%d° número: ", i+1);
        scanf("%d", &n[i]);
    }

    printf("\nNúmeros digitados:\n");
    for (i=0; i<6; i++) {
        if (i != 5) {
            printf("%d; ", n[i]);
        } else {
            printf("%d", n[i]);
            break;
        }
    }

    printf("\n\n\n");
    return 0;
}