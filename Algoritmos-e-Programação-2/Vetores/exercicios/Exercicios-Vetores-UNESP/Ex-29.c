/*
29. Faça um programa que receba 6 numeros inteiros e mostre: 
• Os numeros pares digitados; 
• A soma dos numeros pares digitados; 
• Os numeros Ímpares digitados;
• A quantidade de numeros Ímpares digitados;
*/

#include <stdio.h>

int main(void) {
    int qtdPares, qtdImpares;
    int somaPares;
    int n[6], p[6];
    int i, j;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nNúmeros pares digitados:\n");
    qtdPares = 1;
    for (i = 0; i < 6; i++) {
        if (n[i] % 2 == 0) {
            printf("%d\n", n[i]);
            somaPares += n[i];
            qtdPares++;
        }
    }

    printf("\nSoma dos números pares digitados: %d\n", somaPares);

    printf("\nNúmeros ímpares digitados:\n");
    qtdImpares = 1;
    for (i = 0; i < 6; i++) {
        if (n[i] % 2 != 0) {
            printf("%d\n", n[i]); 
            qtdImpares++;
        }
    }

    printf("\nQuantidade de números ímpares digitados: %d", qtdImpares);
    printf("\n\n\n");
    return 0;
}