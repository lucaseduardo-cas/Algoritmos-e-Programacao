/*
5) Faça um programa que peça ao usuário 2 números inteiros e mostre na tela todos os números
entre eles.
*/

#include <stdio.h>

int main (void) {
    int n1, n2, i;

    while (1) {
        printf("Digite dois n�meros inteiros: \n");
        printf("1° Número: ");
        scanf("%d", &n1);
        printf("2° Número: ");
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

    return 0;
}
