/*O m�ximo divisor comum de dois inteiros � o maior n�mero que divide ambos sem deixar resto. Escreva
um programa que l� dois inteiros e calcula o seu m�ximo divisor comum.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int i, a, b, mdc=0;
    
 	printf("Primeiro n�mero: ");
    	scanf("%d", &a);
   	printf("Segundo n�mero: ");
   		scanf("%d", &b);
    	
    i = 1;	
    while (i <= a && i <= b) {
    	if (a % i == 0 && b % i == 0) {
    		mdc = i;
		}
    	i++;
	}
  
  	printf("\nMDC %d, %d = %d\n\n\n", a, b, mdc);
  	
system("Pause");
return 0;

}

