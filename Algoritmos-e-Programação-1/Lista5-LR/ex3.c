/*
Sendo H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, fazer um programa para 
solicitar N e gerar o número H. 
*/

#include <stdio.h>

int main (void) {
	int n=0, h=1;
	float soma_d=0, div_d=0;

	printf("Sendo         1   1   1       1\n");
	printf("      H = 1 + - + - + - + ... -\n");
	printf("              2   3   4       N\n\n");
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	
	do {
		div_d = 1 / (float)h;
		printf("\n%f", div_d);
		soma_d = soma_d + div_d;
		h++;
	} while (h <= n);

	printf("\n\n\nN = %f", soma_d);
	return 0;
}

