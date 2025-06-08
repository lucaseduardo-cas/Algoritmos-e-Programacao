#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "portuguese");

    int n_titulo, voto;
    int candidato1=0, candidato2=0, candidato3=0, candidato4=0, voto_valido=0, voto_invalido=0;
    int prefeito, vice_prefeito;
    int i;

    do {
        printf("Digite o número do título: ");
        scanf("%d", &n_titulo);
        if (n_titulo == -1) {
            break;
        }
        printf("\n[500] Candidato 1\n");
        printf("[600] Candidato 2\n");
        printf("[700] Candidato 3\n");
        printf("[800] Candidato 4\n");
        printf("Digite o número do candidato: ");
        scanf("%d", &voto); 

        switch (voto) {
        case 500:
            printf("\n     Voto em Candidato 1 computado!\n\n\n");
            voto_valido++;
            candidato1++;
            break;
        case 600:
            printf("\n     Voto em Candidato 2 computado!\n\n\n");
            voto_valido++;
            candidato2++;
            break;
        case 700:
            printf("\n     Voto em Candidato 3 computado!\n\n\n");
            voto_valido++;
            candidato3++;
            break;
        case 800:
            printf("\n     Voto em Candidato 4 computado!\n\n\n");
            voto_valido++;
            candidato4++;
            break;
        default:
            printf("\n     Voto inválido!\n\n\n");
            voto_invalido++;
            break;
        }
    } while (1);

    // Determinando prefeito e vice-prefeito
    int votos[4] = {candidato1, candidato2, candidato3, candidato4};
    int max1 = -1, max2 = -1; // Armazena os índices dos dois maiores votos

    for (i = 0; i < 4; i++) {
        if (max1 == -1 || votos[i] > votos[max1]) {
            max2 = max1;
            max1 = i;
        } else if (max2 == -1 || votos[i] > votos[max2]) {
            max2 = i;
        }
    }

    prefeito = max1 + 1; // Candidatos são indexados de 1 a 4
    vice_prefeito = max2 + 1;

    printf("\nPrefeito eleito: Candidato %d com %d votos\n", prefeito, votos[max1]);
    if (votos[max2] > 0) {
        printf("Vice-prefeito: Candidato %d com %d votos\n", vice_prefeito, votos[max2]);
    } else {
        printf("Nenhum vice-prefeito definido (sem votos suficientes)\n");
    }

    // Resultados finais
    printf("\n\nVotos válidos: %d\n", voto_valido);
    printf("Votos inválidos: %d\n", voto_invalido);

    return 0;
}