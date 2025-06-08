/*
2– No colégio, “Minha Escolinha”, a nota bimestral de um aluno em uma disciplina é a média ponderada das
notas parciais. A primeira nota parcial tem peso 2 e a segunda nota parcial tem peso 3. Faça um programa
para obter o nome e as notas de um aluno em uma determinada disciplina e calcular sua média. O programa
deverá exibir a seguinte frase:
O aluno _________ obteve média _________.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    float nota1, nota2, media;

    printf("Aluno\nNome: ");
    scanf("%s", nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = ((nota1 * 2.0) + (nota2 * 3.0)) / 5.0;

    printf("Média: %.2f\n\n", media);

    return 0;
}
