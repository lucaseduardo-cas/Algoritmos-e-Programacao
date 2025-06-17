/*
Escreva um programa em linguagem C que simule a corre??o de pre?os com base na varia??o do sal?rio m?nimo entre anos passados e o ano atual (2025). 
O objetivo ? estimar quanto um produto custaria hoje, caso seu pre?o tivesse acompanhado proporcionalmente o reajuste do sal?rio m?nimo.

Regras:
- O programa deve solicitar ao usu?rio:
- O nome do produto.
- O ano em que o pre?o foi registrado (apenas entre 1994 e 2024).
- O valor do produto naquele ano.

O programa deve armazenar os valores do sal?rio m?nimo de 1994 a 2025. Utilize os valores a seguir:
- 2020: R$1045,00
- 2021: R$1100,00
- 2022: R$1212,00
- 2023: R$1320,00
- 2024: R$1412,00
- 2025: R$1518,00

Exibir:
- Nome do produto.
- Ano informado.
- Pre?o antigo.
- Preço corrigido para 2025.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int ano;
    char nome_produto[30], opcao;
    float preco_produto, salario_minimo, valor_corrigido;

    while(1) {
        system("clear");
        printf("Digite o ano (1994-2024): ");
        scanf("%d", &ano);

        if (ano < 1994 || ano > 2024) {
            printf("\n\nAno inválido!\nDigite um ano no intervalo de 1994-2024:\n\n");
            printf("\nPressione Enter para continuar...");
            getchar(); // limpa o \n deixado pelo scanf
            getchar(); // espera o Enter do usuário
            continue;
        } else {
            getchar();
            break;
        }
    }

    while(1) {
        system("clear");
        printf("Nome do produto: ");
        scanf("%[^\n]s", nome_produto);
        
        printf("\n\nNome digitado: %s\n", nome_produto);
        printf("Deseja prosseguir? (s/n): ");
        scanf(" %c", &opcao);
        
        if (opcao == 's') {
            break;
        } else if (opcao == 'n') {
            getchar();
            continue;
        } else {
            printf("\nERRO! Digite (s/n):\n");
        }
    }
    
    system("clear");
    printf("Preço do produto: R$");
    scanf("%f", &preco_produto);

    switch(ano) {
        case 1994: salario_minimo =   64.79; break;
        case 1995: salario_minimo =   70.00; break;
        case 1996: salario_minimo =  112.00; break;
        case 1997: salario_minimo =  120.00; break;
        case 1998: salario_minimo =  130.00; break;
        case 1999: salario_minimo =  136.00; break;
        case 2000: salario_minimo =  151.00; break;
        case 2001: salario_minimo =  180.00; break;
        case 2002: salario_minimo =  200.00; break;
        case 2003: salario_minimo =  240.00; break;
        case 2004: salario_minimo =  260.00; break;
        case 2005: salario_minimo =  300.00; break;
        case 2006: salario_minimo =  350.00; break;
        case 2007: salario_minimo =  380.00; break;
        case 2008: salario_minimo =  415.00; break;
        case 2009: salario_minimo =  465.00; break;
        case 2010: salario_minimo =  510.00; break;
        case 2011: salario_minimo =  545.00; break;
        case 2012: salario_minimo =  622.00; break;
        case 2013: salario_minimo =  678.00; break;
        case 2014: salario_minimo =  724.00; break;
        case 2015: salario_minimo =  788.00; break;
        case 2016: salario_minimo =  880.00; break;
        case 2017: salario_minimo =  937.00; break;
        case 2018: salario_minimo =  954.00; break;
        case 2019: salario_minimo =  998.00; break;
        case 2020: salario_minimo = 1045.00; break;
        case 2021: salario_minimo = 1100.00; break;
        case 2022: salario_minimo = 1212.00; break;
        case 2023: salario_minimo = 1312.00; break;
        case 2024: salario_minimo = 1412.00; break;
        default: break;
    }

    valor_corrigido = preco_produto / salario_minimo * 1518.00;

    printf("\n\n");
    printf("Salário mínimo em %d: R$%.2f\n", ano, salario_minimo);
    printf("Produto: %s\n", nome_produto);
    printf("  Preço: R$%.2f\n\n", preco_produto);
    printf("Valor corrigido: R$%.2f", valor_corrigido);

    printf("\n\n\n");
    return 0;
}