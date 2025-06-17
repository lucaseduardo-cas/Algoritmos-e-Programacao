#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n=0, h=1;
	float soma_d=0, div_d=0;

	printf("Sendo         1   1   1       1\n");
		printf("      H = 1 + – + – + – + ... –\n");
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
		
system ("Pause");
return 0;

}

