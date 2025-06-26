/*
18 - Desenvolver um algoritmo para calcular e imprimir o preço final de um carro. O valor do preço inicial de fábrica é fornecido por
um meio de entrada. O carro pode ter as seguintes opções:
(a) (S,N)Ar condicionado: R$ 1750,00
(b) (S,N)Pintura Metálica: R$ 800,00
(c) (S,N)Vidro Elétrico: R$ 1200,00
(d) (S,N)Direção Hidráulica: R$ 2000,00. 
*/

#include <stdio.h>

int main() {
    float precoInicial = 0.0, precoFinal = 0.0, precoOpcional = 0.0;
    char a, b, c, d;
    
    printf("=========== CALCULADORA DE PREÇO DE VENDA DE VEÍCULO ===========\n\n");
    printf("Preço inicial de fábrica: ");
    scanf("%f", &precoInicial);
    printf("\nEscolha os opcionais:\n");
    printf("(a) Ar condicionado: ..... : R$ 1.750,00 (S,N): ");
    scanf(" %c", &a);
    if (a != 'S' && a != 's' && a != 'N' && a != 'n') {
        printf("\nOpção inválida! Digite 'S' ou 'N'\n");
        return 0;
    }

    printf("(b) Pintura Metálica: .... : R$   800,00 (S,N): ");
    scanf(" %c", &b);
    if (b != 'S' && b != 's' && b != 'N' && b!= 'n') {
        printf("\nOpção inválida! Digite 'S' ou 'N'\n");
        return 0;
    }

    printf("(c) Vidro Elétrico: ...... : R$ 1.200,00 (S,N): ");
    scanf(" %c", &c);
    if (c != 'S' && c != 's' && c != 'N' && c != 'n') {
        printf("\nOpção inválida! Digite 'S' ou 'N'\n");
        return 0;
    }
    printf("(d) Direção Hidráulica ... : R$ 2.000,00 (S,N): ");
    scanf(" %c", &d);
    if (d != 'S' && d != 's' && d != 'N' && d != 'n') {
        printf("\nOpção inválida! Digite 'S' ou 'N'\n");
        return 0;
    }

    if (a == 'S' || a == 's') {
        precoOpcional = 1750.0;
    } else {
        precoOpcional = precoOpcional;
    }
    if (b == 'S' || b == 's') {
        precoOpcional += 800.0;
    } else {
        precoOpcional = precoOpcional;
    }
    if (c == 'S' || b == 's') {
        precoOpcional += 1200.0;
    } else {
        precoOpcional = precoOpcional;
    } if (d == 'S' || d == 's') {
        precoOpcional += 2000.0;
    } else {
        precoOpcional = precoOpcional;
    } 

    precoFinal = precoInicial + precoOpcional;

    printf("\nPreço final: %'.2f\n\n", precoFinal);

    return 0;
}