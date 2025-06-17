#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_brazil");
    
    int num = 1;  // Inicializa 'num' com um valor que não seja zero para garantir que entre no while
    int maior_num, menor_num;
    int leitura = 1; // Variável de controle para identificar a primeira leitura
    
    printf("Digite um número inteiro:\n");
    
    while (num != 0) {  // Loop continua até o número digitado ser zero
        scanf("%d", &num);
        
        if (leitura == 1) {  // Caso seja a primeira leitura
            maior_num = num;  // Define o primeiro número como o maior
            menor_num = num;  // Define o primeiro número como o menor
            leitura = 0;  // Depois da primeira leitura, desativa essa condição
        }
        
        if (num != 0) {  // Se o número digitado não for zero, faz a comparação
            if (num > maior_num) {
                maior_num = num;  // Atualiza o maior número se o atual for maior
            } else if (num < menor_num) {
                menor_num = num;  // Atualiza o menor número se o atual for menor
            }
        }
        
    }
    
    // Após o loop, imprime o maior e o menor número digitado
    printf("\nMaior número: %d", maior_num);
    printf("\nMenor número: %d", menor_num);
    
    printf("\n\n\n");
    
    system("Pause");
    return 0;
}

