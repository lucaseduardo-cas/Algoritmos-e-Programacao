/*
Exercício 3: Função com Retorno de Valor e Parâmetros
Enunciado:
Crie um programa em C que leia dois números inteiros do usuário no main. Crie uma função chamada somarNumeros que receba esses dois números como parâmetros e retorne a soma deles. No main, chame a função somarNumeros e imprima o resultado retornado na tela.
*/

#include <stdio.h>

int somarNumeros(int n1, int n2) {
    int soma;
    soma = n1 + n2;
    return soma;
}

int main(void) {
    int n1, n2;
    int somaFinal;

    printf("Digite 2 números inteiros:\n");
    printf("1° número: ");
    scanf("%d", &n1);
    printf("2° número: ");
    scanf("%d", &n2);

    somaFinal = somarNumeros(n1, n2);

    printf("A soma de %d e %d é %d\n", n1, n2, somaFinal);
    return 0;
}