/*
Exercício 9: Funções para Manipular struct com Ponteiro
Enunciado:
- Crie uma struct chamada Aluno com os campos matricula (inteiro) e media (flutuante). 
- No main, declare uma variável do tipo Aluno. 
- Crie uma função preencherAluno que receba um ponteiro para essa struct como parâmetro e preencha seus campos com dados lidos do teclado. 
- Em seguida, crie outra função imprimirStatus que receba a struct por valor (cópia) e imprima a matrícula, a média, e uma mensagem indicando se ele foi aprovado (média >= 7.0) ou reprovado.

Funções a criar:
- void preencherAluno(Aluno *a): Preenche os dados de um aluno usando ponteiro.
- void imprimirStatus(Aluno a): Exibe o status do aluno.
- Conceitos a praticar:
- structs e ponteiros (->).
- Passagem de structs por referência e por valor.
- Modularização do código.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Aluno {
    char nome[50];
    char matricula[12];
    float media;
};

typedef struct Aluno Aluno;

void limparBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void preencherAluno(Aluno *p) {
    int apenasDigitos;
    printf("Nome do aluno: ");
    fgets(p->nome, 50, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';

    while (1) {
        system("clear");
        printf("Nome do aluno: %s\n", p->nome); 
        printf("Digite a matrícula do aluno (exatamente 11 caracteres): ");
        fgets(p->matricula, 12, stdin);
        p->matricula[strcspn(p->matricula, "\n")] = '\0';
        printf("\n");

        if (strlen(p->matricula) == 11) {
            // A matricula precisa ser apenas de numeros
            apenasDigitos = 1;
            for (int i = 0; i < strlen(p->matricula); i++) {
                if (!isdigit(p->matricula[i])) {
                    apenasDigitos = 0;
                    break;
                }
            }
            
            if (apenasDigitos) {
                break;
            } else {
                printf("Matrícula inválida. Deve conter apenas números.");
                limparBuffer();
            }
        } else {
            printf("Matrícula inválida. Tente novamente.");
            limparBuffer();
        }
        if (strlen(p->matricula) != 11 || apenasDigitos == 0) {
            printf("\nPressione Enter para continuar...");
            getchar();
            continue;
        }
    }
}

void digitarNota(Aluno *p) {
    float nota1, nota2;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    limparBuffer();

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    limparBuffer();

    p->media = ((nota1 * 2) + (nota2 * 3)) / 5;
}

void imprimirStatus(Aluno p) {
    printf("\n\nNome do aluno .......... : ");
    puts(p.nome);
    printf("Matrícula aluno ........ : %s\n", p.matricula);
    if (p.media >= 7.0) {
        printf("Média de ............... : %.2f\n", p.media);
        printf("                           Aluno Aprovado!\n");
    } else {
        printf("Média de ............... : %.2f\n", p.media);
        printf("                           Aluno Reprovado!\n");
    }
}

int main(void) {
    Aluno discente;

    system("clear");
    preencherAluno(&discente);
    digitarNota(&discente);
    imprimirStatus(discente);

    return 0;
}