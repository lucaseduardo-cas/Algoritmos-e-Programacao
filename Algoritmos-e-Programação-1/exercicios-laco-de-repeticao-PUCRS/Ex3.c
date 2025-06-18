/*
3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:  

a) m�dia do sal�rio da popula��o;

b) m�dia do n�mero de filhos;

c) maior sal�rio;

d) percentual de pessoas com sal�rio at� R$100,00.

O final da leitura de dados se dar� com a entrada de um sal�rio negativo. (Use o comando ENQUANTO-FA�A)  
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    float salario, soma_salario=0, media_salario=0, soma_filhos=0, media_filhos;
    float maior_salario=0, pessoas_ate_100=0, salario_ate_100=0;
    int numero_filhos;
    int i=1;

    do {
        printf("Digite o sal�rio da %d� pessoa: R$", i);
        scanf("%f", &salario);
        if (salario < 0) {
            break;
        }
        printf("Quantidade de filhos da %d� pessoa: ", i);
        scanf("%d", &numero_filhos);
        printf("\n\n");

        // M�dia salarial da popula��o
        soma_salario += salario;
        media_salario = soma_salario / i;
        

        // M�dia do n�mero de filhos
        soma_filhos += numero_filhos;
        media_filhos = soma_filhos / i;
        

        // Calcula o maior sal�rio
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // Soma a quantidade de pessoas que recebem at� R$100
        if (salario <= 100.00) {
            salario_ate_100++;
        }

        i++;
    } while (1);

    pessoas_ate_100 = (salario_ate_100 * 100.0) / i;


    printf("\nM�dia salarial: R$%.2f\n", media_salario);
    printf("M�dia do n�mero de filhos: %.2f\n", media_filhos);
    printf("Maior sal�rio: R$%.2f\n", maior_salario);
    printf("%.2f%% das pessoas tem sal�rios de at� R$100,00\n\n\n", pessoas_ate_100);

    return 0;
}