#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");

	int numero=15, quadrado=0;

	printf("O quadrado dos números 15 até 200 são: \n\n");

	while (numero <= 200) {
		quadrado = numero * numero;
			printf("%d² = %d x %d = %d\n", numero, numero, numero, quadrado);
		numero++;
	}

system ("Pause");
return 0;

}

