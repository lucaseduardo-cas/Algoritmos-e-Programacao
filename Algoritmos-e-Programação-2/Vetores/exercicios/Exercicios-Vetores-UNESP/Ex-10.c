/*
10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral. 
*/

#include <stdio.h>

int main (void) {
    float nota[15], mediaGeral=0.0;
    int i;

    printf("Digite a nota de 15 alunos:\n");
    for (i = 0; i < 15; i++) {
        printf("%2d° aluno: ", i + 1);
        scanf("%f", &nota[i]);
        mediaGeral += nota[i];
    }
    mediaGeral /= i;

    printf("\nMédia Geral: %.2f\n\n", mediaGeral);
    return 0;
}