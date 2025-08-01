/*
& Operador de endereço
* Operador de desreferência
*/

#include <stdio.h>

void main() {
    int a, b, c;
    
    int *p;
    p = &a; // p recebe endereço de a
    *p = 10; // valor apontado por p recebe 10;

    printf("%d\n", a);
    return 0;
}