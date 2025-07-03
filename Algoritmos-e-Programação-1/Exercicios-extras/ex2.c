/*
2.	 Faça	 um	 programa	 em	 C	 que	 mostre	 a	 tabuada	 de	 qualquer	 número	
escolhido	pelo	usuário	(considerar	tabuada	do	número	1	ao	10).
*/

#include <stdio.h>

int main(void) {
    int n, x;

    while(1) {
        printf("Escolha um número inteiro: ");
        scanf("%d", &n);
        if (n == -1) {
            break;
        } 

        printf("\n=== TABUADA DE %d ===\n", n);
        for (int i = n; i <= n; i++) {
            for (int j = 1; j <=10; j++) {
                x = i * j;
                printf("%2d  x %2d = %3d\n", i, j, x);
            }
            printf("\n");
        }
    }

    return 0;
}