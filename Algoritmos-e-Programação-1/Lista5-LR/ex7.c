/*
7. Faça um programa para solicitar ao usuário vários números inteiros e determinar qual o maior e o menor
deles. O programa deve parar de solicitar números ao ser digitado um valor igual a zero. 
*/

#include <stdio.h>

int main(void) {
    int num = 1;  // Inicializa 'num' com um valor que n�o seja zero para garantir que entre no while
    int maior_num, menor_num;
    int leitura = 1; // Variável de controle para identificar a primeira leitura
    
    printf("Digite um número inteiro:\n");
    
    while (num != 0) {  // Loop continua até o número digitado ser zero
        scanf("%d", &num);     
        if (leitura == 1) {  // Caso seja a primeira leitura
            maior_num = num;  // Define o primeiro n�mero como o maior
            menor_num = num;  // Define o primeiro n�mero como o menor
            leitura = 0;  // Depois da primeira leitura, desativa essa condi��o
        } 
        if (num != 0) {  // Se o n�mero digitado n�o for zero, faz a compara��o
            if (num > maior_num) {
                maior_num = num;  // Atualiza o maior n�mero se o atual for maior
            } else if (num < menor_num) {
                menor_num = num;  // Atualiza o menor n�mero se o atual for menor
            }
        }   
    }
    
    // Após o loop, imprime o maior e o menor número digitado
    printf("\nMaior n�mero: %d", maior_num);
    printf("\nMenor n�mero: %d", menor_num);
    printf("\n\n\n");
    return 0;
}

