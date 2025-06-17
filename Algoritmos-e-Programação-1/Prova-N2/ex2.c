/*
A distância entre Goiânia e São Paulo é de 1969 km. Chico parte de Goiânia com uma
velocidade média de 95 km/h, enquanto Zé parte de São Paulo com uma velocidade média
de 82 km/h. Implemente um programa que calcule a distância percorrida por Chico quando
ele e Zé se encontrarem.
*/

#include <stdio.h>

int main() {
    float velChico = 95; // Km/h
    float velZe = 82; // Km/h
    float tempo;
    float distanciaChico;

    tempo = 1969 / (velChico + velZe);
    distanciaChico = velChico * tempo;

    printf("Chico: %.2f m/s\n", velChico);
    printf("Zé: %.2f m/s\n", velZe);
    printf("Tempo: %.3f\n", tempo);
    printf("Distância percorrida por Chico quando ele se encontrar com Zé: %.2f\n", distanciaChico);

    return 0;
}
