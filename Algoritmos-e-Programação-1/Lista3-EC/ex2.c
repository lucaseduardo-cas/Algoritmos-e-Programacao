/*
02 - Desenvolver um algoritmo que leia um número inteiro e verifique se este é divisível por 5 e por 3 ao mesmo tempo.
*/

#include <stdio.h>

int main () {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0) {
        printf("%d é dividido por 5 e 3 ao mesmo tempo!\n", n);
    } else {
        printf("%d NÃO é divido por 5 e por 3 ao mesmo tempo\n", n);
    }

    return 0;
}
