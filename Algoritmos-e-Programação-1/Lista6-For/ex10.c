/*
10) Faça um programa que peça ao usuário tres números inteiros que irão representar uma
data(dia, mês e ano) e a quantidade de dias que o usuário deseja somar a esta data e imprima
na tela a data resultante. Considere que todos os meses tenham 30 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    int d, m, a, dias_somados;
    int i;

    printf("Digite a data em _/_/_(dd, mm, dd):\n");
    printf("Dia: ");
    scanf("%d", &d);
    printf("Mês: ");
    scanf("%d", &m);
    printf("Ano: ");
    scanf("%d", &a);
    printf("Dias a ser somados: ");
    scanf("%d", &dias_somados);

    for (i=1; i<=dias_somados; i++) {   
        d++; // Incrementa o dia
        if (d > 30) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                a++;
            }
        }
    }

    printf("\nData resultante: %02d/%02d/%04d", d, m, a);   
    printf("\n\n\n");
   
    system("Pause");
    return 0;
}
