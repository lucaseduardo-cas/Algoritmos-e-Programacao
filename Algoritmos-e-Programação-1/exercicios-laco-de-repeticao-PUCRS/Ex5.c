/*
5. Construir um algoritmo que calcule a média aritmética de vários valores 
inteiros positivos, lidos externamente. O final da leitura acontecerá quando 
for lido um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int n, soma=0, media;
    int i=0;

    while (1) {
        printf("Digite o %d° número: ", i+1);
        scanf ("%d", &n);

        if (n < 0) {
            break;
        }
        soma += n;
        i++;
    }

    media = soma / i;
    printf("\nMédia artimética: %d\n", media);
    printf("\n\n\n");
    return 0;
}