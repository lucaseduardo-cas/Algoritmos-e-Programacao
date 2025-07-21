/*
30. Fac¸a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecc¸ao entre os 2 vetores anteriores, ou seja, que contém apenas os números que
estao em ambos os vetores. Não deve conter números repitidos
*/

#include <stdio.h>

int main(void) {
    int v1[10], v2[10], v3[10];
    int i, j;

    i = 0;
    while (i < 10) {
        v1[i] = 1;
        i++;
    }

    i = 0;
    while (i < 10) {
        v2[i] = 1;
        i++;
    }

    /*
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v2[i]);
    }
    */

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (v1[i] == v2[j]) {
                v3[i] = v1[i];
                break;
            } else {
                v3[i] = 0;
            }
        }
    }
    return 0;
}