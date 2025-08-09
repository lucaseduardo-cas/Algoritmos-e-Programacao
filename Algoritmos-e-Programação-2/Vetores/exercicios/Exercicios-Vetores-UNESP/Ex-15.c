/*
15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[20];
    int i, j;
    
    printf("Digite 10 números inteiros:\n");
    for (i=0; i<20; i++) {
        printf("%d° número: ", i + 1);
        scanf("%d", &n[i]);
    }
    
    for (i=0; i<20; i++) {
        for (j=i+1; j<20; j++) {
            
            if (n[i] == n[j]) {
                printf("%d; ", n[i]);
                break;
            }
        }
    }

    printf("\n\n\n");
}