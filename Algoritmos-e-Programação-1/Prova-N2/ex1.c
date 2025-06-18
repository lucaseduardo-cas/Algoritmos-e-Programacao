/*
Questão 1: Eleição para Prefeito e Vice-Prefeito
Implemente um programa que simule uma eleição, onde os candidatos possuem os
seguintes números:
● 500: Candidato 1
● 600: Candidato 2
● 700: Candidato 3
● 800: Candidato 4

O programa deve receber a quantidade de eleitores e o voto de cada eleitor até que o título seja -1.
O programa deve contar os votos válidos e inválidos, e imprimir o candidato eleito para prefeito (o com
maior votos) e o vice-prefeito (o de maior votos entre os demais), além do total de votos inválidos.
*/

#include <stdio.h>

int main() {
    int candidato1, candidato2, candidato3, candidato4;
    int qtdEleitores, numero, votosValidos=0, votosInvalidos=0;
    int i, j=1;

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &qtdEleitores);

    for (i = qtdEleitores - 1; i > -1; i--) {
        printf("Título %3d - Digite o número do candidato:\n", i);
        printf("   [500]:       Candidato  1\n");
        printf("   [600]:       Candidato  2\n");
        printf("   [700]:       Candidato  3\n");
        printf("   [800]:       Candidato  4\n");
        printf("   [100]:            NULO\n");
        printf("    Número: ");
        scanf("%d", &numero);

        switch (numero) {
        case 500:
            printf("\nVoto em Candidato 1 realizado com sucesso!\n");
            candidato1++;
            break;
        case 600:
            printf("\nVoto em Candidato 2 realizado com sucesso!\n");
            candidato2++;
            break;
        case 700:
            printf("\nVoto em Candidato 3 realizado com sucesso!\n");
            candidato3++;
            break;
        case 800:
            printf("\nVoto em Candidato 4 realizado com sucesso!\n");
            candidato4++;
            break;
        case 100:
            printf("\nVoto NULO realizado com sucesso!\n");
            votosInvalidos++;
            break;
        default:
            printf("\nERRO! Digite uma opção corretas!\n");
            i = qtdEleitores + 1;
            break;
        }
    }

    votosValidos = candidato1 + candidato2 + candidato3 + candidato4;

    if (1) {
        if (candidato1 > candidato2 && candidato1 > candidato3 && candidato1 > candidato4) {
            printf("\nPrefeito eleito: Candidato 1 com %d votos!\n", candidato1);
            if (candidato2 > candidato3 && candidato2 > candidato4) {
                printf("Vice Prefeito eleito: Candidato 2 com %d votos!\n\n", candidato2);
            }
            if (candidato3 > candidato4 && candidato3 > candidato2) {
                printf("Vice Prefeito eleito: Candidato 3 com %d votos!\n\n", candidato3);
            }
            if (candidato4 > candidato2 && candidato4 > candidato3) {
                printf("Vice Prefeito eleito: Candidato 4 com %d votos!\n\n", candidato4);
            } else {
                printf("Empate! Nenhum Vice Prefeito eleito!\n\n");
            }
        }

        if (candidato2 > candidato3 && candidato2 > candidato4 && candidato4 > candidato1) {
            printf("\nPrefeito eleito: Candidato 2 com %d votos!\n", candidato2);
            if (candidato3 > candidato4 && candidato3 > candidato1) {
                printf("Vice Prefeito eleito: Candidato 3 com %d votos!\n\n", candidato3);
            }
            if (candidato4 > candidato1 && candidato4 > candidato3) {
                printf("Vice Prefeito eleito: Candidato 4 com %d votos!\n\n", candidato4);
            }
            if (candidato1 > candidato3 && candidato1 > candidato4) {
                printf("Vice Prefeito eleito: Candidato 1 com %d votos!\n\n", candidato1);
            } else {
                printf("Empate! Nenhum Vice Prefeito eleito!\n\n");
            }
        }

        if (candidato3 > candidato4 && candidato3 > candidato1 && candidato3 > candidato2) {
            printf("\nPrefeito eleito: Candidato 3 com %d votos!\n", candidato3);
            if(candidato4 > candidato1 && candidato4 > candidato2) {
                printf("Vice Prefeito eleito: Candidato 4 com %d votos!\n\n", candidato4);
            }
            if(candidato1 > candidato2 && candidato1 > candidato4) {
                printf("Vice Prefeito eleito: Candidato 1 com %d votos!\n\n", candidato1);
            }
            if(candidato2 > candidato4 && candidato2 > candidato1) {
                printf("Vice Prefeito eleito: Candidato 2 com %d votos!\n\n", candidato2);
            } else {
                printf("Empate! Nenhum Vice Prefeito eleito!\n\n");
            }
        }

        if (candidato4 > candidato1 && candidato1 > candidato2 && candidato4 > candidato3) {
            printf("\nPrefeito eleito: Candidato 4 com %d votos!\n", candidato4);
            if(candidato3 > candidato1 && candidato3 > candidato2) {
                printf("Vice Prefeito eleito: Candidato 3 com %d votos!\n\n", candidato3);
            }
            if(candidato1 > candidato2 && candidato1 > candidato3) {
                printf("Vice Prefeito eleito: Candidato 1 com %d votos!\n\n", candidato1);
            }
            if(candidato2 > candidato3 && candidato2 > candidato1) {
                printf("Vice Prefeito eleito: Candidato 2 com %d votos!\n\n", candidato2);
            } else {
                printf("Empate! Nenhum Vice Prefeito eleito!\n\n");
            }
        }
    } else {
        printf("Empate! Nenhum Prefeito Eleito!\n\n");
    }


    printf("Total de votos válidos: .................... %d\n", votosValidos);
    printf("Total de votos inválidos: .................. %d\n\n", votosInvalidos);

    return 0;
}
