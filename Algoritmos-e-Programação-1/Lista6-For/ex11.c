/*
Desafio
Individualmente ou em duplas voc�s ir�o tentar resolver o seguinte problema:
Leia 2 grupos de dia, m�s e ano, ou seja, duas datas, e, utilizando estruturas de repeti��o, calcule quantos dias existem entre estas duas datas.
Considere o seguinte:
- S� ser�o digitadas datas v�lidas e a primeira sempre ser� anterior a segunda;
- Os anos bissextos s�o aqueles que s�o divis�veis por 4;
A primeira dupla que conseguir receber� um pr�mio e 1 ponto na prova N2-2.
A segunda dupla que conseguir receber� 0,5 ponto na prova N2-2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dias_no_mes(int mes, int ano) {
    // Retorna o n�mero de dias em um m�s espec�fico
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
        default:
            return 0; // M�s inv�lido
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
    printf("M�s: ");
    scanf("%d", &m1);
    printf("Ano: ");
    scanf("%d", &a1);

    printf("\nDigite a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &d2);
    printf("M�s: ");
    scanf("%d", &m2);
    printf("Ano: ");
    scanf("%d", &a2);

    // Verifica��o das Condicionais
    if ((d1 > d2 && m1 == m2 && a1 == a2) || 
        (m1 > m2 && a1 == a2) || 
        (a1 > a2)) {
        printf("Data inv�lida! A primeira data deve ser menor do que a segunda.\n");
        return 1;
    }

    // C�lculo dos dias usando um la�o for
    for (int ano = a1; ano <= a2; ano++) {
        for (int mes = (ano == a1 ? m1 : 1); mes <= (ano == a2 ? m2 : 12); mes++) {
            if (ano == a1 && mes == m1) {
                // Adiciona os dias restantes do primeiro m�s
                dias_totais += dias_no_mes(mes, ano) - d1;
            } else if (ano == a2 && mes == m2) {
                // Adiciona apenas os dias do �ltimo m�s
                dias_totais += d2;
            } else {
                // Adiciona todos os dias do m�s completo
                dias_totais += dias_no_mes(mes, ano);
            }
        }
    }

    printf("\nA quantidade de dias entre as datas s�o: %d\n", dias_totais);
    return 0;
}
