/*
5) Fa�a um programa que pe�a ao usu�rio 2 n�meros inteiros e mostre na tela todos os n�meros
entre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int n1, n2, i;

    while (1) {
        printf("Digite dois n�meros inteiros: \n");
        printf("1� N�mero: ");
        scanf("%d", &n1);
        printf("2� N�mero: ");
        scanf("%d", &n2);
        printf("\n");

        if (n2 < n1) {
            printf("Erro! Primeiro n�mero deve ser menor que segundo n�mero.\n");
            continue;
        }

        for (i=n1; i<=n2; i++) {
            printf("%d\n", i);
        }

        if (n1 == 0 && n2 == 0) {
            printf("Opera��o finalizada...\n");
            break;
            return 0;
        }
    }

    system("Pause");
    return 0;
}
