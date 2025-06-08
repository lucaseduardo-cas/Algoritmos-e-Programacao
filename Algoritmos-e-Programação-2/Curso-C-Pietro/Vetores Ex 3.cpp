/*
Vetor é uma estrutura de dados. É como se fosse um aglomerado de várais variáveis
simples

<tipo> <nome> [<tratamento>]
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    int v[5];
    int i;

    for (i=0; i<8; i++) {
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos:\n");
    for (i=0; i<5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}