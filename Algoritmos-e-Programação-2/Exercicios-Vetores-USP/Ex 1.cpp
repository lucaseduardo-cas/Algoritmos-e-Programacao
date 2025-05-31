/*
1.  Dada uma seq��ncia de n n�meros, imprimi-la na ordem inversa � da leitura.
https://www.ime.usp.br/~macmulti/exercicios/vetores/index.html
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

int main(void) {
    setlocale (LC_ALL, "portuguese");
    int n, i, v[MAX];

    printf("Digite o comprimento da seq��ncia: ");
    scanf("%d", &n);

    printf("\nDigite uma seq��ncia com %d n�meros inteiros:\n", n);
    for (i=0; i<n; i++) {
        printf("%2d� n�mero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSequ�ncia inversa:\n");
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