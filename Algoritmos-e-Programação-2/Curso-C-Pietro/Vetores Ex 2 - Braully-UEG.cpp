/*
Exercício 2: Modificar o programa anterior: Após ler o dia e a data atual,
Ler a data de nascimento da pessoa e imprimir a idade da pessoa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    int data_atual[3], data_nascimento[3], idade;
    int i;

    for (i=0; i<3; i++) {
        printf("Digite a data atual no formato (DD MM AAAA):\n");
        scanf("%d", &data_atual[i]);
    }
    printf("\n");

    for (i=0; i<3; i++) {
        printf("Digite a sua data de nascimento no formato (DD MM AAAA):\n");
        scanf("%d", &data_nascimento[i]);
    }
    
    idade = data_atual[2] - data_nascimento[2];

    if (data_nascimento[1] > data_atual[1] || 
        (data_nascimento[1] == data_atual[1] && data_nascimento[0] > data_atual[0])) {
        idade--;
    }
    
    printf("\n\nA sua idade é: %d", idade);

    printf("\n\n\n");
    return 0;
}