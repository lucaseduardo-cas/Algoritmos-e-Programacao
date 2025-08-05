/*
PONTEIROS

Pontiro nada mais é que um endereço de memória
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int valor = 10;
    int *p; // Criando uma variável do tipo ponteiro 'p' para um tipo inteiro

    p = &valor; // Conteúdo da variável ponteiro 'p' recebe endereço da variável valor

    // Imprimindo o endereço de memória de uma variável
    printf("Conteúdo de valor .......... : %d\n", valor);
    printf("Endereço de valor .......... : %p\n\n", &valor);
    printf("Conteúdo de p .............. : %p\n", p);
    printf("Endereço de p .............. : %p\n", &p);
    printf("Conteúdo apontado por p .... : %d\n\n", *p);

    return 0;
}