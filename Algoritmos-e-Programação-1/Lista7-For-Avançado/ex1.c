/*
1. Um circo deseja saber qual o pre�o ideal dos ingressos, de acordo com a cidade que visitam.
Para tanto, eles descobriram que em m�dia 120 pessoas comparecem em cada sess�o,
quando o pre�o do ingresso � R$ 5,00. A partir disso, a cada redu��o de R$ 0,50 h� um
aumento de p�blico, que difere em cada cidade. Cada sess�o tem um custo de R$ 200,00 ao
circo. Fa�a um programa que, dado o n�mero adicional de pessoas a cada redu��o de R$
0,50 no pre�o do ingresso, imprima a tabela de lucro de cada sess�o. Considere a varia��o
de pre�o entre R$ 5,00 e R$ 1,00. Informe tamb�m ao usu�rio, qual � o valor de ingresso
que gera o maior lucro. Dica: para testar o algoritmo, considere taxas de aumento de 26 e 30
pessoas.

Ingresso = R$5,00 - 120 pessoas em m�dia
Ingresso - R$0,50 = aumento de p�blico (que difere em cada cidade)
Custo da apresenta��o ao Circo = R$200,00
Varia��o do ingresso = R$5,00 � R$1,00

Tabela de lucro em cada sess�o cada vez que o p�blico aumenta ao reduzir o ingresso em 0,50 = ?
Qual o valor do ingresso que gera o maior lucro = ?

A cada redu��o de R$0,50c o p�blico aumenta e 15%;
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float j, valor_ingresso, lucro, maior_lucro=0.0;
	int i, publico=120;
		
	for (j=5.00; j>=1.00; j=j-0.5) {
		lucro = (publico * j) - 200;
		printf("Valor do ingresso: R$%.2f - P�blico: %d pessoas - Lucro: R$%.2f\n", j, publico, lucro);
		publico = publico + 28;
		
		if (lucro > maior_lucro) {
			maior_lucro = lucro;
			valor_ingresso = j;
		}
	}

	printf("\nPre�o de ingresso mais lucrativo: R$%.2f\nLucro de R$%.2f\n", valor_ingresso, maior_lucro);
	printf("\n\n\n");
	
	system("Pause");
	return 0;
}
