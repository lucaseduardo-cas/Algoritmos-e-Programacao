/*
28. Leia 10 numeros inteiros e armazene em um vetor ´ v. Crie dois novos vetores v1 e v2.
Copie os valores ´ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no m ˆ aximo 10 elementos, mas nem todos os elementos s ´ ao˜
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/

#include <stdio.h>

int main(void) {
    int v[10], v1[10], v2[20];
    int i;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            v1[i] = v[i];
            v2[i] = 0;
        } else {
            v2[i] = v[i];
            v1[i] = 0;
        }
    }

    printf("V1 - V2\n");
    for (i = 0; i < 10; i++) {
        if (v1[i] > 0) {
            printf("%2d   ", v1[i]);
        }
        if (v2[i] > 0) {
            printf("%2d\n", v2[i]);
        }
    }

    return 0;
}