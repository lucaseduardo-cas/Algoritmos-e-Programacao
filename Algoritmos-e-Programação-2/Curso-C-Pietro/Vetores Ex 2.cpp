/*
Vetor � uma estrutura de dados. � como se fosse um aglomerado de v�rais vari�veis
simples

<tipo> <nome> [<tratamento>]
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    int v[5] = {10, 20, 30, 40, 50}; // Lista de inicializa��o
    int i;
    float s = 0;

    for (i=0; i<5; i++) {
        s+= v[i]; // v �ndice i que vale 1, 2, ... 5
    }

    printf("Resultado: %f\n", s/5);
    return 0;
}