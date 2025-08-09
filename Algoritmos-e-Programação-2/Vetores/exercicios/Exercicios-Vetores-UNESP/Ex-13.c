/*
13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.
*/

#include <stdio.h>

int main(void) {
    int valor[5];
    int maior=-10000, menor=10000;
    int posMaior, posMenor;
    int i;

    printf("Digite 5 valores:\n");
    for (i = 0; i < 5; i++) {
        printf("%2d° valor: ", i + 1);
        scanf("%d", &valor[i]);

        if (maior < valor[i]) {
            maior = valor[i];
            posMaior = i;
        }
        if (menor > valor[i]) {
            menor = valor[i];
            posMenor = i;
        }
    }
    printf("\n");
    printf("Posição do maior valor: %d\n", posMaior);
    printf("Posição do menor valor: %d\n\n", posMenor);
    return 0;
}