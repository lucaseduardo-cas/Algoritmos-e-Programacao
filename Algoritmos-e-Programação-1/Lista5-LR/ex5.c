#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* n1 = 15; n2 = 9;
   máximo divisor de ambos: 3; 
  15 / 3 = 5 
   9 / 3 = 3
   
   dividir n1 && dividir n2 
*/

int main(void) {
	setlocale (LC_ALL, "Portuguese");
	
	int i=1, n1=0, n2=0, divisor=0;
	
	printf("Digite dois números inteiros: ");
		scanf("%d", &n1);
	printf("Digite dois números inteiros: ");
		scanf("%d", &n2);
			
	while(i <= n1 && i <= n2) {
		if ((n1 % i == 0) && (n2 % i == 0)){
		divisor = i;
		}
		i++; // i = i + 1; i (variável de controle)
	}
	
	printf("\n\nMDC (%d / %d) = %d\n\n\n", n1, n2, divisor);
	
	//printf("\n\nTeste: %d\n\n\n", divisor);

system("Pause");
return 0;

}
