/*
Escrever um algoritmo que lê:
    • a percentagem do IPI a ser acrescido no valor das peças;
    • o código da peça 1, valor unitário da peça 1, quantidade de peças 1;
    • o código da peça 2, valor unitário da peça 2, quantidade de peças 2;

O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.
*/

#include <stdio.h>

int main() {
    float ipi, valorPeca1, valorPeca2, valorTotal;
    int codPeca1, codPeca2;
    int qtdPeca1, qtdPeca2;

    printf("============ COMPRA DE PEÇAS ============\n\n");
    printf("Digite a porcentagem de IPI: ");
    scanf("%f", &ipi);

    printf("Código da 1° peça ........ : ");
    scanf("%d", &codPeca1);
    printf("Valor da 1° peça(und) .... : ");
    scanf("%f", &valorPeca1);
    printf("Quantidade da 1° peça .... : ");
    scanf("%d", &qtdPeca1);

    printf("\nCódigo da 2° peça ........ : ");
    scanf("%d", &codPeca2);
    printf("Valor da 2° peça(und) .... : ");
    scanf("%f", &valorPeca2);
    printf("Quantidade da 2° peça .... : ");
    scanf("%d", &qtdPeca2);

    valorTotal = (valorPeca1 * qtdPeca1 + valorPeca2 * qtdPeca2) * ((ipi / 100) + 1);

    printf("\n");
    printf("1° Peça %4d   |   Qtd.: %2d|   %'.2f\n", codPeca1, qtdPeca1, valorPeca1);
    printf("2° Peça %4d   |   Qtd.: %2d|   %'.2f\n", codPeca2, qtdPeca2, valorPeca2);
    printf("\nValor total a ser pago: R$%'.2f\n\n", valorTotal);

    return 0;
}
