/*
16 - Criar um algoritmo que leia a idade de uma pessoa e que mostre a sua classe eleitoral:
• Não-eleitor (abaixo de 16 anos);
• Eleitor Obrigatório (entre 18 e 65 anos);
• Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos).
*/

#include <stdio.h>

int main () {
    int idade;

    printf("Digite a idade do eleitor: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("\nNão eleitor\n\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("\nEleitor obrigatório!\n");
    } else {
        printf("\nEleitor facultativo!\n");
    }

    return 0;
}