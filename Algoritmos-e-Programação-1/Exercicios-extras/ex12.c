#include <stdio.h>

void notaN1 (float *nota1) {
    printf("Digite a sua nota N1: ");
    scanf("%f", nota1);
}

void notaMinimaN2 (float n1, float *mediaN1, float *mediaN2, float *n2, float *provaN2) {
    *mediaN1 = n1 * 2.0 / 5.0;
    *mediaN2 = 6.0 - *mediaN1;
    *n2 = *mediaN2 / 3.0 * 5.0;
    *provaN2 = (*n2 - 4.0) / 3.0 * 5.0;
}

void imprimirResultado (float mediaN1, float mediaN2, float n2, float provaN2) {
    printf("Média N1: %.2f\n", mediaN1);
    printf("Média N2: %.2f\n", mediaN2);
    printf("\nVocê precisa tirar no mínimo %.2f na N2 para ser aprovado!\n", n2);
    printf("Você precisa tirar no mínimo %.2f na prova da N2!\n", provaN2);
}

int main (void) {
    float n1, n2, mediaN1, mediaN2, provaN2;

    notaN1(&n1);
    notaMinimaN2(n1, &mediaN1, &mediaN2, &n2, &provaN2);
    imprimirResultado(mediaN1, mediaN2, n2, provaN2);
    
    return 0;
}
