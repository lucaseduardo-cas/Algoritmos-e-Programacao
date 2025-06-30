/*
3 – Faça um programa para ler o nome e a idade de uma pessoa e determinar se esta pessoa é ou não maior de idade (idade
maior ou igual a 18 anos). O programa deve imprimir a seguinte frase:
_____________ tem ________ anos e é / não é maior de idade. 
*/

#include <stdio.h>
#include <string.h>

int main (void) {
    char nome[20];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\n%s tem %d anos e é maior de idade!", nome, idade);
    } else {
        printf("\n%s tem %d anos e NÃO é maior de idade!", nome, idade);
    }

    printf("\n\n");
    return 0;
}