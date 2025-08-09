/*
24. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando a 
matrícula do aluno e o segundo representando a sua altura em metros. Encontre o aluno
mais baixo e o mais alto. Mostre a matrícula do aluno mais baixo e do mais alto, juntamente
com suas alturas.
*/

#include <stdio.h>

int main(void) {
    int matricula[10];
    int matriculaAlunoMaisAlto, matriculaAlunoMaisBaixo, validacao=1;
    float alunoMaisAlto=-10000, alunoMaisBaixo=10000;
    float altura[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        while(1) {
            printf("Matrícula do %d° aluno (4 dígitos) .... : ", i + 1);
            scanf("%d", &matricula[i]);
            if (matricula[i] < 1000 || matricula[i] > 9999) {
                printf("\nMatrícula inválida! Digite uma matrícula com 4 dígitos.\n");
                continue;
            }
            if (i > 0) {
                for (j = 0; j < i; j++) {  
                    if (j != i && matricula[i] == matricula[j]) {
                        printf("\nEssa matrícula já pertende a outro aluno!\n");
                        validacao = 0;
                        break;
                    } else {
                        validacao = 1;
                    }
                }
            } 
            if (validacao == 1) {
                break;
            } else {
                continue;
            }
        }
        while(1) {
            printf("Altura do %d° aluno ................... : ", i + 1);
            scanf("%f", &altura[i]);
            printf("\n");
            if (altura[i] < 0.50 || altura[i] > 2.50) {
                printf("\nAltura inválida! Digite uma altura entre 0.50m e 2.50m\n");
                continue;
            } else {
                break;
            }
        }

        if (alunoMaisAlto < altura[i]) {
            alunoMaisAlto = altura[i];
            matriculaAlunoMaisAlto = matricula[i];
        }
        if (alunoMaisBaixo > altura[i]) {
            alunoMaisBaixo = altura[i];
            matriculaAlunoMaisBaixo = matricula[i];
        }
    }

    printf("\n\nRESULTADO:\n");
    printf("Aluno mais alto ....... : %.2f\n", alunoMaisAlto);
    printf("Matrícula ............. : %d\n\n", matriculaAlunoMaisAlto);
    printf("Aluno mais baixo ...... : %.2f\n", alunoMaisBaixo);
    printf("Matrícula ............. : %d\n\n", matriculaAlunoMaisBaixo);
    return 0;
}