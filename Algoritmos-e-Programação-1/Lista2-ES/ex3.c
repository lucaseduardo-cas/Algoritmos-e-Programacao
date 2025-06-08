/*
03 - O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 12% do preço de fábrica e os impostos de 30% do
preço de fábrica, fazer um algoritmo para ler o custo de fábrica de um carro e imprimir o custo ao consumidor.
*/

#include <stdio.h>

int main () {
    float custoFabrica, custoConsumidor, distribuidor=0.12, impostos=0.20;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    distribuidor *= custoFabrica;
    impostos *= custoFabrica;
    custoConsumidor = custoFabrica + distribuidor + impostos;

    printf("\nCusto ao consumidor: R$ %1.2f\n\n", custoConsumidor);

    return 0;
}
