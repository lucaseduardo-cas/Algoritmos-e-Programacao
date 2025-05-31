/*
6 – Dona Joaninha é muito esquecida e sempre paga suas contas depois da data do vencimento. Ela gostaria
de ter um programa que lhe poupasse do trabalho de calcular o valor da multa e dos juros quando fosse pagar
uma conta. Resolva o problema de dona Joaninha: faça um programa que recebe o valor da conta, o número
de dias em atraso e o valor da multa e dos juros por dia de atraso. O programa deverá calcular o valor a ser
pago. O programa deverá exibir a seguinte saída:
Valor da conta: ________
Dias em atraso:________
Total da multa: ________
Total de juros: ________
Total a pagar: _________
*/

#include <stdio.h>

int main() {
    float valorConta, totalMulta, totalJuros, totalPagar;
    int diasAtraso;

    printf("=============== SISTEMA PARA CALCULAR MULTA E JUROS ===============\n\n");
    printf("  Valor da conta:  R$");
    scanf("%f", &valorConta);
    printf("  Dias em atraso:    ");
    scanf("%d", &diasAtraso);
    printf("  Total da Multa:  R$");
    scanf("%f", &totalMulta);
    printf("  Total de juros(%%): ");
    scanf("%f", &totalJuros);

    totalPagar = valorConta + totalMulta + (diasAtraso * (totalJuros / 100));

    printf("\nTotal a pagar: R$ %.2f\n\n", totalPagar);

    return 0;
}
