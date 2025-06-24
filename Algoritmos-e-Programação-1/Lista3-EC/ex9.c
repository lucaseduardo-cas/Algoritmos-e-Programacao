/*
09 - Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
consumidor - residencial, comercial ou industrial. A regra para calcular a conta é:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3 gastos

• Comercial: R$ 500,00 para os primeiros 80 m3
    gastos mais R$ 0,25 por m3 gastos acima dos 80 m3

• Industrial: R$ 800,00 para os primeiros 100 m3
    gastos mas R$ 0,04 por m3 gastos acima dos 100 m3

O algoritmo deverá ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos.
Como resultado imprimir a conta do cliente e o valor em real a ser pago pelo mesmo.
*/

#include <stdio.h>

int main(void) {
    float m3, conta, fixo;
    char opcao;

    printf("============== CONTA CONSUMO DE ÁGUA - SANEAGO ==============\n\n");
    printf("[r] Residencial\n");
    printf("[c] Comercial\n");
    printf("[i] Industrial\n");
    printf("Opção: ");
    scanf(" %c", &opcao);

    if (opcao != 'r' && opcao != 'c' && opcao != 'i') {
        printf("\nOpção inválida!!!\n");
        return 0;
    } else {
        printf("\nConsumo de água (m3): ");
        scanf("%f", &m3);
        while (getchar() != '\n'); 

        if (m3 < 0) {
            printf("Consumo inválido! Digite um valor positivo.\n");
            return 0;
        } else {
            if (opcao == 'r') {
                conta = 5.0 + (0.05 * m3);
            } else if (opcao == 'c') {
                if (m3 < 80.0) {
                    conta = 500.0;
                } else {
                    conta = ((m3 -  80.0) * 0.25) + 500.0;
                }
            } else {
                if (m3 < 100.0) {
                    conta = 800.0;
                } else {
                    conta = ((m3 - 100.0) * 0.04) + 800.0;
                }
            } 
        }
    }

    printf("\nValor da conta: R$%.2f\n\n", conta);

    return 0;
}