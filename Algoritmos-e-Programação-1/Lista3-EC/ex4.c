/*
04 - Escrever um algoritmo que leia 3 números inteiros e que mostre o maior deles, supondo que todos sejam distintos.
*/

#include <stdio.h>

int main () {
    int n1, n2, n3, maior;

    printf("Digite 3 números inteiros:\n");
    printf("1° número: ");
    scanf("%d", &n1);
    printf("2° número: ");
    scanf("%d", &n2);
    printf("3° número: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("\nMaior número: %d\n\n", n1);
    } else if (n2 > n3 && n2 > n1) {
            printf("\nMaior número: %d\n\n", n2);
    } else {
        printf("\nMaior número: %d\n\n", n3);
    }

    return 0;
}
