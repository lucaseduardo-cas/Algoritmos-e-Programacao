/*
17. Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que possu�rem
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

    printf("Digite 10 n�meros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%2d� n�mero: ", 1 + i);
        scanf("%d", &n[i]);
    }

    printf("\n");

    printf("N�meros digitados:\n");
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