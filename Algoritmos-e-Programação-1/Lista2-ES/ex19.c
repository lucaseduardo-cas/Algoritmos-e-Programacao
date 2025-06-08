/*
19 - Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, mensalmente, um salário fixo
mais comissão. Essa comissão é calculada em relação ao número de televisores vendidos por mês de cada um dos tipos de TV,
obedecendo-se à tabela abaixo:

    TV LCD      R$ 50,00 de comissão por unidade vendida
    TV LED      R$ 60,00 de comissão por unidade vendida
    TV Plasma   R$ 55,00 de comissão por unidade vendida

Sabe-se que o salário total é o salário fixo mais as comissões. Escrever um algoritmo que calcule e escreva o salário do empregado.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    float salarioFixo=1518.0, comissao;
    float lcd, led, plasma;

    printf("====================== CALCULO DE COMISSÃO ======================\n\n");
    printf("Digite a quantidade de produtos vendidos no mês:\n");
    printf("TV LCD: .......................................... Qtd.: ");
    scanf("%f", &lcd);
    printf("TV LED: .......................................... Qtd.: ");
    scanf("%f", & led);
    printf("TV Plasma: ....................................... Qtd.: ");
    scanf("%f", &plasma);

    comissao = (lcd * 50.0) + (led * 60.0) + (plasma * 55.0);

    printf("\n");
    printf("Salário base: .................................... R$ %'.2f\n\n", salarioFixo);
    printf("Quantidade de TV's vendidas no mês\n");
    printf("TV LCD: ........................... Qtd.: %d | RV.: R$  %'.2f\n", (int)lcd, lcd * 50.0);
    printf("TV LED: ........................... Qtd.: %d | RV.: R$  %'.2f\n", (int)lcd, lcd * 60.0);
    printf("TV PLASMA: ........................ Qtd.: %d | RV.: R$  %'.2f\n", (int)lcd, lcd * 55.0);
    printf("Total Comissão:                                    R$  %'.2f\n", comissao);
    printf("\nRemuneração total: ............................... R$ %'.2f\n\n", salarioFixo + comissao);

    return 0;
}
