/*
9 - Escreva um programa que receba dois números e que disponibilize as opções abaixo e imprima o resultado da operação.:
 1 - retornar o quociente inteiro de uma divisão;
 2 - retornar a multiplicação de dois números;
 3 - retornar o soma de dois números;
 4 – retornar a subtração de dois números.
 5 – retornar mensagem de erro (opção inválida) 
*/

#include <stdio.h>

int main(void) {
    int a, b, resultado;
    int opcao;

    printf("Digite 2 números inteiros:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    printf("\n");
    printf("[1] - retornar o quociente inteiro de uma divisão;\n");
    printf("[2] - retornar a multiplicação de dois números;\n");
    printf("[3] - retornar o soma de dois números;\n");
    printf("[4] - retornar a subtração de dois números.\n");
    printf("      Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        if (a % b == 0) {
            resultado = a / b;
            printf("\nQuociente inteiro de %d / %d = %d", a, b, resultado);
        } else {
            printf("\nQuociente NÃO inteiro para %d / %d", a, b);
        }
    } else if (opcao == 2) {
        resultado = a * b;
        printf("\nMultiplicação de %d * %d = %d", a, b, resultado);
    } else if (opcao == 3) {
        resultado = a + b;
        printf("\nSoma de %d + %d = %d", a, b, resultado);
    } else if (opcao == 4) {
        resultado = a - b;
        printf("\nSubtração de %d + %d = %d", a, b, resultado);
    } else {
        printf("\nOpção inválida!");
    }

    printf("\n\n");
    return 0;
}