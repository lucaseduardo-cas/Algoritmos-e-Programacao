/*
25. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que 
nao são múltiplos de 7 ou que terminam com 7.
*/

#include <stdio.h>

int main(void) {
    int vetor[100];
    int n=0;

    for (int i = 0; i < 100; i++) {
        if (n % 7 == 0 || n % 10 == 7 || n % 100 == 7) {
            n++;
            i--;
            continue;
        } else {
            vetor[i] = n;
            n++;
        }
    }
    for (int i = 0; i < 100; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}