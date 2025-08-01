/*
Exemplo de atribuição de ponteiros:
*/

#include <stdio.h>

void main() {
    int a = 10;
    int *p;
    p = &a;
    
    // Valor armazenado
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);

    // Posição de memória
    printf("&a: %ls\n", &a);
    printf("p: %ls\n", p);
}