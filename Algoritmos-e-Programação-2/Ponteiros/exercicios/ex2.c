/*
Ponteiros não inicializados podem conter lixo de memória.
Boa prática: inicializar ponteiros com valor nulo (NULL).
*/

#include <stdio.h>

void main() {
    int *p_nao_inicializado; // retorna lixo de memória
    int *p_inicializado = NULL; // retorna 0

    printf("p inicializado: %d\n", p_inicializado);
    printf("p não inicializado: %d\n", p_nao_inicializado);

    return 0;
}