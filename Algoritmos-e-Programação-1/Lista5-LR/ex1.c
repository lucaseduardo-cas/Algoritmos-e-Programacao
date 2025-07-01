/*
1. Faça um programa para calcular e exibir a soma dos cem primeiros números inteiros
(1+2+3+4+5+...+99+100). 
*/

#include <stdio.h>

int main (void) {
	int numero=15, quadrado=0;

	printf("O quadrado dos números 15 até 200 são: \n\n");

	while (numero <= 200) {
		quadrado = numero * numero;
			printf("%d° = %d x %d = %d\n", numero, numero, numero, quadrado);
		numero++;
	}

	return 0;
}

