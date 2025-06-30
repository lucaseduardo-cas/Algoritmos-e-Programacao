/*
5 - Recomendam-se estudantes para bolsas de estudo em função de seu desempenho anterior. A natureza das recomendações
é baseada na seguinte tabela:
           Média          |     Recomendação
        Média ≥ 9,0       |  Altamente recomendado
        8,0 ≤ Média < 9,0 |  Fortemente recomendado
        7,0 ≤ Média < 8,0 |  Recomendado
        Média < 7,0 Não   |  recomendado

Faça um programa para ler o nome e a média de um aluno e determinar sua recomendação. O programa deverá exibir a
seguinte mensagem:
O aluno ____________ é __________________. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];
    float mediaAluno;

    printf("============== PROGRAMA DE BOLSAS ==============\n\n");
    printf("Nome: ");
    scanf("%s", nome);
    printf("Média: ");
    scanf("%f", &mediaAluno);

    if (mediaAluno >= 9.0) {
        printf("\nAltamente recomendado.");
    } else if (mediaAluno >= 8.0 && mediaAluno < 9.0) {
        printf("\nFortemente recomendado.");
    } else if (mediaAluno >= 7.0 && mediaAluno < 8.0) {
        printf("\nRecomendado.");
    } else {
        printf("\nNão recomendado.");
    }

    printf("\n\n");
    return 0;
}