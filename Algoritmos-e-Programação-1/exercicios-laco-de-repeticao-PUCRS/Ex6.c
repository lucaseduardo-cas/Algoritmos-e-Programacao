/*
6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados 
através de códigos. Os dados utilizados para a contagem dos votos obedecem à 
seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int voto=1;
    int c1=0, c2=0, c3=0, c4=0, nulo=0, branco=0;
    int i=0;

    while (1) {
    printf("[1] Candiato 1\n");
    printf("[2] Candiato 2\n");
    printf("[3] Candiato 3\n");
    printf("[4] Candiato 4\n");
    printf("[5] Nulo\n");
    printf("[6] Branco\n");
    printf("(Digite 0 pra finalizar) Eleitor %d: ", i + 1);
    scanf("%d", &voto);

        if (voto == 0 ) {
            break;
        }

        switch (voto) {
        case 1: 
            printf("\nVoto em Candidato 1 confirmado!\n\n");
            c1++;     
            break;
        case 2: 
            printf("\nVoto em Candidato 2 confirmado!\n\n");
            c2++;     
            break;
        case 3: 
            printf("\nVoto em Candidato 3 confirmado!\n\n");
            c3++;     
            break;
        case 4: 
            printf("\nVoto em Candidato 4 confirmado!\n\n");
            c4++;     
            break;
        case 5: 
            printf("\nVoto nulo confirmado!\n\n");
            nulo++;   
            break;
        case 6: 
            printf("\nVoto em branco confirmado!\n\n");
            branco++; 
            break;
        default: 
            printf("\nVoto inválido!\n\n");
            break; 
        }

        if (voto != 0) {
            system("pause");
            system("cls");
        }

        i++;
    }

    printf("\nTotal de votos de cada candidato:\n");
    printf("    Candidato 1 - votos: %d\n", c1);
    printf("    Candidato 2 - votos: %d\n", c2);
    printf("    Candidato 3 - votos: %d\n", c3);
    printf("    Candidato 4 - votos: %d\n", c4);
    printf("          Nulos - votos: %d\n", nulo);
    printf("        Brancos - votos: %d\n", branco);

    printf("\n\n\n");
    return 0;
}