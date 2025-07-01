/*
2) Peça ao usuário um número inteiro e mostre na tela a tabuada de 1 a 10.
*/

#include <stdio.h>

int main (void) {
    int i, n, x;

    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);

        if (n != 0) {
            for (i=1; i<=10; i++) {
            x = i * n;
            printf("%d x %d = %d\n", i, n, x);
            }
        } else {
            break;
        }
        printf("\n");
    }

    return 0;
}
