/*
Escrever um algoritmo que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, o
número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o
salário total deste funcionário e escreva o seu número e o seu salário total.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); // Locale do subsistema Linux (locale -a)
    int numero, qtdHoras, filhosMenor14;
    float valorHora, salarioFamilia, salarioTotal;

    printf("Número ................ :    ");
    scanf("%d", &numero);
    printf("Horas trabalhadas ..... :    ");
    scanf("%d", &qtdHoras);
    printf("Valor hora  ........... : R$ ");
    scanf("%f", &valorHora);
    printf("Qtd filhos < 14 anos .. :    ");
    scanf("%d", &filhosMenor14);
    printf("Salario familia ....... : R$ ");
    scanf("%f", &salarioFamilia);

    salarioTotal = qtdHoras * valorHora + (filhosMenor14 * salarioFamilia);

    printf("\nFuncionário n°: %d, possuí um salário total de: R$%'.2f\n\n", numero, salarioTotal);

    return 0;
}
