/*
15 - Desenvolver um algoritmo que calcule o salário bruto e o salário líquido de um funcionário.
• Dados de Entrada: Nome do funcionário;
  Quantidade de horas-extras trabalhadas.

• Constantes: Salário Mínimo = R$ 350,00;
  Valor da Hora-Extra = R$ 10.00.

Sabe-se:
• Salário hora-extra = horas-extras * Valor da Hora-Extra;
• Salário bruto = 3 * Salário Mínimo + Salário hora-extra;
• Desconto INSS = 12 % do salário bruto, se salário bruto for maior que R$ 1500,00;
• Desconto do Imposto de Renda = 20 % do Salário Bruto, se o mesmo for maior que R$ 2000,00;
• Salário liquido = salário bruto – deduções.

*/

#include <stdio.h>
#include <string.h>

int main() {
    const float salarioMinimo = 350.00;
    const float valorHoraExtra = 10.00;
    char nome[20];
    int qtdHorasExtras;
    float salarioHoraExtra, salarioBruto, salarioLiquido;
    float descontoINSS = 0.0, descontoIR = 0.0;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Quantidade de horas extras realizadas no mês: ");
    scanf("%d", &qtdHorasExtras);

    salarioHoraExtra = qtdHorasExtras * valorHoraExtra;
    salarioBruto = (3 * salarioMinimo) + salarioHoraExtra;

    if (salarioBruto > 1500.0) {
        descontoINSS = salarioBruto * 0.12;
        if (salarioBruto > 2000.0) {
            descontoIR = salarioBruto * 0.20;
        }
    } 
    salarioLiquido = salarioBruto - descontoINSS - descontoIR;

    printf("\n");
    printf("Funcionário .............. : %s\n", nome);
    printf("Salário Bruto ............ : %'.2f\n", salarioBruto);
    printf("Salário Líquido .......... : %'.2f\n", salarioLiquido);

    return 0;
}