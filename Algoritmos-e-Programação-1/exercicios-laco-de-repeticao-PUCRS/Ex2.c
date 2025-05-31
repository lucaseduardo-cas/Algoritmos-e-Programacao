/*
2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e 
escreve o valor de E.  

E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    int n;
    double i, j, f=1.0, e=0.0, d;

    printf("Digite um número positivo e inteiro: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            f*=j;
            d = 1.0 / f;
        }
        f=1.0; 
        e+=d;      
    }

    e+=1.0;

    printf("\nE = %.20f\n", e);

    printf("\n\n\n");
    return 0;
}