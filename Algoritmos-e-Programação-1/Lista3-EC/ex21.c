/*
21 - Fazer um algoritmo que leia uma data, dia/mês/anos, no formato inteiro e escreva a mesma data no formato dia de (mês por
extenso) de ano
*/

#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data:\n");
    printf("Dia: ");
    scanf("%d", &dia);
    if (dia < 1 || dia > 31) {
        printf("\nDia inválido!\n");
        return 0;
    }
    printf("Mês: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12) {
        printf("\nMês inválido!\n");
        return 0;
    }
    printf("Ano: ");
    scanf("%d", &ano);
    if (ano < 1) {
        printf("\nAno inválido!\n");
        return 0;
    }

    if (mes == 1) {
        printf("\n%d de Janeiro de %d\n\n", dia, ano);
    } else if (mes ==  2) {
        printf("\n%d de Fevereiro de %d\n\n", dia, ano);
    } else if (mes ==  3) {
        printf("\n%d de Março de %d\n\n", dia, ano);
    } else if (mes ==  4) {
        printf("\n%d de Abril de %d\n\n", dia, ano);
    } else if (mes ==  5) {
        printf("\n%d de Maio de %d\n\n", dia, ano);
    } else if (mes ==  6) {
        printf("\n%d de Junho de %d\n\n", dia, ano);
    } else if (mes ==  7) {
        printf("\n%d de Julho de %d\n\n", dia, ano);
    } else if (mes ==  8) {
        printf("\n%d de Agosto de %d\n\n", dia, ano);
    } else if (mes ==  9) {
        printf("\n%d de Setembro de %d\n\n", dia, ano);
    } else if (mes == 10) {
        printf("\n%d de Outubro de %d\n\n", dia, ano);
    } else if (mes == 11) {
        printf("\n%d de Novembro de %d\n\n", dia, ano);
    } else {
        printf("\n%d de Dezembro de %d\n\n", dia, ano);
    }

    return 0;
}