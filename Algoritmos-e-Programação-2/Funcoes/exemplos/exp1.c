/*
Parâmetros de uma Função: Retorno de Função

Devolver valores de uma função é uma forma de obter informações da função.
Valores de retorno possíveis:
int, char, float, double, void, ponteiros e estruct.
*/

#include <stdio.h>

void contadora(int i, int f){
    int cont = 0;
    printf("Contagem de %d a %d\n", i, f);
    for(i = i; i <= f; i++){
        printf("%d ", i);
        cont = cont + i;
    }
    printf("\nSoma-total: %d\n", cont);
}

void main() {
    contadora(1, 10);
}