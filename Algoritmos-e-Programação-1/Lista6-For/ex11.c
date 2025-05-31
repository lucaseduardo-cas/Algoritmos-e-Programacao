/*
Desafio
Individualmente ou em duplas vocês irão tentar resolver o seguinte problema:
Leia 2 grupos de dia, mês e ano, ou seja, duas datas, e, utilizando estruturas de repetição, calcule quantos dias existem entre estas duas datas.
Considere o seguinte:
- Só serão digitadas datas válidas e a primeira sempre será anterior a segunda;
- Os anos bissextos são aqueles que são divisíveis por 4;
A primeira dupla que conseguir receberá um prêmio e 1 ponto na prova N2-2.
A segunda dupla que conseguir receberá 0,5 ponto na prova N2-2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dias_no_mes(int mes, int ano) {
    // Retorna o nï¿½mero de dias em um mï¿½s especï¿½fico
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
        default:
            return 0; // Mês inválido
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int d1, m1, a1;
    int d2, m2, a2;
    int dias_totais = 0;

    // Entrada de dados
    printf("Digite a primeira data:\n");
    printf("Dia: ");
    scanf("%d", &d1);
    printf("Mês: ");
    scanf("%d", &m1);
    printf("Ano: ");
    scanf("%d", &a1);

    printf("\nDigite a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &d2);
    printf("Mês: ");
    scanf("%d", &m2);
    printf("Ano: ");
    scanf("%d", &a2);

    // Verificação das Condicionais
    if ((d1 > d2 && m1 == m2 && a1 == a2) || 
        (m1 > m2 && a1 == a2) || 
        (a1 > a2)) {
        printf("Data inválida! A primeira data deve ser menor do que a segunda.\n");
        return 1;
    }

    // Cálculo dos dias usando um laço for
    for (int ano = a1; ano <= a2; ano++) {
        for (int mes = (ano == a1 ? m1 : 1); mes <= (ano == a2 ? m2 : 12); mes++) {
            if (ano == a1 && mes == m1) {
                // Adiciona os dias restantes do primeiro mês
                dias_totais += dias_no_mes(mes, ano) - d1;
            } else if (ano == a2 && mes == m2) {
                // Adiciona apenas os dias do último mês
                dias_totais += d2;
            } else {
                // Adiciona todos os dias do mês completo
                dias_totais += dias_no_mes(mes, ano);
            }
        }
    }

    printf("\nA quantidade de dias entre as datas são: %d\n", dias_totais);
    return 0;
}
