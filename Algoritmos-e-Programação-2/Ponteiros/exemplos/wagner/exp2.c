/*
Exemplo de ponteiros com arrays:

Desenvolva uma função que retorne o maior e o menor elemento desse vetor.

Passagem de parâmetro por valor
*/

#include <stdio.h>
#include <stdlib.h>

void descobrirValores(int *v, int me, int ma, int tam) {
    int i;
    me = v[0];
    ma = v[0];

    for (i = 1; i < tam; i++) {
        if (v[i] < me) {
            me = v[i];
        }
        if (v[i] > ma) {
            ma = v[i];
        }
    }
    printf("(Na função)\n\tMenor: %d\tMaior: %d\n", me, ma);
}

int main(void) {
    int vet [] = {50, 10, 250, 500, 25}; // Todo vetor, o primeiro elemento dele já é um ponteiro
    int menor, maior;
    
    descobrirValores(vet, menor, maior, 5); // Passagem de parâmetro por valor
    printf("\n(Em main)\n\tMenor: %d\tMaior: %d\n", menor, maior);

    return 0;
}