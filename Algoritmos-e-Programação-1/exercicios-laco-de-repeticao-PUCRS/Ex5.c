/*
5. Construir um algoritmo que calcule a m�dia aritm�tica de v�rios valores 
inteiros positivos, lidos externamente. O final da leitura acontecer� quando 
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
        printf("Digite o %d� n�mero: ", i+1);
        scanf ("%d", &n);

        if (n < 0) {
            break;
        }
        soma += n;
        i++;
    }

    media = soma / i;
    printf("\nM�dia artim�tica: %d\n", media);
    printf("\n\n\n");
    return 0;
}