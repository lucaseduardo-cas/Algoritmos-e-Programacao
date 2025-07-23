/*
31. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a união
entre os 2 vetores anteriores, ou seja, que contem os números dos dois vetores. Não
deve conter numeros repetidos. 
*/

#include <stdio.h>

int main(void) {
    int v1[10], v2[10];
    int i, j, k, l, m, n;
    int x = 0;

    i = 0;
    while (i < 10) {
        v1[i] = 1;
        i++;
    }

    i = 0;
    j = 21;
    while (i < 10) {
        //v2[i] = j - 1;
        v2[i] = 2;
        j--;
        i++;
    }

    j = 19;
    l = 9;
    n = 0;
    m = j + 1; // v3[m]
    for (i = 0; i < 10; i++) {
        for (k = 0; k <= j + 1; k++) {
            if (k != i) {
                if (k <= l && v1[i] == v1[k] && k != 0) {
                    m--;
                    continue;
                } else if (k <= l) {
                    continue;
                } 
                if (k > l && v1[i] == v2[n]) {
                    m--;
                } 
                n++;
            }
        }

        if (m <= 1) {
            break;
        }
        j --;
        l--;
        n = 0;
    }
   
    return 0;
}