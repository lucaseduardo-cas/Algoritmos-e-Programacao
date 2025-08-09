/*
4. Faça um programa que leia um vetor de 8 posicões e, em seguida, leia também dois va- ´
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system("cls");

    int n[8], x, y, soma_XeY=0;
    int i;
    
    printf("Escolha 8 números inteiros:\n");
    for (i=0; i<8; i++) {
        printf("%d° posição: ", i + 1);
        scanf("%d", &n[i]);
    }

    while (1) {
        printf("\n\nEscolha a posição do valor de X do vetor de 8 posições: ");
        scanf("%d", &x);
        if (x > 8) {
            printf("\nValor inválido! Valor de X deve ser menor do que 8.\n");
        } else {
            x -= 1;
            break;
        }
    }
    while (1) {
        printf("\n\nEscolha a posição do valor de Y do vetor de 8 posições: ");
        scanf("%d", &y);
        if (y == x) {
            printf("\nValor inválido! Valor de Y deve ser igual a valor de X.\n");
            continue;
        } else if (y > 8) {
            printf("\nValor inválido! Valor de Y deve ser maior do que 8.\n");
            continue;
        } else {
            y -= 1;
            break;
        }
    }

    for (i=0; i<8; i++) {
        if (i == x || i == y) {
           soma_XeY = n[x] + n[y];
        }
    }
    
    printf("\n\nSoma dos valores de X(%d) e Y(%d) = %d", n[x], n[y], soma_XeY);

    printf("\n\n\n");
    return 0;
}