/*
4. 	 Faça	 um	 programa	 em	 C	 (ualize	 a	 estrutura	 for)	 que	 leia	 10	 valores	
inteiros	e:	
•	Encontre	e	mostre	o	maior	valor		
•	Encontre	e	mostre	o	menor	valor		
•	Calcule	e	mostre	a	média	dos	números	lidos	
*/

#include <stdio.h>

int main(void) {
    int valorMaior=-999999999, valorMenor=999999999;
    int soma=0, media;
    int n, i;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n);

        if (valorMaior < n) {
            valorMaior = n;
        }
        if (valorMenor > n) {
            valorMenor = n;
        }
        soma += n;
    }

    media = soma / i;

    printf("\nMaior valor: %3d", valorMaior);
    printf("\nMenor valor: %3d", valorMenor);
    printf("\nMédia .... : %3d", media);
    printf("\n\n");
    return 0;
}