/*
4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro
e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "portuguese");

    float chico=150, ze=110;
    int i=1;

    while (1) {
        chico += 2;
        ze += 3;
        printf("%d° ano - Chico: %.2f | Zé: %.2f\n", i, chico, ze);

        if (ze > chico) {
            break;
        }
        i++;
    }

    printf("\nForam necessários %d anos para que Zé se tornasse maior do que Chico.\n", i);
    printf("\n\n\n");
    return 0;
}