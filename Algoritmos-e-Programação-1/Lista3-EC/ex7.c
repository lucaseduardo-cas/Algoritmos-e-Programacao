/*
07 - Desenvolver um algoritmo que leia o mês e o ano de uma data e que exiba o número de dias da mesma.
*/

#include <stdio.h>

int main () {
    int mes, ano, dias;

    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    dias = ano + (30 * mes);

    printf("\nDias: %d\n", dias);
    return 0;
}