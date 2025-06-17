/*
2) Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F”
e estado civil seja "C" (CASADA), solicitar o tempo de casada (anos).
*/

#include <stdio.h>
#include <string.h>

int main () {
    char nome[10];
    char sexo;
    char estadoCivil;
    int tempoCasada;

    printf("Nome: ");
    scanf(" %s", nome);
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Estado cívil (S/C): ");
    scanf(" %c", &estadoCivil);

    if (sexo == 'F' && estadoCivil == 'C') {
        printf("Tempo de casada(anos): ");
        scanf("%d", &tempoCasada);
    }

    return 0;
}
