/*
PONTEIROS: OPERAÇÕES

& : operador de endereço
* : operador de desreferência

Não confundir o operador de desreferência com o operador de multiplicação,
ou a declaração de ponteiros com a multiplicação de variáveis.
Não confundir o operador de endereço com o operador de lógico E.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int *p;
    p = &a;
    *p = 10;

    printf("A = %d\n", a);
}