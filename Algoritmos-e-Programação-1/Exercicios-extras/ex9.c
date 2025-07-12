/*
9. Faça	 um	 programa	 em	 C	 que	 receba	 a	 idade	 de	 10	 pessoas	 e	 mostre	
quantas	são	maiores	que	18	anos.	
*/

#include <stdio.h>

int main(void) {
    int i;
    int pessoa, maiorQue18=0;

    printf("Digite a idade de 10 pessoas:\n");
    for (i = 1; i <= 10; i++) {
        printf("%2d° Pessoa: ", i);
        scanf("%d", &pessoa);
        
        if (pessoa > 18) {
            maiorQue18++;
        }
    }

    printf("\n%d pessoa(s) são maiores que 18 anos\n\n", maiorQue18);
    return 0;
}