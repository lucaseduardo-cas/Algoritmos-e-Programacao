/*
Exemplo de ponteiros com arrays:

Desenvolva uma função que retorne o maior e o menor elemento desse vetor.

Passagem de parâmetro por referência

O C no permite passagem de parâmetro por referência, somente passagem de parãmetro por valor, Porém, é possível ter algo bastante próximo, que é, ao invés de passar o valor da variável, passa-se o conteúdo da variável utilizando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void descobrirValores(int *v, int *me, int *ma, int tam) {
    int i;
    *me = v[0];
    *ma = v[0];

    for (i = 1; i < tam; i++) {
        if (v[i] < *me) {
            *me = v[i];
        }
        if (v[i] > *ma) {
            *ma = v[i];
        }
    }
    printf("(Na função)\n\t*me:   %d\t*ma:   %d\n", *me, *ma);
    printf("\tEndereço de *me  : %p\n", &me);
    printf("\tEndereço de *ma  : %p\n\n", &ma);
    printf("\tConteúdo de *me  : %p\n", me);
    printf("\tConteúdo de *ma  : %p\n", ma);
}

int main(void) {
    int vet [] = {50, 10, 250, 500, 25}; // Todo vetor, o primeiro elemento dele já é um ponteiro
    int menor, maior;
    
    descobrirValores(vet, &menor, &maior, 5); // Passagem de parâmetro "por valor" (Endereço da variável)
    printf("\n\n(Em main)\n\tmenor: %d\tmaior: %d\n", menor, maior);
    printf("\tEndereço de menor: %p\n", &menor);
    printf("\tEndereço de maior: %p\n", &maior);

    return 0;
}