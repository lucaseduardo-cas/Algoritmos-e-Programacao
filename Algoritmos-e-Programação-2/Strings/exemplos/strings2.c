#include <stdio.h>
#include <string.h>
#include <locale.h>

#define  N 20

int main(void) {
    setlocale(LC_ALL, "portuguese");

    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    // Atriguindo conteúdo de uma string para outra:
    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}