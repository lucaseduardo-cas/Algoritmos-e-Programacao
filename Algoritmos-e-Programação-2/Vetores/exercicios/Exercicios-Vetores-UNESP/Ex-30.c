/*
30. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que
estao em ambos os vetores. Não deve conter números repitidos
*/

#include <stdio.h>

int main(void) {
    int v1[10], v2[10], v3[10];
    int i, j, k;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v2[i]);
    }
    
    k = 0;
    for (i = 0; i < 10; i++) {
         for (j = 0; j < 10; j++) {
            if (v1[i] == v2[j]) {
                v3[k] = v1[i];
                k++;
                break;
            } else {
                v3[i] = 0;
            }
        }
    }
    
    int v4[k];
    j = 0;
    v3[5];
    for (i = 0; i < k; i++)  {
        if (v3[i] != 0) {
            v4[j] = v3[i];
            j++;
        }
    }

    int contador = 0;
    for (i = 0; i < k; i++) {
        if(i > 0) {
            for (j = 0; j < k - 1; j++) {
                if (v4[i] == v4[j] && j != i) {
                    v4[i] = 0;
                    break;
                } else {
                    continue;
                }
            }
        }
        if (v4[i] != 0) {
            contador++;
        }
    }

    int v5[contador];
    int l = 0;
    for (i = 0; i < k; i++) {
        if (v4[i] != 0) {
            v5[l] = v4[i];
            l++;
        }
    }
    printf("\nIntersecção entre os vetores A e B:\n");
    for (i = 0; i < contador; i++) {
        printf("%d\n", v5[i]);
    }

    printf("\n\n");
    return 0;
}