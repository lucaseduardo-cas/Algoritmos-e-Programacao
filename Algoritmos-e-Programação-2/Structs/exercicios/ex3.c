/*
Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario
a informacão de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
tela
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_ALUNOS 5

typedef struct Aluno {
    char nome[50];
    int numeroMatricula;
    char curso[50];
} Aluno;

void limparBuffer () {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void incluirDadosAluno(Aluno aluno[]) {
    int i = 0;

    while (i < QTD_ALUNOS) {
        printf("Digite as informações do %d° aluno:\n", i + 1);
        printf("Nome ........................... : ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        printf("Número de matrícula ............ : ");
        scanf("%d", &aluno[i].numeroMatricula);
        limparBuffer();
        printf("Curso .......................... : ");
        fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
        printf("\n");
        i++;
    };
}

void imprimirDadosAluno(Aluno aluno[]) {
    int i = 0;

    printf("\n\n\n====================== IMPRIMINDO DADOS DOS ALUNOS ======================\n\n");
    while (i < QTD_ALUNOS) {
        printf("%dº aluno\n", i + 1);   
        printf("Nome: .................... : %s", aluno[i].nome);
        printf("Número de matrícula: ..... : %d\n", aluno[i].numeroMatricula);
        printf("Curso .................... : %s\n", aluno[i].curso);
        printf("\n");
        i++;
    }
}

int main (void) {
    Aluno alunos[QTD_ALUNOS];

    incluirDadosAluno(alunos);
    imprimirDadosAluno(alunos);
    return 0;
}