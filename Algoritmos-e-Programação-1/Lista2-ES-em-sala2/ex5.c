/*
5) Escreva um algoritmo em C que leia um número e o imprima caso ele seja maior que 20.
*/

#include <stdio.h>

int main () {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n > 10) {
        printf("%d\n", n);
    }

    return 0;
}
