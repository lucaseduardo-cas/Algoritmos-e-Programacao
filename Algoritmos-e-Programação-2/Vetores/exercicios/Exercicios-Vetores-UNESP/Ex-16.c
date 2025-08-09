/*
16. Fac?a um programa que leia um vetor de 5 posic?oes para n?meros reais e, depois, um
codigo inteiro. Se o c?digo for zero, finalize o programa; se for 1, mostre o vetor na ordem ?
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ?
escreva uma mensagem informando que o codigo ? e inv ? alido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    float n[5];
    int i, opcao=0;

    printf("Digite 5 números inteiros:\n");
    for (i=0; i<5; i++) {
        printf("%d° número: ", i + 1);
        scanf("%f", &n[i]);
    }

    while (1) {
    printf("\n[0] Finalizar\n");
    printf("[1] Ordem direta\n");
    printf("[2] Ordem inversa\n");
    printf("    Opção: ");
    scanf("%d", &opcao);

        switch (opcao) {
        case 0:
            printf("\nOperação finalizada...");
            return 0;
            break;
        case 1:
            printf("\nOrdem direta\n");
            for (i=0; i<5; i++) {
                printf("%.2f\n", n[i]);
            }
            break;
        case 2:
            printf("\nOrdem inversa\n");
            for (i=4; i>=0; i--) {
                printf("%.2f\n", n[i]);
            }
            break;;
        default:
            printf("\nCódigo inválido!\n");
            break;
        }
    }

    printf("\n\n\n");
}