/*18. Faca um programa que :

- Leia um vetor de 10 numeros. 
- Leia um número  x. 
- Conte os multiplos de um número inteiro  x num vetor e mostre-os na tela.
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

    // Leia um vetor de 10 números
    printf("Escolha 10 números inteiros:\n");
    for (i=0; i<10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\n");

    // Lendo um número "x"
    printf("Escolha um número: ");
    scanf("%d", &x);

    // Múltiplos de um número inteiro "x" num vetor
    printf("\n");
    printf("Verificando possíveis múltiplos do número %d dos números ", x);
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
                printf("Múltiplos encontados:\n");
                validacao = 1;
            }
            printf("%d, ", n[i]);    
        } 
    }

    if (!validacao) {
        printf("Nenhum múltiplo de %d encontrado.", x);
    }

    printf("\n\n\n");
    return 0;
}