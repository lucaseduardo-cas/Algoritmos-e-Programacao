/*
07 - Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
*/

#include <stdio.h>

int main() {
    int anos, meses, dias;

    printf("Digite a idade:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias : ");
    scanf("%d", &dias);

    dias = dias + (meses * 30) + (anos * 365);

    printf("\nDias: %d\n\n", dias);
    return 0;
}
