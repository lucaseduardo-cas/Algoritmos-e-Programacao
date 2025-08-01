#include <stdio.h>

void main() {
    int a = 5;
    char b = 'A';
    int *p;
    char *q;
    p = &a;
    q = &b;
    // Posição de memória
    printf("p: %d\n", p);
    printf("p+1: %d\n", p+1);

    //
    printf("q: %d\n", q);
    printf("q+1: %d\n", q+1);
}