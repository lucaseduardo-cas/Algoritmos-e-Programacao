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
    
    int v[5] = {10, 20, 30, 40, 50}; // Lista de inicialização
    int i;
    float s = 0;

    for (i=0; i<5; i++) {
        s+= v[i]; // v índice i que vale 1, 2, ... 5
    }

    printf("Resultado: %f\n", s/5);
    return 0;
}