/*
Ponteiros: Inicialização e Atribuição

Ponteiros não inicializados podem conter lixo de memória.
Boa prática: inicializar ponteiros com valor nulo (NULL).
*/

#include <stdio.h>

int main() {
    int *p_nao_inicializado;
    int *p_inicializado = NULL;

    printf("p inicializado: %ls\n", p_inicializado);
    printf("p não inicializado: %ls\n", p_nao_inicializado);
}