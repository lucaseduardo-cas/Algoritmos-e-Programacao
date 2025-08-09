/*
Exercício 7: Ponteiros para Modificar Variáveis Simples
Enunciado:
Crie um programa em C que declare duas variáveis inteiras no main. Crie uma função chamada trocarValores que receba os endereços de memória dessas duas variáveis como parâmetros. Dentro da função trocarValores, troque os valores das duas variáveis. No main, chame a função trocarValores e, em seguida, chame uma função exibirValores para imprimir os valores das variáveis, demonstrando que a troca realmente ocorreu.

Funções a criar:

void trocarValores(int *a, int *b): Recebe dois ponteiros para inteiros e troca os valores que eles apontam.

void exibirValores(int a, int b): Recebe dois inteiros e os exibe na tela.

Conceitos a praticar:

Ponteiros como parâmetros de funções.

Passagem por referência para modificar valores.

Desreferenciação de ponteiros (*).
*/

#include <stdio.h>
#include <stdlib.h>

void digitarValores(int *a, int *b) {
    printf("Valor de A: ");
    scanf("%d", a);
    printf("Valor de A: ");
    scanf("%d", b);
}

void trocarValores (int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void exibirValores(int a, int b) {
    printf("\nValor de A: %d\n", a);
    printf("Valor de B: %d\n", b);
}

int main(void) {
    int x1, x2;

    system("clear");
    digitarValores(&x1, &x2);
    exibirValores(x1, x2);
    trocarValores(&x1, &x2);
}