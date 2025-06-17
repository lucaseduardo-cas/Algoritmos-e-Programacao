/*
4) Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.
*/

#include <stdio.h>

int main () {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        n+=5;
        printf("%d\n", n);
    } else {
        n+=8;
        printf("%d\n", n);
    }

    return 0;
}
