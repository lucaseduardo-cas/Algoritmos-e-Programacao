/*
17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");
    system ("cls");

    int n[10];
    int i=0;

    printf("Digite 10 números inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%2d° número: ", 1 + i);
        scanf("%d", &n[i]);
    }

    printf("\n");

    printf("Números digitados:\n");
    for (i=0; i<10; i++) {
        if (n[i] < 0) {
            n[i] = 0;
            printf("%d, ", n[i]);
        } else {
            printf("%d, ", n[i]);
        }
    }

    printf("\n\n\n");
    return 0;
}