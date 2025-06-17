/*
7) Escreva um algoritmo em C que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja
*/

#include <stdio.h>
#include <math.h>

int main () {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (sqrt(n) >= 0) {
        n = sqrt(n);
        printf("%d\n", n);
        n = pow(n, 2);
        printf("%d\n", n);
    }

    return 0;
}
