/*
13 - Escreva um algoritmo que descubra se um ano lido é bissexto. Um ano é bissexto se ele for múltiplo de 4, exceto quando ele for
múltiplo de 100. Os anos múltiplos de 100 somente são bissextos quando são múltiplos de 400, usado a partir de 1752 (por exemplo
1800 não é bissexto, mas 2000 é). 
*/

#include <stdio.h>

int main () {
    int ano;

    printf("========= VERIFICADOR DE ANO BISSEXTO =========\n\n");
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("\nAno: %d é bissexto!\n\n", ano);
    } else {
        printf("\nAno: %d NÃO é bissexto!\n\n", ano);
    }

    return 0;
}