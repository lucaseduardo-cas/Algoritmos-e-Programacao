/*
3. Fa�a um programa que desenhe na tela losangos ou tri�ngulos utilizando somente o caractere
?%? (veja exemplos abaixo). O usu�rio � quem escolhe o que deve ser impresso. O usu�rio
tamb�m deve ter a op��o de escolher o tamanho (em linhas) da figura a ser desenhada.
    %
   %%%
  %%%%%
 %%%%%%%
%%%%%%%%%
 %%%%%%%
  %%%%%
   %%%
    %
           I E
        %  1 8
      %%%  3 6
    %%%%%  5 4
  %%%%%%%  7 2
%%%%%%%%%  9 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int figura, n; // Altura do losango (deve ser �mpar)
    int i, j, k;

    do {
        while(1) {
            printf("[1] Losango\n");
            printf("[2] Triangulo\n");
            printf("Escolha a figura que deseja imprimir (0 pra sair): ");
            scanf("%d", &figura);
            if (figura == 0) {
                printf("Saindo...");
                return 0;
            }
            else if (figura != 1 && figura != 2) {
                printf("Op��o inv�lida!\n\n");
                continue;
            } else {
                break;
            }
        }

        while (1) {
            printf("Escolha o tamanho da figura (m�nimo 5): ");
            scanf("%d", &n);
            if (n < 5) {
                printf("Tamanho inv�lido!\n\n");
                continue;
            } else {
                break;
            }
        }
        printf("\n\n");

        switch (figura) {
        case 1: // Impress�o do Losango
            // Parte superior do losango
            for (i = 0; i < n / 2 + 1; i++) {
                // Imprime os espa�os
                for (j = 0; j < n / 2 - i; j++) {
                    printf(" ");
                }
                // Imprime os asteriscos
                for (j = 0; j < 2 * i + 1; j++) {
                    printf("%%");
                }
                printf("\n"); // Nova linha ap�s cada linha de asteriscos
            }
            // Parte inferior do losango
            for (i = n / 2 - 1; i >= 0; i--) {
                // Imprime os espa�os
                for (j = 0; j < n / 2 - i; j++) {
                    printf(" ");
                }
                // Imprime os asteriscos
                for (j = 0; j < 2 * i + 1; j++) {
                    printf("%%");
                }
                printf("\n"); // Nova linha ap�s cada linha de asteriscos
            }
        break;

        case 2: // Impress�o do tri�ngulo
            for (i = 1; i <= n; i++) { // 1; 2; 3; 4; 5 ...
            // Imprime os espa�os (diminui a cada linha)
            for (j = 1; j <= (n - i) * 2; j++) { // ... 8; 6; 4; 2; 
                printf(" ");
            }

            // Imprime os "%" (aumenta a cada linha)
            for (k = 1; k <= (i * 2 - 1); k++) { // = 1; 3; 5; 7; 9 ...
                printf("%%");
            }

            // Quebra de linha para a pr�xima linha do tri�ngulo
            printf("\n");
            }
            break;
            
            default:
                break;
            }
        printf("\n\n\n");
        } while(1);

    return 0;
}
