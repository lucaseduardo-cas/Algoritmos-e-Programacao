/*
3) Escreva na tela os números primos que estão entre 1 e 100.
*/

#include <stdio.h>

int main (void) {
    int i, j, divisores;

    for (i = 2; i <= 100; i++) { // Percorre os números de 2 a 100
        for (j = 2; j < i; j++) { // Testa divisores de 2 até (i - 1)
            if (i % j == 0) {
                break; // Se encontrar um divisor: número não é primo, sai do laço
            }
        }
        if (j == i) { // Se o laço interno completou, 'i' é primo
            printf("%d\n", i);
        }
    }

    return 0;
}
