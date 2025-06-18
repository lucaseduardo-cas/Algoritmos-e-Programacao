/*
08 - Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em
horas, minutos e segundos
*/

#include <stdio.h>

int main () {
    int horas, minutos, segundos;

    printf("========== CONVERTER SEGUNDOS EM HORAS/MINUTOS/SEGUNDOS ==========\n\n");
    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &segundos);

    horas    = segundos / 3600;
    minutos  = segundos % 3600 / 60;
    segundos = segundos % 3600 % 60;

    printf("\n%02d:%02d:%02d\n\n", horas, minutos, segundos);

    return 0;
}
