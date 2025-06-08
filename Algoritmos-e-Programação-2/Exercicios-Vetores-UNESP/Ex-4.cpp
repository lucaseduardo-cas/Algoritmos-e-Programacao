/*
4. Fa�a um programa que leia um vetor de 8 posic�es e, em seguida, leia tamb�m dois va- �
lores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system("cls");

    int n[8], x, y, soma_XeY=0;
    int i;
    
    printf("Escolha 8 n�meros inteiros:\n");
    for (i=0; i<8; i++) {
        printf("%d� posi��o: ", i + 1);
        scanf("%d", &n[i]);
    }

    while (1) {
        printf("\n\nEscolha a posi��o do valor de X do vetor de 8 posi��es: ");
        scanf("%d", &x);
        if (x > 8) {
            printf("\nValor inv�lido! Valor de X deve ser menor do que 8.\n");
        } else {
            x -= 1;
            break;
        }
    }
    while (1) {
        printf("\n\nEscolha a posi��o do valor de Y do vetor de 8 posi��es: ");
        scanf("%d", &y);
        if (y == x) {
            printf("\nValor inv�lido! Valor de Y deve ser igual a valor de X.\n");
            continue;
        } else if (y > 8) {
            printf("\nValor inv�lido! Valor de Y deve ser maior do que 8.\n");
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