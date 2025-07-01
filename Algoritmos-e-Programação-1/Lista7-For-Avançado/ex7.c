/*
7. Faça um programa que, lida uma data(dia mês e ano), calcule qual vai ser a data ao se
passarem 572 dias. Obs.: utilize estruturas de repetição e considere o ano bisexto sendo
aquele que é divisível por 4.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");	
	
    int dia=12, mes=11, ano = 2024;
    int dias_somados = 572, bissexto;;
    int i;

    // Loop para incrementar a data, dia a dia
    for (i = 1; i <= dias_somados; i++) {
        dia++;  // (Incrementa dia)
        printf("%02d/%02d/%04d\n", dia, mes, ano);
        // Verifica se precisa passar para o próximo mês
       if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) {  // Meses com 30 dias: mes=11 e dia(=572) > 30 = mes++;
            dia = 0; // Se o dia ultrapassar 30, dia = 0, 0, 0, 0, 0, 0 = 6
            mes++; // mes=11, com incremento: mes = 12, 5, 10, 12, 5
            printf("\n");
        } else if (mes == 2) {  // Fevereiro, considerando ano bissexto
        	bissexto = (ano % 4 == 0); // Calculo do ano bissexto
            
            if ((bissexto && dia == 29) || (!bissexto && dia == 28)) { // Se o ano for bissexto, o dia é maior que 29. - Se o ano NÃO é bissexo, o dia é maior que 28
                dia = 0; // 0, 0
                mes++; // 3, 3 
            }
            
        } else if (dia == 31) {  // Meses com 31 dias
            dia = 0; // 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 = 11
            mes++; // 13, 2, 4, 6, 8, 9, 11, 13, 2, 4, 6
            printf("\n");
        }

        // Verifica se precisa passar para o próximo ano
        if (mes > 12) {
            mes = 1; // 1, 1
            ano++; // 2025, 2026
        }   
    }

    // Exibe a data final após somar 572 dias
    printf("\nData final: %02d/%02d/%04d\n\n\n", dia, mes, ano);


	system("Pause");
    return 0;
}
