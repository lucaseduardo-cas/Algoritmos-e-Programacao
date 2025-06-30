/*
2- A nota de um aluno em uma disciplina é a média ponderada das notas de suas duas avaliações parciais. A primeira
avaliação parcial tem peso 2 e a segunda avaliação parcial tem peso 3. Se a média do aluno for maior ou igual a sete, o aluno
está aprovado. Se a média do aluno for menor que três, o aluno está reprovado. Se a média do aluno for menor que sete e
maior ou igual a três, o aluno irá para a recuperação. Faça um programa para calcular a média de um aluno em uma
determinada disciplina e informar o seu estado final. O programa deverá exibir a seguinte frase:
O aluno _____________ obteve média _________ e está ______________. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    float nota1, nota2, mediaP;
    char nome[20];

    printf("Nome do aluno: ");
    scanf("%s", nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    mediaP = ((nota1 * 2.0) + (nota2 * 3.0)) / 5.0;

    printf("\nO aluno %s obteve média %.2f e está", nome, mediaP);

    if (mediaP >= 7.0) {
        printf(" aprovado!");
    } else if (mediaP < 3.0) {
        printf(" reprovado!");
    } else {
        printf(" recuperação!");
    }
    
    printf("\n\n");
    return 0;
}