/*
Exercício 1: Minha Primeira Função
Enunciado:
Crie um programa em C que contenha uma função chamada funcaoSaudar. Esta função não deve receber nenhum valor e não deve retornar nenhum valor. A única tarefa da função saudar é imprimir a mensagem "Olá do mundo das funções!" na tela. No programa principal (main), chame a função saudar uma vez.

Conceitos a praticar:

Definição básica de uma função (void nomeFuncao()).

Chamada de uma função a partir de
*/

#include <stdio.h>

void funcaoSaudar() {
    printf("Olá do mundo das funções!");
    printf("\n\n");
}

int main(void) {
    funcaoSaudar();
    return 0;
}