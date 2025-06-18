/*
4) Elabore um algoritmo que leia o número de horas trabalhadas por um funcionário, e o valor do
salário mínimo estabelecido por lei. Calcule e mostre o salário a receber desse funcionário,
seguindo as regras abaixo:
1ª) A hora trabalhada vale metade do salário mínimo
2ª) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora
trabalhada
3ª) O imposto equivale a 3% do salário bruto
4ª) O salário a receber equivale ao salário bruto menos o imposto
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int horas_trabalhadas;
    float salario_minimo;
    float valor_hora;
    float salario_bruto;
    int imposto;
    float valor_receber;

        printf("Digite o numero de horas trabalhadas do funcionario: ");
            scanf("%d", &horas_trabalhadas);
        printf("Digite o valor do salario minimo vigente: R$");
            scanf("%f", &salario_minimo);

    valor_hora = salario_minimo / 2;
    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = salario_bruto * 0.03;
    valor_receber = salario_bruto - imposto;

        printf("Salario a receber: R$%.2f", valor_receber);

system("Pause");
return 0;
}
