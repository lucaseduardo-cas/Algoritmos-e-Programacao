/*
3.	Faça	 um	 programa	em	 C	 (com	a	estrutura	 do...while)	 que	leia	 20	 valores	
inteiros	e:	
–	Encontre	e	mostre	o	maior	valor;	
–	Encontre	e	mostre	o	menor	valor;	
–	Calcule	e	mostre	a	média	dos	números	lidos;	
*/

#include <stdio.h>

int main(void) {
    int maiorValor=-1, menorValor=9999999, soma=0, media;
    int n;
    int i=0;

    printf("Digite 20 números inteiros:\n");
    do {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n);
        if (maiorValor < n) {
            maiorValor = n;
        }
        if (menorValor > n) {
            menorValor = n;
        }
        soma += n;
        i++;
    } while (i < 20);

    media = soma / i;

    printf("\n");
    printf("Maior valor: %2d\n", maiorValor);
    printf("Menor valor: %2d\n", menorValor);
    printf("Média .... : %2d\n", media);
    printf("\n");
    return 0;
}