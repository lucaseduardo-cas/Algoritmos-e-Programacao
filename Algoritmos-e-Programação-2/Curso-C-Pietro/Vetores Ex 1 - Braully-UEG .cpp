/*
Exercício 1: Escrever um programa que leia o dia, mês e ano atual e imprima a 
data atual no formato dd/mm/aaaa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    int data[3];
    int i;

    for (i=0; i<3; i++) {
        printf("Digite a data atual no formato (DD MM AAAA):\n");
        scanf("%d", &data[i]);
    }

    printf("Data inserida:\n\n");
    for (i=0; i<3; i++) {
        if (i == 0 || i == 1) {
            printf("%d/", data[i]);
        } else {
            printf("%d", data[2]);
        }
    }

    printf("\n\n\n");
    return 0;
}