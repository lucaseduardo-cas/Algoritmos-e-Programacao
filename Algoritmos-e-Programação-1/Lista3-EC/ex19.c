/*
19 – A Companhia de Pulverização Faz Tudo Ltda utiliza aviões para pulverizar lavouras. Os custos de pulverização dependem do tipo
de praga e da área contratada conforme o esquema:

    ● Tipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre;
    ● Tipo 2: pulverização contra gafanhotos, R$ 10,00 por acre;
    ● Tipo 3: pulverização contra broca, R$ 15,00 por acre;
    ● Tipo 4: pulverização contra tudo acima, R$ 25,00 por acre.

Se a área a ser pulverizada é maior que 300 acres, o fazendeiro recebe um desconto de 5%. Em adição, qualquer fazendeiro cujo
custo total, sem desconto, ultrapasse R$ 1.750,00 recebe um desconto de 10% sobre o valor que ultrapassar os R$ 1.750,00. Se ambos os
descontos se aplicam, aquele relacionado a área é calculado em primeiro lugar. 

Preparar um algoritmo que leia as seguintes informações:
    ● Nome do fazendeiro;
    ● Tipo de pulverização (de 1 a 4);
    ● Área a ser pulverizada.
O algoritmo deve ainda calcular o custo final da pulverização e escrever o nome do fazendeiro e o valor a ser pago.
*/

#include <stdio.h>

int main() {
    char nome[10];
    int tipo;
    float tamanhoArea, desconto, custoFinal;

    printf("Nome: ");
    scanf("%s", nome);
    printf("\nEscolha o tipo de pulverização:\n");
    printf("[1]: pulverização contra ervas daninhas, R$ 5,00 por acre;\n");
    printf("[2]: pulverização contra gafanhotos, R$ 10,00 por acre;\n");
    printf("[3]: pulverização contra broca, R$ 15,00 por acre;\n");
    printf("[4]: pulverização contra tudo acima, R$ 25,00 por acre;\n");
    printf("   Opção: ");
    scanf("%d", &tipo);
    if (tipo < 1 || tipo > 4) {
         printf("\nTipo inválido! Escolha um tipo entre 1 e 4.\n");
         return 0;
    }
    printf("Área a ser pulverizada (acres): ");
    scanf("%f", &tamanhoArea);

    if (tipo == 1) {
        custoFinal = tamanhoArea * 5.00;
    } else if (tipo == 2) {
        custoFinal = tamanhoArea * 10.00;
    } else if (tipo == 3) {
        custoFinal = tamanhoArea * 15.00;
    } else {
        custoFinal = tamanhoArea * 25.00;
    } 

    if (tamanhoArea > 300) {
        desconto = (custoFinal * 0.05);
    }
    custoFinal -= desconto;
    if ((custoFinal + desconto) > 1750.0) {
        custoFinal -= ((custoFinal - 1750.0) * 0.10);
    }
    
    printf("Nome ................................................... : %s\n", nome);
    printf("Custo final da pulverização ............................ : R$ %'.2f\n\n", custoFinal);

    return 0;
}