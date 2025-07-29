/*
31. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a união
entre os 2 vetores anteriores, ou seja, que contem os números dos dois vetores. Não
deve conter numeros repetidos. 
*/

#include <stdio.h>

int main(void) {
    int v1[10], v2[10];
    int vx[20];
    int i, j;
    int x;

    /*
    printf("Digite 10 números inteiros p/ V1:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite 10 números inteiros p/ V2:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v2[i]);
    }
    */

    i = 0;
    while (i < 10) {
        v1[i] = i + 11;
        i++;
    }

    i = 0;
    j = 21;
    while (i < 10) {
        //v2[i] = j - 1;
        v2[i] = i + 1;
        j--;
        i++;
    }

    i = 0;
    while (i < 20) {
        if (i < 10) {
            for (j = 0; j < 10; j++) {
                vx[i] = v1[j];
                i++;
            }
        } else {
            for (j = 0; j < 10; j++) {
                vx[i] = v2[j];
                i++;
            }
        }
    }

    x = 0;
    for (i = 0; i < 20; i++) {
        for (j = 19; j >= 0; j--) {
            if (vx[i] == vx[j] && j != i) {
                vx[i] = 0;
            }
        }
        if (vx[i] != 0) {
            x++;
        }
    }

    int v3[x];
    j = 0;
    printf("União entre V1 e V2:\n");
    for (i = 0; i < 20; i++) {
        if (vx[i] != 0) {
            v3[j] = vx[i];
            j++;
             printf("%d", v3[i]);
            if (i < x) {
                printf("; ");
            }
        }
    }

    for (i = 0; i < 20; i++) {
        vx[i] = 100000;
    }
    
    // Ordenar v3 do menor para o maior
    for (i = 0; i < x - 1; i++) {
        for (j = 0; j < x - 1 - i; j++) {
            if (v3[j] > v3[j + 1]) {
                int temp = v3[j];
                v3[j] = v3[j + 1];
                v3[j + 1] = temp;
            }
        }
    }

    // Imprimir vetor ordenado
    printf("\nUnião ordenada:\n");
    for (i = 0; i < x; i++) {
        printf("%d", v3[i]);
        if (i < x - 1) {
            printf("; ");
        }
    }
   
    printf("\n\n");
    return 0;
}