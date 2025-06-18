/*
3) Escreva na tela os n�meros primos que est�o entre 1 e 100.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

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
    
    system("Pause");
    return 0;
}
