/*
14 - Escrever um algoritmo que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado e o valor do quilowatt
hora, e que, calcule e escreva a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica.

Dica de entrada de dados conforme dados reais de 2024:
    potenciaRefrigerador = 100 watts;
    valorkWh (Goiás)     = 0,745;
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    int tempoLigado;
    float potenciaRefrigerador, valorkWh;
    float energiaTotal, valorTotal;


    printf("Potencia do refrigerador (watts) .............. :   ");
    scanf("%f", &potenciaRefrigerador);
    printf("Tempo ligado .................................. :   ");
    scanf("%d", &tempoLigado);
    printf("Valor kWh ..................................... :     ");
    scanf("%f", &valorkWh);

    energiaTotal = (potenciaRefrigerador / 1000.0) * (tempoLigado / 3.0);
    valorTotal = energiaTotal * valorkWh;

    printf("\nEnergia total gasta: ............................    %.2f kWh\n", energiaTotal);
    printf("Valor total: .................................... R$ %'.2f\n\n", valorTotal);

    return 0;
}
