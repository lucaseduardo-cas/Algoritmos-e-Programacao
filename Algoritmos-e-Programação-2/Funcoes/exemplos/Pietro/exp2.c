/*
Passagem de parâmetros com vetores
*/

#include <stdio.h>

void imprime1(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void imprime2(int v[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d", v[i]);
        if (i < 5 - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void imprime3(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < 5 - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    int vet[5] = {1, 2, 3, 4, 5};

    printf("Primeiro imprime: ");
    imprime1(vet, 5);

    printf("Segundo imprime:  ");
    imprime2(vet);

    printf("Terceiro imprime: ");
    imprime3(vet, 5);

    printf("\n");
    return 0;
}