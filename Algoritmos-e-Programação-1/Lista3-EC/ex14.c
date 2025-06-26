/*
14 - Escrever um algoritmo que lê o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos
exercícios que fazem parte da avaliação. Calcular a média de aproveitamento do aluno, usando a fórmula:
Média Final= (nota1 + nota2 * 2 + nota3 * 3 + média dos exercícios) / 7

e o seu conceito, utilizando a tabela a seguir:

Média de Aproveitamento          Conceito
    9,1 à 10,0                       A
    7,6 à 9,0                        B
    6,1 à 7,5                        C
    4,1 à 6,0                        D
    < 4,0                            E

O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito
correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO, se o conceito for D ou E. 
*/

#include <stdio.h>

int main () {
    int codAluno; // Numero de identificacao
    float nota1, nota2, nota3, mediaEx, mediaAp;
    char conceito;
    
    printf("================= CALCULARA DE NOTA =================\n\n");
    printf("Digite o número de identificação do aluno: ");
    scanf("%d", &codAluno);
    printf("\nDigite as 3 notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    mediaEx = (nota1 + nota2 + nota3) / 3;
    mediaAp = (nota1 + (nota2 * 2) + (nota3 * 3) + mediaEx) / 7;

    if (mediaAp > 9.0 && mediaAp <=10.0) {
        conceito = 'A';
    } else if (mediaAp > 7.5 && mediaAp <= 9.0) {
        conceito = 'B';
    } else if (mediaAp > 6.0 && mediaAp <= 7.5) {
        conceito = 'C';
    } else if (mediaAp > 4.0 && mediaAp <= 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\nMatrícula do aluno: %d\n", codAluno);
    printf("Nota 1 ........................ : %5.2f\n", nota1);
    printf("Nota 2 ........................ : %5.2f\n", nota2);
    printf("Nota 3 ........................ : %5.2f\n", nota3);
    printf("Média de Aproveitamento ....... : %5.2f\n", mediaAp);
    printf("Conceito ...................... :     %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Aluno ......................... : APROVADO!\n\n");
    } else {
        printf("Aluno ......................... : REPROVADO!\n\n");
    }

    return 0;
}