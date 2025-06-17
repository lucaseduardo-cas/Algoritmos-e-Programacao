/*
Semdp H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, fazer um programa para 
solicitar N e gerar o número H. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n = 0;
    int num = 1, den = 2;  // Numerador e denominador da fração a ser somada
    int h_num = 1, h_den = 1;  // Numerador e denominador do número harmônico H (inicia com 1/1)
    
    // Solicita o valor de N
    printf("Digite um número inteiro N para calcular o número harmônico H: ");
    scanf("%d", &n);
    
    printf("\n%d\n\n", den);
    
   // den = 2;  // Inicia a partir de 1/2, já que 1/1 já está acumulado em h_num e h_den

    // Laço para calcular o número harmônico H como fração
    while (den <= n) {
        // Multiplica cruzado para somar frações: h_num/h_den + 1/den
        h_num = h_num * den + h_den;  // Novo numerador (multiplicação cruzada)
        h_den = h_den * den;          // Novo denominador (multiplicação simples)
        
        den++;  // Incrementa o denominador
    }
    
    // Resultado final em formato de fração (não simplificada)
    printf("O número harmônico H é: %d/%d\n", h_num, h_den);
    
system("Pause");
return 0;

}

