/*
6. Uma agência bancária possui vários tipos de investimentos com rendimentos mensais, conforme a tabela
abaixo:
	+----------------------------------------------------------------------------+		
	|  Valor Mínimo     	|       Descrição     	   |   Rentabilidade Mensal  |
	+-----------------------+--------------------------+-------------------------+
	|	R$ 100,00 			|		Poupança 		   | 			0,5%         |
	+-----------------------+--------------------------+-------------------------+
	|	R$ 1000,00 			|   Fundos de Renda Fixa   | 			1%           |
	+-----------------------+--------------------------+-------------------------+	
	|	R$ 2500,00 			|		  CDBs 			   | 			1,5%         |
	+----------------------------------------------------------------------------+

Faça um programa que leia o valor que o cliente deseja investir e calcule e exiba os tipos de aplicação
que ele pode fazer e qual será sua rentabilidade (lucro) em cada uma delas (se for mais de uma). O programa
termina quando for digitado um valor de investimento negativo.
*/

#include <stdio.h>

int main(void) {
	float valor=0, rentabilidade=0, poupanca=0, renda_fixa=0, cdbs=0, investimento_total=0, total_lucro=0;
	int opcao=0;

	do {
		printf("Digite o valor que deseja investir(mínimo R$100,00): ");
		scanf("%f", &valor);
		if (valor >= 1 && valor < 100) {
			printf("\nValor insuficiente para investimento!\n\n");
			return 0;
		}   else if ( valor < 0) {
			printf("\n\n\nInvestimento total: %.2f", investimento_total);
			printf("\nLucro total: %.2f", total_lucro);
			printf("\nOperação finalizada!");
			return 0;
		}

		poupanca = valor * (0.5 / 100);
		renda_fixa = valor * (1.0 / 100);
		cdbs = valor * (1.5 / 100);

		if (valor >= 100 && valor < 1000) {
			printf("[1] Poupança(mínimo R$100,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/após 1 mês", valor, poupanca);
		} else if (valor >= 1000 & valor < 2500) {
			printf("[1] Poupança(mínimo R$100,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/após 1 mês", valor, poupanca);
			printf("\n[2] Fundos de Renda Fixa(mínimo R$1.000,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/após 1 mês", valor, renda_fixa);
		} else if ( valor > 1000) {
			printf("[1] Poupança(mínimo R$100,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/após 1 mês", valor, poupanca);
			printf("\n[2] Fundos de Renda Fixa(mínimo R$1.000,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/após 1 mês", valor, renda_fixa);
			printf("\n[3] CDBs(mínimo R$2.500,00)\n    Valor investido: %.2f\n    Lucro: R$%.2f/ após 1 mês", valor, cdbs);
		}
		printf("\n\nSelecione uma opção: ");
		scanf("\n%d", &opcao);

		if (opcao >=1 && opcao <=3) {
			if (opcao == 1 && valor >= 100) {
				investimento_total = investimento_total + valor;
				rentabilidade = valor + poupanca;
				total_lucro = total_lucro + poupanca;
				printf("\nPoupança: R$%.2f\n\n", rentabilidade);
			}
			if (opcao == 2 && valor >= 1000) {
				investimento_total = investimento_total + valor;
				rentabilidade = valor + renda_fixa;
				total_lucro = total_lucro + renda_fixa;
				printf("\nFundos de Renda Fixa: R$%.2f\n\n", rentabilidade);
			} else if (opcao == 2 & valor < 1000) {
				printf("\nValor insuficiente para Fundos de Renda Fixa!\n\n");
			}
			if (opcao == 3 && valor >= 2500) {
				investimento_total = investimento_total + valor;
				rentabilidade = valor + cdbs;
				total_lucro = total_lucro + cdbs;
				printf("\nCDBs: R$%.2f\n\n", rentabilidade);
			} else if (opcao == 3 && valor < 2500) {
				printf("\nValor insuficiente para CDBs!\n\n");
			}
		} else {
			printf("Opcao inválida!!!\n");
		}
	} while (valor >= 0);

	printf("\n");
	return 0;
}
