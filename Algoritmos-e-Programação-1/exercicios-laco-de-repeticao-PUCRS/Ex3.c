/*
3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA)  
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
        printf("Digite o salário da %d° pessoa: R$", i);
        scanf("%f", &salario);
        if (salario < 0) {
            break;
        }
        printf("Quantidade de filhos da %d° pessoa: ", i);
        scanf("%d", &numero_filhos);
        printf("\n\n");

        // Média salarial da população
        soma_salario += salario;
        media_salario = soma_salario / i;
        

        // Média do número de filhos
        soma_filhos += numero_filhos;
        media_filhos = soma_filhos / i;
        

        // Calcula o maior salário
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // Soma a quantidade de pessoas que recebem até R$100
        if (salario <= 100.00) {
            salario_ate_100++;
        }

        i++;
    } while (1);

    pessoas_ate_100 = (salario_ate_100 * 100.0) / i;


    printf("\nMédia salarial: R$%.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Maior salário: R$%.2f\n", maior_salario);
    printf("%.2f%% das pessoas tem salários de até R$100,00\n\n\n", pessoas_ate_100);

    return 0;
}