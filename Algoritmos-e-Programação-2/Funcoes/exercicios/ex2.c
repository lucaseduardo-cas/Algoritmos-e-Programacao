/*
Exercício 2: Função com Parâmetro
Enunciado:
Crie um programa em C que leia um número inteiro do usuário no main. Em seguida, crie uma função chamada verificarParImpar que receba este número como parâmetro. Dentro da função verificarParImpar, determine se o número é par ou ímpar e imprima o resultado na tela. A função não deve retornar nenhum valor.
*/

#include <stdio.h>

void verificarParImpar(int n) {
    if (n == 0) {
        printf("Número inválido! %d é número neutro.\n", n);
    } else {
        if (n % 2 == 0) {
            printf("%d é par!\n", n);
        } else {
            printf("%d é ímpar!\n", n);
        } 
    }
}

int main(void) {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    verificarParImpar(n);

    return 0;
}