/*
8. Fa�a um programa que leia um determinado ano e o dia da semana(1?domingo a 7-s�bado)
que iniciou o ano e imprima o calend�rio deste ano, de janeiro a dezembro, da seguinte
forma(Considere o ano bisexto sendo aquele divis�vel por 4):
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");

    int ano, dia_semana, dias; 
    int espaco, quebra;
    int i, j, k, l; // Contadores for

        printf("Digite o ano: ");
        scanf("%d", &ano);

     while (1) {
        printf("Digite o dia da semana: ");
        scanf("%d", &dia_semana);
        if (dia_semana < 1 || dia_semana > 7) {
            printf("\nN�mero inv�lido! Digite um n�mero entre 1 e 7.\n");
            continue;
        } else {
            break;
        }
    }
    printf("\n\n");

    do {
        for (i=1; i<=12; i++) {
            switch (i) {
            case  1: printf("Janeiro de %d\n",  ano); dias = 31; break;
            case  2: printf("Feveiro de %d\n",  ano); 
                dias = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
                break;  
            case  3: printf("Mar�o de %d\n",    ano); dias = 31; break;
            case  4: printf("Abril de %d\n",    ano); dias = 30; break;
            case  5: printf("Maio de %d\n",     ano); dias = 31; break;
            case  6: printf("Junho de %d\n",    ano); dias = 30; break;
            case  7: printf("Julho de %d\n",    ano); dias = 31; break;
            case  8: printf("Agosto de %d\n",   ano); dias = 31; break;
            case  9: printf("Setembro de %d\n", ano); dias = 30; break;
            case 10: printf("Outubro de %d\n",  ano); dias = 31; break;
            case 11: printf("Novembro de %d\n", ano); dias = 30; break;
            case 12: printf("Dezembro de %d\n", ano); dias = 31; break;   
            default: break; }

            switch (dia_semana) {
            case 1: espaco =  1; break;
            case 2: espaco =  6; break;
            case 3: espaco = 11; break;
            case 4: espaco = 16; break;
            case 5: espaco = 21; break;
            case 6: espaco = 26; break;
            case 7: espaco = 31; break;
            default: break; }

            printf(" D    S    T    Q    Q    S    S\n");  
            for (j=1; j<=espaco; j++) { // Imprime o primeiro n�mero de acordo com o dia da semana alinhado com os dias do calend�rio: D    S    T    Q    Q    S    S
                printf(" ");
            }
            printf("1   "); // Imprime o n�mero
            if (dia_semana == 7) {
                printf("\n"); // Quebra a linha quando dia_semana = 7          
            }           
            // Imprime os restos dos dias da semana come�ando do 2 at� s�bado, seguindo de um \n e break; (m�x 2-6; min 1)
            for (k=2; k<=7-dia_semana+1; k++) {  
                    printf(" %d   ", k); // 4 espa�os para ficar alinhado aos dias do calend�rio  D    S    T    Q    Q    S    S
                if ((espaco + (5 * k)) > 32 && dia_semana != 7) { // 32 = Espa�amento m�x at� o \n
                    printf("\n"); // Quebra a linha quando o dia chegar na sexta
                    break;
                }
            }

            // Imprime a segunda linha do calend�rio
            for (l=1; l<=dias; l++) {
                if (dia_semana == 7) { // Se o dia da semana for = 7 (sexta-feira); (l >= k)
                    if (l >= k && l <= dias) { // l � igual o maior que k
                        if (l <= 9) {
                            printf(" %d   ", l); 
                            if (dia_semana == 7 && l == 8) {
                                printf("\n");
                            }
                        }
                        if (l > 9) {
                        printf("%d   ", l); 

                            // Determina a quebra de linha para a segunda linha do calend�rio somente para se o dia da semana = s�bado (7)
                            if (dia_semana == 7 && l == 15 || dia_semana == 7 && l == 22 || dia_semana == 7 && l == 29) {
                                printf("\n");  
                            }   
                        }
                    }
                } else { // Se o dia da semana for diferente de 7 (l > k) (D S T Q Q S)
                    if (l > k && l <= 9) { // l � maior que k e l � menor e igual a 9
                        printf(" %d   ", l); // Imprime com formata��o de 1 d�gito alinhada com a linha de cima

                        if (dia_semana == 6 && l ==  9) {
                            printf("\n");          
                        }
                    }

                    if (l > 9) { // Para os n�meros maiores do que 9 (com 2 d�gitos, haver� apenas 3 espa�os para manter o alinhamento)
                        printf("%d   ", l);

                        // Determina a quebra de linha para a segunda linha do c�digo 
                        if (dia_semana == 1 && l == 14 || dia_semana == 1 && l == 21 || // D - 14; 21; 28 (1+6)
                            dia_semana == 1 && l == 28 || dia_semana == 2 && l == 13 || // S - 13; 20; 27
                            dia_semana == 2 && l == 20 || dia_semana == 2 && l == 27 || // T - 12; 19; 26
                            dia_semana == 3 && l == 12 || dia_semana == 3 && l == 19 || // Q - 11; 18; 25
                            dia_semana == 3 && l == 26 || dia_semana == 4 && l == 11 || // Q - 10; 17; 24; 
                            dia_semana == 4 && l == 18 || dia_semana == 4 && l == 25 || // S -  9; 16; 23; 30;
                            dia_semana == 5 && l == 10 || dia_semana == 5 && l == 17 || // S -  8; 15; 22; 29;
                            dia_semana == 5 && l == 24 || dia_semana == 6 && l == 16 ||
                            dia_semana == 6 && l == 23 || dia_semana == 6 && l == 30) {
                            printf("\n");  
                        }   
                    }
                }
            }
            dia_semana++; // Incremento do dia_semana para a impress�o dos demais meses com o dia (1) em cada dia da semana
            if (dia_semana > 7) { // Se a semana for maior que 7 
                dia_semana = 1; // Zera o contador dia_semana para 1 (a semana s� tem 7 dias)
            }
            printf("\n\n\n");
        }
        break;
    } while (1);
    
    return 0;
}