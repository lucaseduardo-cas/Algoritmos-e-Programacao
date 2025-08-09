/*
1.  Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
https://www.ime.usp.br/~macmulti/exercicios/vetores/index.html
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

int main(void) {
    setlocale (LC_ALL, "portuguese");
    int n, i, v[MAX];

    printf("Digite o comprimento da seqüência: ");
    scanf("%d", &n);

    printf("\nDigite uma seqüência com %d números inteiros:\n", n);
    for (i=0; i<n; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSequência inversa:\n");
    for (i=n-1; i>=0; i--) {
        if (i != 0) {
            printf("%d; ", v[i]);
        } else {
            printf("%d", v[i]);
        } 
    }

    printf("\n\n\n");
    return 0;
}