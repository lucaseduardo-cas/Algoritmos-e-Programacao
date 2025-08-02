/*
Passagem de Parâmetros: Por Referência

Passagem por referência: a função recebe o endereço de memória da variável.
O valor da variável original é alterado.
*/

#include <stdio.h>

void altera_valor(int *a){
    *a = *a + 10;
}

void main() {
    int a = 10;
    printf("antes: %d\n", a);

    altera_valor(&a);
    printf("depois: %d\n", a);
}