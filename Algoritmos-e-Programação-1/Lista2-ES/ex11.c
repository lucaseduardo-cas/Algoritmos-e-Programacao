/*
11 - Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de
abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, escrever
um algoritmo que lê a diária normal, que calcule e escreva as seguintes informações:
    (a) O valor da diária no período da promoção;
    (b) O valor médio arrecadado sem a promoção, durante um mês;
    (c) O valor médio arrecadado com a promoção, durante um mês;
    (d) O lucro ou prejuízo mensal com a promoção.
*/

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "pt_BR.utf8");

    float diariaNormal=1000.0, diariaPromocao;
    float valorMedio, valorMedioPromocao;
    float balanco;
    int qtdAp=42;

    printf ("=================== BALANÇO MENSAL ===================\n\n");
    printf("Valor da diária (período normal) ..... : R$ ");
    scanf("%f", &diariaNormal);

    diariaPromocao = diariaNormal - (diariaNormal * 0.22);
    valorMedio = diariaNormal * (qtdAp * 0.40) * 30;
    valorMedioPromocao = diariaPromocao * (qtdAp * 0.70) * 30;
    balanco = valorMedioPromocao - valorMedio;

    printf("\n\n");
    printf("\tDiária normal: ................. R$ %'.2f\n", diariaNormal); // Formato %'.2f imprime numeros grandes separados por 3 pontos. Ex.: 1.000,00
    printf("\tOcupação: ......................    40%%\n");
    printf("\tValor médio arrecado (mensal): . R$ %'.2f\n\n", valorMedio);
    printf("\tDiária (promoção): ............. R$ %'.2f\n", diariaPromocao);
    printf("\tOcupação: ......................    70%%\n");
    printf("\tValor médio arrecado (mensal): . R$ %'.2f\n\n", valorMedioPromocao);
    printf("\tBalanço: ....................... R$ %'.2f\n\n", balanco);

    return 0;
}
