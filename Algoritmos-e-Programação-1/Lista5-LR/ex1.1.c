/*
Fa�a um programa para calcular e exibir a soma dos cem primeiros n�meros inteiros
(1+2+3+4+5+...+99+100).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1=1, n2=2, soma=1; //n1 = �mpar; n2 = par
	
	while (n2 <= 100) { // enquanto n2 (par) for menor ou igual a 100
		printf("%d + %d\n", n1, n2);
		soma = soma + (n1 + n2);
		n1 += 2; //n1(1) + 2 = �mpar
		n2 += 2; //n2(2) + 2 = par
	}
	
	//imprime o resultado da soma de todos os n�meros de 1 � 100;
	printf("\n\n= %d\n\n\n", soma);
	
system("Pause");
return 0;

}
