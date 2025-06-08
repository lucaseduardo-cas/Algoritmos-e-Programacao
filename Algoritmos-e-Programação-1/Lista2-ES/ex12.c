/*
12 - Em uma padaria o padeiro quer saber qual o custo de fabricação do pão francês para saber por quanto terá que vender o pão,
tendo um lucro de 30%. Sabendo-se que a receita do pão leva farinha, água e fermento, escreva um algoritmo que: leia a quantidade de
quilos de farinha, o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água, a quantidade de quilowatts hora de
energia, o valor do quilowatt hora e o percentual do imposto que o padeiro paga pelo pão, calcule o preço de custo e o valor de venda, e
escreva estes valores.

Ingredientes
    Pão 0.06
    Preco farinha: 6.50
    qtd água: 0.038
    Preco água: 0.01
    Energia: 0.05
    Preco energia: 0.95
    Imposto: 10.0
*/

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "pt_BR.utf8");

    float kgFarinha=0.06, valorFarinha=6.50, litrosAgua=0.038, valorAgua=0.01;
    float qtdKwh=0.05, valorKwh=0.95, imposto=0.10;
    float precoCusto, valorVenda;
/*
    printf("Quantidade de farinha (Kg.) ................... :    ");
    scanf("%f", &kgFarinha);
    printf("Preço farinha (Kg.) ........................... : R$ ");
    scanf("%f", &valorFarinha);

    printf("\nQuantidade água (L.) .......................... :    ");
    scanf("%f", &litrosAgua);
    printf("Valor água .................................... :    ");
    scanf("%f", &valorAgua);

    printf("\nQuantidade kWh ................................ : R$ ");
    scanf("%f", &qtdKwh);
    printf("Preço kWh ..................................... :    ");
    scanf("%f", &valorKwh);

    printf("\nImposto (%%) ................................... :    ");
    scanf("%f", &imposto);
*/
    precoCusto = ((kgFarinha * valorFarinha) + (litrosAgua * valorAgua) + (qtdKwh * valorKwh * 10)) * ((imposto / 100) + 1);
    valorVenda = precoCusto / (1- 0.30);

    printf("\n\n");
    printf("%.2f (kg)  Farinha: ............................. R$ %'.2f\n", kgFarinha, valorFarinha);
    printf("%.2f (L.)  Água ................................. R$ %'.2f\n", litrosAgua, valorAgua);
    printf("%.2f (kWh) Energia .............................. R$ %'.2f\n\n", qtdKwh, valorKwh);

    printf("Preço de custo: ................................. R$ %'.2f\n", precoCusto);
    printf("Valor de venda: ................................. R$ %'.2f\n\n", valorVenda);

    return 0;
}
