/*
1. Um circo deseja saber qual o preço ideal dos ingressos, de acordo com a cidade que visitam.
Para tanto, eles descobriram que em média 120 pessoas comparecem em cada sessão,
quando o preço do ingresso é R$ 5,00. A partir disso, a cada redução de R$ 0,50 há um
aumento de público, que difere em cada cidade. Cada sessão tem um custo de R$ 200,00 ao
circo. Faça um programa que, dado o número adicional de pessoas a cada redução de R$
0,50 no preço do ingresso, imprima a tabela de lucro de cada sessão. Considere a variação
de preço entre R$ 5,00 e R$ 1,00. Informe também ao usuário, qual é o valor de ingresso
que gera o maior lucro. Dica: para testar o algoritmo, considere taxas de aumento de 26 e 30
pessoas.

Ingresso = R$5,00 - 120 pessoas em média
Ingresso - R$0,50 = aumento de público (que difere em cada cidade)
Custo da apresentação ao Circo = R$200,00
Variação do ingresso = R$5,00 à R$1,00

Tabela de lucro em cada sessão cada vez que o público aumenta ao reduzir o ingresso em 0,50 = ?
Qual o valor do ingresso que gera o maior lucro = ?

A cada redução de R$0,50c o público aumenta e 15%;
*/

#include <stdio.h>

int main(void) {
	float j, valor_ingresso, lucro, maior_lucro=0.0;
	int i, publico=120;
		
	for (j=5.00; j>=1.00; j=j-0.5) {
		lucro = (publico * j) - 200;
		printf("Valor do ingresso: R$%.2f - Público: %d pessoas - Lucro: R$%.2f\n", j, publico, lucro);
		publico = publico + 28;
		
		if (lucro > maior_lucro) {
			maior_lucro = lucro;
			valor_ingresso = j;
		}
	}

	printf("\nPreço de ingresso mais lucrativo: R$%.2f\nLucro de R$%.2f\n", valor_ingresso, maior_lucro);
	printf("\n\n");
	
	return 0;
}
