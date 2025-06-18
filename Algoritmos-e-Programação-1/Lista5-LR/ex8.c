#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, resultado;
	
	for (n1=1; n1<= 10; n1++) {
		printf("Tabuada de %d:\n", n1);
		for (n2=1; n2 <= 10; n2++) {
			resultado = n1 * n2;	
				printf("%d x %d = %d\n", n1, n2, resultado);
		}
		printf("\n");	
	}
		
system("Pause");
return 0;

}
