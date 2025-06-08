/*
19. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ? i) % (i + 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int vetor[50];
    int i;

    // Preenchendo o vetor conforme a fórmula dada
    for (i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    // Imprimindo os valores do vetor
    printf("Vetor gerado:\n");
    for (i=0; i<50; i++) {
        printf("vetor[%2d] = %d\n", i, vetor[i]);
    }

    printf("\n\n\n");
    return 0;
}
