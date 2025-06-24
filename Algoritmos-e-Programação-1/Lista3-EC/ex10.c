/*
10 - Uma locadora de filmes tem as seguintes regras para aluguel de fitas.
• Às segundas, terças e quintas (2,3 e 5) : desconto de 40% em relação ao preço normal;
• Às quartas , sextas, sábados e domingos (4,6 ,7 e 1): preço normal;
• Aluguel de fitas comuns: preço normal;
• Aluguel de lançamentos: acréscimo de 15% em relação ao preço normal.

Desenvolver um algoritmo para ler o preço normal da fita alugada(em R$) e sua categoria(comum ou lançamento). Calcular e
imprimir o preço final que será pago pela locação da fita.
*/

#include <stdio.h>

int main () {
    float precoNormal;
    char categoria;
    int diaSemana;

    printf("Digite o preço normal da fita: R$ ");
    scanf("%f", &precoNormal);
    printf("\nCategoria da fita:\n");
    printf("[c] Comum\n");
    printf("[l] Lançamento\n");
    printf("    Categoria: ");
    scanf(" %c", &categoria);

    if (categoria != 'c' && categoria != 'l') {
        printf("\nCategoria inválida!\n");
        return 0;
    } else {
        printf("\nDia da semana:\n");
        printf("[1] Domingo\n");
        printf("[2] Segudna\n");
        printf("[3] Terça\n");
        printf("[4] Quarta\n");
        printf("[5] Quinta\n");
        printf("[6] Sexta\n");
        printf("[7] Sábado\n");
        printf("    Opção: ");
        scanf("%d", &diaSemana);

        if (diaSemana < 1 || diaSemana > 7) {
            printf("\nDia da semana inváliddo! Digite um dia válido.\n");
            return 0;
        } else {
            if (categoria == 'c' && (diaSemana == 2 || diaSemana == 3 || diaSemana == 5)) {
                precoNormal -= (precoNormal * 0.40);
            } else if (categoria == 'l' && (diaSemana == 4 || diaSemana == 6 || diaSemana == 7 || diaSemana == 1)) {
                precoNormal = precoNormal;
            } else {
                precoNormal += precoNormal * 0.15;
            }
        }
    }

    printf("\nPreço final da locação da fita: R$%.2f\n", precoNormal);

    return 0;
}