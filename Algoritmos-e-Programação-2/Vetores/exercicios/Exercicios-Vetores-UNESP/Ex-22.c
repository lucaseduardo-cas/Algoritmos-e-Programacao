/*
22. Fa�a um programa que leia dois vetores de 10 posi��es e calcule outro vetor contendo,
nas posi��es pares os valores do primeiro e nas posi��es impares os valores do segundo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int x[10], y[10], z[10];
    int i;
    
    printf("Escolha 10 n�meros do conjunto X:\n");
    for (i=0; i<10; i++) {
        printf("%2d� n�mero: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\n\n");
    printf("Escolha 10 n�meros do conjunto Y:\n");
    for (i=0; i<10; i++) {
        printf("%2d� n�mero: ", i + 1);
        scanf("%d", &y[i]);
    }
    
    printf("\n\n");
    for (i=0; i<10; i++) {
        if (i % 2 == 0) {
            z[i] = x[i];
        }
        else {
            z[i] = y[i];
        }

        printf("%d; ", z[i]);
    }
    
    printf("\n\n\n");
    return 0;
}