/*
Uma determinada empresa deseja dar um aumento de salário a seus funcionários. O ajuste salarial deve
obedecer à seguinte tabela:

	+------------------------------------------+--------------------+
	|             Salário Atual                |        Ação        |
	+------------------------------------------+--------------------+
	| Até R$ 900,00                            | Aumento de 20%     |
	+------------------------------------------+--------------------+
	| Acima de R$ 900,00 até R$ 1.300,00       | Aumento de 15%     |
	+------------------------------------------+--------------------+
	| Acima de R$ 1.300,00 até R$ 1.800,00     | Aumento de 10%     |
	+------------------------------------------+--------------------+
	| Acima de R$ 1.800,00                     | Aumento de 5%      |
	+------------------------------------------+--------------------+

Faça um programa ler o nome e o salário atual dos funcionários e calcular seu aumento e seu novo salário.
O programa deverá exibir, para cada funcionário, a seguinte frase:
O funcionário ___________ terá aumento de R$ __________ e passará a receber R$____________.

O programa deverá parar quando não houverem mais salários a serem calculados.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char nome[20];
	float salario, aumento, novo_salario;
	int i=0;

	do {
		printf("Nome do %d° funcionário(a) (0 /sair).... :    ", i+1);
		scanf("%s", nome);
		if (strcmp(nome, "sair") == 0 || strcmp(nome, "0") == 0) {
			break;
		}
		printf("Salário do %d° funcionário(a) .......... : R$ ", i+1);
		scanf("%f", &salario);
		printf("\n");
	
		if (salario > 0 && salario <= 900) {
			aumento = salario * 0.20;
		} else if (salario > 900 && salario <= 1300) {
			aumento = salario * 0.15;
		} else if (salario > 1300 && salario <= 1800) {
			aumento = salario * 0.10;
		} else if (salario > 1800) {
			aumento = salario * 0.05;
		} else if (salario < 0) {
			printf("\nOpção inválida!\n");
			continue;
		} else {
			break;
		}
		novo_salario = salario + aumento;
		printf("O funcionário: %s terá um aumento de R$%.2f e passará a receber R$%.2f\n\n", nome, aumento, novo_salario);
		i++;
	} while (1);
	
	printf("\n\n");
	return 0;
}
