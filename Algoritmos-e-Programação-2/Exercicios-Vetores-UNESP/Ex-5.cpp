/*
5. Leia um vetor de 10 posi��es. Contar e escrever quantos valores pares ele possu�
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[10], qtd_pares=0;
    int i;

    printf("Digite 10 n�meros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%d� posi��o: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            qtd_pares++;
        }
    }

    printf("\nQuantidade de n�meros pares: %d", qtd_pares);

    printf("\n\n\n");
    return 0;
}