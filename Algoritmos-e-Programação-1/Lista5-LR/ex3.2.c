/*
Semdp H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, fazer um programa para 
solicitar N e gerar o n�mero H. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n = 0;
    int num = 1, den = 2;  // Numerador e denominador da fra��o a ser somada
    int h_num = 1, h_den = 1;  // Numerador e denominador do n�mero harm�nico H (inicia com 1/1)
    
    // Solicita o valor de N
    printf("Digite um n�mero inteiro N para calcular o n�mero harm�nico H: ");
    scanf("%d", &n);
    
    printf("\n%d\n\n", den);
    
   // den = 2;  // Inicia a partir de 1/2, j� que 1/1 j� est� acumulado em h_num e h_den

    // La�o para calcular o n�mero harm�nico H como fra��o
    while (den <= n) {
        // Multiplica cruzado para somar fra��es: h_num/h_den + 1/den
        h_num = h_num * den + h_den;  // Novo numerador (multiplica��o cruzada)
        h_den = h_den * den;          // Novo denominador (multiplica��o simples)
        
        den++;  // Incrementa o denominador
    }
    
    // Resultado final em formato de fra��o (n�o simplificada)
    printf("O n�mero harm�nico H �: %d/%d\n", h_num, h_den);
    
system("Pause");
return 0;

}

