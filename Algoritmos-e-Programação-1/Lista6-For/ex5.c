/*
5) Faça um programa que peça ao usuário 2 números inteiros e mostre na tela todos os números
entre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int n1, n2, i;

    while (1) {
        printf("Digite dois nï¿½meros inteiros: \n");
        printf("1ï¿½ Nï¿½mero: ");
        scanf("%d", &n1);
        printf("2ï¿½ Nï¿½mero: ");
        scanf("%d", &n2);
        printf("\n");

        if (n2 < n1) {
            printf("Erro! Primeiro nï¿½mero deve ser menor que segundo nï¿½mero.\n");
            continue;
        }

        for (i=n1; i<=n2; i++) {
            printf("%d\n", i);
        }

        if (n1 == 0 && n2 == 0) {
            printf("Operaï¿½ï¿½o finalizada...\n");
            break;
            return 0;
        }
    }

    system("Pause");
    return 0;
}
