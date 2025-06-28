/*
20 - Fazer um algoritmo que converta uma determinada quantia dada em Reais para uma das seguintes moedas de acordo com a opção
do usuário:
• E – Euro R$ 6,43;
• L – Libra Esterlina R$ 7,52;
• D – Dólar R$ 5,48;
• I – Iene R$ 0,038.
Obs.: Câmbio extraído em 28/06/2025
*/

#include <stdio.h>

int main() {
    float valorReais, valorConversao;
    char opcao;

    printf("=========== CONVERSOR DE MOEDAS ===========\n\n");
    printf("Digite o valor em R$ ");
    scanf("%f", &valorReais);

    printf("\nEscolha a moeda para converter:\n");
    printf("[E] - Euro\n");
    printf("[L] - Libra Esterlina\n");
    printf("[D] - Dólar\n");
    printf("[I] - Iene\n");
    printf("      Opção: ");
    scanf(" %c", &opcao);

    if (opcao != 'E' && opcao != 'e' && 
        opcao != 'L' && opcao != 'l' &&
        opcao != 'D' && opcao != 'd' &&
        opcao != 'I' && opcao != 'i') {
        printf("\nOpção inválida!\n");
        return 0;
    } else {
        if (opcao == 'E' || opcao == 'e') {
            valorConversao = valorReais * 6.43;
            printf("\nR$ %'.f = %'.2f Euro(s)\n", valorReais, valorConversao);
        } else if (opcao == 'L' || opcao == 'l') {
            valorConversao = valorReais * 7.52;
             printf("\nR$ %'.f = %'.2f Libra(s) Esterlina(s)\n", valorReais, valorConversao);
        } else if (opcao == 'D' || opcao == 'd') {
            valorConversao = valorReais * 5.48;
             printf("\nR$ %'.f = %'.2f Dólar(s)\n", valorReais, valorConversao);
        } else {
            valorConversao = valorReais * 0.038;
             printf("\nR$ %'.f = %'.2f Iene(s)\n", valorReais, valorConversao);
        }
    }

    return 0;
}