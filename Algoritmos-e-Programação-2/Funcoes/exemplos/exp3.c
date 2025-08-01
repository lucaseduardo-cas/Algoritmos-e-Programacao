/*
Passagem de Parâmetros: Por Valor

Principal forma de passagem de parâmetros em C.
Passagem por valor: a função recebe uma cópia do valor da variável.
O valor da variável original NÃO é alterado.
*/

#include <stdio.h>

void altera_valor(int a){
    a = a + 10;
}

void main() {
    int a = 10;
    printf("antes: %d\n", a);

    altera_valor(a);
    printf("depois: %d\n", a);
}