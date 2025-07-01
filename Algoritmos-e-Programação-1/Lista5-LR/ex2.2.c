/*
EXEMPLO PROFESSOR:

Faça um programa para exibir os quadrados dos n�meros inteiros de 
15 a 200.
*/

#include <stdio.h>

int main(void) {
	int n=15, q=0;
	
	while (n <= 200) {
		q = pow(n, 2);
		printf("%d = %d\n", n, q);
		n++;	
	}
	
	return 0;
}
