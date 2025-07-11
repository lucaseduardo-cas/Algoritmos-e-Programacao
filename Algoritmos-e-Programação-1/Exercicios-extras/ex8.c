/*
8.	Faça		um		programa	em	C	que		receba		um		número		inteiro		e	posiavo,	e	
diga	 se	 esse	 número	 é	 primo	 ou	 não.	 Obs:	 Um	 número	 é	 primo	 somente	
quando	for	divisível		por	1	e	por	ele	mesmo.	
*/

#include <stdio.h>

int main(void) {
    int n;
    int i;
    int j=1;

    printf("Digite um número inteiro positivo(0 /sair):\n");
    while (1) {
        printf("%3d° número: ", j);
        scanf("%d", &n);
        if (n == 0) {
            printf("Programa finalizado...\n");
            break;
        } 
        if (n < 2) {
            printf("%3d .. NÃO é primo!\n\n", n);
            continue;
        }
        for (i = 2; i <= n * n; i++) {
            if (i != n) {
                if (n % i == 0) {
                    printf("%3d .. NÃO é primo!\n\n", n);
                    break;
                } 
            } else {
                printf("%3d ...... é primo!\n\n", n);
                break;
            }
        }
        j++;
    }
    return 0;
}