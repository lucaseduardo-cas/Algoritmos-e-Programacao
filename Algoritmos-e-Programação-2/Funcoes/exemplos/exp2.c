/*
Parâmetros de uma Função: Retorno de Função
O comando return finaliza a execução da função e retorna o valor para a função
chamadora.
*/

#include <stdio.h>

int maior(int a, int b){
    if(a > b){
    return a;
    } else {
    return b;
    }
    printf("Esta linha não será executada\n");
}

void main() {
    int a = 10, b = 20;
    printf("Maior: %d\n", maior(a, b));
}