/*
14. Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ?
e os escreva na tela.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");
    system("cls");

    int n[10];
    int i, j;
    int iguais = 0;
    int ja_exibido[10] = {0}; // Array para marcar números já exibidos

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%d° número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nNúmeros repetidos encontrados:\n");
    for (i = 0; i < 10; i++) {
        if (ja_exibido[i]) continue; // Pula se o número já foi exibido

        int repetido = 0; // Flag para verificar se o número atual tem repetição
        for (j = i + 1; j < 10; j++) {
            if (n[i] == n[j]) {
                repetido = 1; // Marca que o número foi repetido
                ja_exibido[j] = 1; // Marca o índice como já verificado
            }
        }

        if (repetido) {
            printf("%d; ", n[i]);
            iguais = 1;
        }

        ja_exibido[i] = 1; // Marca o número atual como já verificado
    }

    if (!iguais) {
        printf("Nenhum número repetido encontrado.");
    }

    printf("\n\n\n");
    return 0;
}
