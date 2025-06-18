#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL, "Portuguese");
	
	char nome[20];
	float salario, aumento, novo_salario;
	int i=1;

	do {
		printf("Nome do %d° funcionário: \n    ", i);
		scanf("%s", &nome);
		printf("Salário do %d° funcionário: \n    R$", i);
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
	
	printf("\n\n\n");
	
system("Pause");
return 0;

}
