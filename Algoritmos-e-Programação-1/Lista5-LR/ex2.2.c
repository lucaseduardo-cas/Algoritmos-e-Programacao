/*
Faça um programa para exibir os quadrados dos números inteiros de 
15 a 200.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n=15, q=0;
	
	while (n <= 200) {
		q = pow(n, 2);
		printf("%d = %d\n", n, q);
		n++;	
	}
	
system("Pause");
return 0;

}
