/*
12 - Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o preço normal de etiqueta e a escolha da
condição de pagamento. Utilize os códigos da tabela a seguir para saber qual a condição de pagamento escolhida e efetuar o cálculo
adequado.
Código Condição Pagamento
    1 À vista, dinheiro ou cheque, 10% de desconto
    2 À vista, cartão de credito, 5% de desconto
    3 Em 2 vezes, preço normal da etiqueta sem juros
    4 Em 3 vezes, preço normal da etiqueta + 10% de juros
*/

#include <stdio.h>

int main () {
    float precoNormal, valorPagar;
    int opcao;

    printf("Valor de etiqueta do produto: R$ ");
    scanf("%f", &precoNormal);
    printf("\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("|  COD  |                CONDIÇÃO DE PAGAMENTO                 |\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("|   1   | À vista, dinheiro ou cheque, 10%% de desconto         |\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("|   2   | À vista, cartão de crédito, 5%% de desconto           |\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("|   3   | Em 2 vezes, preço normal da etiqueta sem juros       |\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("|   4   | Em 3 vezes, preço normal da etiqueta + 10%% de juros  |\n");
    printf("+-------+------------------------------------------------------+\n");
    printf("\nOpção de pagamento: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorPagar = precoNormal - (precoNormal * 0.10);
        printf("\nÀ vista: R$%.2f\n", valorPagar);
    } else if (opcao == 2) {
        valorPagar = precoNormal - (precoNormal * 0.05);
        printf("\nÀ vista no crédito: R$%.2f\n", valorPagar);
    } else if (opcao == 3) {
        valorPagar = precoNormal / 2.0;
        printf("\n2x de R$%.2f - Total parcelas: R$%.2f\n", valorPagar, precoNormal);
    } else if (opcao == 4) {
        valorPagar = (precoNormal * 1.10) / 3.0;
        printf("\n3x de R$%.2f - Total parcelas: R$%.2f\n", valorPagar, precoNormal * 1.10);
    } else {
        printf("\nCondição inválida!\n\n");
        return 0;
    }

    return 0;
}