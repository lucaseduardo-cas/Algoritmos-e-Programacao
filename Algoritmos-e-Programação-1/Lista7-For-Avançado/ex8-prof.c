/*
8. Faça um programa que leia um determinado ano e o dia da semana(1?domingo a 7-sábado)
que iniciou o ano e imprima o calendário deste ano, de janeiro a dezembro, da seguinte
forma(Considere o ano bisexto sendo aquele divisível por 4):
*/

#include <stdio.h>

int main(void) {
    int ano, semana, diam;
    int mes, dia, i;

    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o dia da semana: ");
    scanf("%d", &semana);
    printf("\n\n");

    for (mes=1; mes<=12; mes++){
        switch (mes) {
            case  1: printf("Janeiro de %d\n",  ano); diam = 31; break;
            case  2: printf("Feveiro de %d\n",  ano); 
                diam = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
                break;  
            case  3: printf("Março de %d\n",    ano); diam = 31; break;
            case  4: printf("Abril de %d\n",    ano); diam = 30; break;
            case  5: printf("Maio de %d\n",     ano); diam = 31; break;
            case  6: printf("Junho de %d\n",    ano); diam = 30; break;
            case  7: printf("Julho de %d\n",    ano); diam = 31; break;
            case  8: printf("Agosto de %d\n",   ano); diam = 31; break;
            case  9: printf("Setembro de %d\n", ano); diam = 30; break;
            case 10: printf("Outubro de %d\n",  ano); diam = 31; break;
            case 11: printf("Novembro de %d\n", ano); diam = 30; break;
            case 12: printf("Dezembro de %d\n", ano); diam = 31; break;   
            default: break; }

        printf(" D  S  T  Q  Q  S  S\n");
        for (dia = 1; dia <= diam; dia++){
            if (dia == 1){
                for (int i = 0; i < (semana - 1) * 3; i++){ 
                    printf(" ");
                }
            }
            printf("%2d ", dia);
            semana++;
            if (semana == 8){
                semana = 1;
                printf("\n");
            }
        }
        printf("\n\n");
    }

    return 0;
}