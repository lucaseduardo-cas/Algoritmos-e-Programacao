/*
4 – O custo do seguro contra granizo numa comunidade típica de fazendeiros é 3,5% do valor de cobertura
solicitado (para cada acre), multiplicado pelo número de acres plantados. Supondo que as possibilidades de
colheita sejam limitadas a milho, feijão e café, faça um programa para:
- ler a cobertura desejada;
- Número de acres plantados para cada uma das três plantações;
- Calcular o custo total do seguro para o cliente;
*/

#include <stdio.h>

int main() {
    int acresMilho, acresFeijao, acresCafe;
    float valorCobertura, custoMilho, custoFeijao, custoCafe, custoTotal;

    printf("Valor de cobertura: R$ ");
    scanf("%f", &valorCobertura);

    printf("\nNúmero de acres plantados p/:\n");
    printf("  Milho .... : ");
    scanf("%d",  &acresMilho);
    printf("  Feijão ... : ");
    scanf("%d", &acresFeijao);
    printf("  Café ..... : ");
    scanf("%d",   &acresCafe);

    custoMilho  = 0.035 * valorCobertura *  acresMilho;
    custoFeijao = 0.035 * valorCobertura * acresFeijao;
    custoCafe   = 0.035 * valorCobertura *   acresCafe;
    custoTotal  = custoMilho + custoFeijao + custoCafe;

    printf("\nCusto total: R$ %.2f\n\n", custoTotal);

    return 0;
}
