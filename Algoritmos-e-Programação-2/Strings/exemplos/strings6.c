/*
Imprimindo tabela ascii
*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int i;

    for(i = 0; i < 128; i++) {
        printf("%d\t%c\n", i, i);
        if (i == 30 || i == 62 || i == 94 || i == 126) {
            printf("\n");
        }
    }
}