/*
8) Escreva um algoritmo que leia 20 n�meros do usu�rio e exiba quantos n�meros s�o pares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int n, p, i;

    for (i=1; i<=10; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &n);

        if (n % 2 == 0) {
            p++;        
        }
    }

    printf("\n\n%d n�meros s�o pares.\n\n", p);

    system("Pause");
    return 0;
}
