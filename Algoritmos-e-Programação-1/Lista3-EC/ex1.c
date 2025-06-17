/*
01 - Fazer um algoritmo que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média do aluno, uma
mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.
*/

#include <stdio.h>

int main () {
    float n1, n2, n3, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 6) {
        printf("\nAprovado! Média: %.2f\n\n", media);
    } else {
        printf("\nReprovado! Média: %.2f\n\n", media);
    }

    return 0;
}
