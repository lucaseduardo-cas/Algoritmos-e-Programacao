/*18. Faca um programa que :

- Leia um vetor de 10 numeros. 
- Leia um n�mero  x. 
- Conte os multiplos de um n�mero inteiro  x num vetor e mostre-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    int n[10], x;
    int validacao=0;
    int i;

    // Leia um vetor de 10 n�meros
    printf("Escolha 10 n�meros inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%2d� n�mero: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\n");

    // Lendo um n�mero "x"
    printf("Escolha um n�mero: ");
    scanf("%d", &x);

    // M�ltiplos de um n�mero inteiro "x" num vetor
    printf("\n");
    printf("Verificando poss�veis m�ltiplos do n�mero %d dos n�meros ", x);
    for (i=0; i<10; i++) {
        if (n[i] < 10) {
            printf("%d; ", n[i]);
        } else {
            printf("%d", n[i]);
        }
    }
    printf("\n\n");

    for (i=0; i<10; i++) {
        if ((n[i] % x) == 0) {
            if (!validacao) {
                printf("M�ltiplos encontados:\n");
                validacao = 1;
            }
            printf("%d, ", n[i]);    
        } 
    }

    if (!validacao) {
        printf("Nenhum m�ltiplo de %d encontrado.", x);
    }

    printf("\n\n\n");
    return 0;
}