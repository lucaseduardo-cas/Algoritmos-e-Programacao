/*
1) Elabore um algoritmo que leia 2 números (maiores que 0), e imprima os números informados, a
soma, subtração do primeiro pelo segundo, multiplicação, considerando a seguinte saída:
Primeiro Número:____ Segundo Número:____
Soma: ____
Subtração: ____
Multiplicação: ____
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero1=0, numero2=0;
	int soma=0, subtracao, multiplicacao=0;
		printf("Digite um numero maior que 0: ");
			scanf("%d", &numero1);
		printf("Digite um numero maior que 0: ");
			scanf("%d", &numero2);

	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;


		printf("\nPrimeiro numero: %d. Segundo numero %d\n\n", numero1, numero2);
	    printf("\nSoma: %d", soma);
	    printf("\nSubtracao: %d", subtracao);
	    printf("\nMultiplicacao: %d", multiplicacao);

system("Pause");
return 0;

}
