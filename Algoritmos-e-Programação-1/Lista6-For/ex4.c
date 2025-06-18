/*
4) Um reservat�rio de �gua, com capacidade de 10.000 litros, foi esvaziado para fazer
manuten��o. Quando volta � atividade existe uma vaz�o de entrada de 0,3 litros por minuto
e uma vaz�o de sa�da de 0,15 litros por minuto. Em uma hora quantos litros teremos no
reservat�rio?
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int i;
    float e = 0.3, s = 0.15, x = 0.0; // Entrada e saída

    for (i=1; i<=60; i++) { 
        e = e + 0.3; 
        s = s + 0.15;
        x = e = s;
    }

    printf("Em 1h teremos: %.2f Litros no reservat�rio.\n\n", x);
    
    system("Pause");
    return 0;
}
