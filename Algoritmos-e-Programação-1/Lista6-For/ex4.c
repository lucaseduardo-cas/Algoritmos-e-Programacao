/*
4) Um reservatório de água, com capacidade de 10.000 litros, foi esvaziado para fazer
manutenção. Quando volta à atividade existe uma vazão de entrada de 0,3 litros por minuto
e uma vazão de saída de 0,15 litros por minuto. Em uma hora quantos litros teremos no
reservatório?
*/

#include <stdio.h>

int main (void) {
    int i;
    float e = 0.3, s = 0.15, x = 0.0; // Entrada e saída

    for (i=1; i<=60; i++) { 
        e = e + 0.3; 
        s = s + 0.15;
        x = e = s;
    }

    printf("Em 1h teremos: %.2f Litros no reservatório.\n\n", x);
    
    return 0;
}
