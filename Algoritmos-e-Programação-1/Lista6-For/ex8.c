/*
8) Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são pares.
*/

#include <stdio.h>

int main (void) {
    int n, p, i;

    for (i=1; i<=10; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &n);

        if (n % 2 == 0) {
            p++;        
        }
    }

    printf("\n\n%d números são pares.\n\n", p);

    return 0;
}
