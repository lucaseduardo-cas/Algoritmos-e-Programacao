/*
Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int a[6]={1, 0, 5, -2, -5, 7};
    int n;

    printf("Escolha um número inteiro: ");
    scanf("%d", &n);

    for (int i=0; i<6; i++) {
        if (i == 0 || i == 1 || i == 5) {
            n += i;
        }
    }
    printf("\nSoma: %d\n\n\n", n);
    

    printf("\nValor do vetor A:\n");
    for (int i=0; i<6; i++) {
        if (i == 4) {
            a[i] = 100;
        }
        printf("%3d\n", a[i]);
    }

    printf("\n\n\n");
    return 0;
}