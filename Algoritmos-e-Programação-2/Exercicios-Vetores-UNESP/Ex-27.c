/*
27. Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos
que sao primos e suas respectivas posições no vetor. 
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int n[10], p[10];
    int i, j;
    bool primo = true;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n[i]);
    }
    
    for (i = 0; i < 10; i++) {
        if (n[i] > 1) {
            primo = 1;
            for (j = 2; j <= sqrt(n[i]); j++) {
                if (n[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
            p[i] = primo ? n[i] : 0;
        }
    }

    printf("\nNúmeros primos:\n");
    for (i = 0; i < 10; i++) {
        if (p[i] > 1) {
            printf("Posição: %d = %3d\n", i, p[i]);
        }
    }

    printf("\n\n\n");
    return 0;
}