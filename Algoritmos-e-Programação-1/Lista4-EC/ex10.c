/*
11- A Companhia de Pulverização Faz Tudo Ltda utiliza aviões para pulverizar lavouras. Os custos de pulverização
dependem do tipo de praga e da área contratada conforme o esquema:
• Tipo 1: pulverização contra ervas daninhas'; R$ 5,00
por acre;
• Tipo 2: pulverização contra gafanhotos, R$ 10,00 por
acre;
• Tipo 3: pulverização contra broca, R$ 15,00 por
acre;
• Tipo 4: pulverização contra tudo acima, R$ 25,00
por acre . 

Se a área a ser pulverizada é maior que 300 acres, o fazendeiro recebe um desconto de 5%. Em
adição, qualquer fazendeiro cujo custo total, sem desconto, ultrapasse R$ 1.750,00 recebe um desconto de
10% sobre o valor que ultrapassar os R$ 1.750,00. Se ambos os descontos se aplicam, aquele relacionado a
área é calculado em primeiro lugar.
Preparar um programa que leia as seguintes informações:
• Nome do fazendeiro;
• Tipo de pulverização (de 1 a 4);
• Área a ser pulverizada.
O programa deve ainda calcular o custo final da pulverização e escrever
O fazendeiro, _(nome do fazendeiro)_ , pagará pelo serviço de pulverização de R$____________. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];
    int opcao;
    float areaPulverizada, custoFInal;

    printf("============== CUSTO PULVERIZAÇÃO ==============\n\n");
    printf("Nome do fazendeiro: ");
    scanf("%s", nome);
    printf("[1] - Pulverização contra ervas daninhas: R$  5,00 /acre\n");
    printf("[2] - Pulverização contra gafanhotos ...: R$ 10,00 /acre\n");
    printf("[3] - Pulverização contra broca ........: R$ 15,00 /acre\n");
    printf("[4] - pulverização contra tudo acima ...: R$ 25,00 /acre\n");
    printf("      Opção: ");
    scanf("%d", &opcao);  
    if (opcao < 1 || opcao > 4) {
        printf("\nOpção inválida! Escolha uma opção entre 1 e 4.\n\n");
        return 0;
    } 

    printf("Área a ser pulverizada: ");
    scanf("%f", &areaPulverizada);
    
    if (opcao == 1) {
        custoFInal = areaPulverizada *  5.00;
    } else if (opcao == 2) {
        custoFInal = areaPulverizada * 10.00;
    } else if (opcao == 3) {
        custoFInal = areaPulverizada * 15.00;
    } else {
        custoFInal = areaPulverizada * 25.00;
    }       
    
    printf("O fazendeiro %s, pagará pelo serviço de pulverização R$%'.2f", nome, custoFInal);
    printf("\n\n");
    return 0;
}