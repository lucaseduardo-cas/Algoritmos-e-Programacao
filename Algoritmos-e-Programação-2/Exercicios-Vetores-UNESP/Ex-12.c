/*
12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.
*/

#include <stdio.h>

int main(void) {
    int valor[5];
    int maior=-10000, menor=10000, media;
    int i;

    printf("Digite 5 valores:\n");
    for (i = 0; i < 5; i++) {
        printf("%2d° valor: ", i + 1);
        scanf("%d", &valor[i]);
        if (maior < valor[i]) {
            maior = valor[i];
        }
        if (menor > valor[i]) {
            menor = valor[i];
        }
        media += valor[i];
    }
    media /= i;

    printf("\nValores digitados:\n");
    for (i = 0; i < 5; i++) {
        if (valor[i] != maior && valor[i] != menor) {
            printf("%2d", valor[i]);
        }
        if (valor[i] == maior) {
            printf("%2d - Maior número", valor[i]);
        }
        if (valor[i] == menor) {
            printf("%2d - Menor número", valor[i]);
        }
        printf("\n");
    }
    printf("\n%2d - Média\n\n", media);
    return 0;
}