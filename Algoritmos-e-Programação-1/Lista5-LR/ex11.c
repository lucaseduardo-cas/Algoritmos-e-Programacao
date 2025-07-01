/*
Ex Extra - Tabuada
*/

#include <stdio.h>

int main (void) {
	int n1, n2, resultado;
	
	for (n1=1; n1<= 10; n1++) {
		printf("* TABUADA DE %d:\n", n1);
		for (n2=1; n2 <= 10; n2++) {
			resultado = n1 * n2;	
			printf("%2d x %2d = %3d\n", n1, n2, resultado);
		}
		printf("\n\n");	
	}
		
	return 0;
}
