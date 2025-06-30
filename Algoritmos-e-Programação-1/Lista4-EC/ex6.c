/*
6 - O Futebol Clube do Recife deseja aumentar o salário de seus jogadores. O ajuste salarial deve obedecer à seguinte tabela:
        Salário Atual                            Ação
até R$ 900,00                               aumento de 20%
Acima de R$ 900,00 até R$ 1.300,00          aumento de 15%
Acima de R$ 1.300,00 até R$ 1.800,00        aumento de 10%
acima de 1.800,00                           aumento de  5% 

Faça um programa ler o nome de um jogador e seu salário atual e calcular o seu aumento e seu novo salário. O programa
deverá exibir a seguinte frase:
O jogador ___________ terá aumento de R$ __________ e passará a receber R$____________. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];
    float salarioAtual, aumento, salarioNovo;

    printf("Nome ....................... :    ");
    scanf("%s", nome);
    printf("Salário atual .............. : R$ ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 900.0) {
        aumento = salarioAtual * 0.20;
    } else if (salarioAtual > 900.0 && salarioAtual <= 1800.0) {
        aumento = salarioAtual * 0.15;
    } else {
        aumento = salarioAtual * 0.05;
    }
    salarioNovo = salarioAtual + aumento;

    printf("\nO jogador %s terá um aumento de R$ %'.2f e passará a receber R$ %'.2f", nome, aumento, salarioNovo);

    printf("\n\n");
    return 0;
}