/*
1– Faça um programa que receba como entrada o nome e o salário de um funcionário de uma empresa e que
calcule o novo valor do salário do funcionário levando em conta que esse teve um aumento de 25%. O
programa deve exibir na saída a seguinte frase:
O funcionário ________ teve um aumento de R$ _______ e passará a receber um salário de R$ ________ .
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[10];
    float aumento, salario;

    printf("Funcionário:\n");
    printf("Nome: ");
    scanf("%s", nome);
    printf("Salário: ");
    scanf("%f", &salario);

    aumento = salario * 0.25;
    salario += aumento;

    printf("O funcionário %s teve um aumento de R$%.2f e passará a receber um salário de R$%.2f\n\n", nome, aumento, salario);

    return 0;
}
