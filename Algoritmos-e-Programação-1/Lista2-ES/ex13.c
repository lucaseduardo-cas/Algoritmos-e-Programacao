/*
13 - Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 tipos de ingressos
assim distribuídos: popular - 10% a R$1,00, geral - 50% a R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    int publicoTotal=20000;
    float rendaJogo;

    printf("Digite o publico do jogo: ");
    scanf("%d", &publicoTotal);

    rendaJogo = (publicoTotal * 0.1 * 1.0) + (publicoTotal  * 0.5 * 5.0) + (publicoTotal * 0.3 * 10) + (publicoTotal * 0.1 * 20.0);

    printf("\nRenda do jogo: %'.2f\n\n", rendaJogo);

    return 0;
}
