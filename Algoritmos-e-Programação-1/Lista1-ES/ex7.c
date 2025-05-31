/*
7- No curso de Programação, a nota final de um estudante é calculada a partir de seu desempenho em três
avaliações:
- Um exame intermediário que vale 30% da nota final;
- Um trabalho prático que corresponde a 20% da nota final;
- Um exame final que completa os 50% restantes;

Faça um programa para ler o nome de um aluno e suas notas nas três avaliações. O programa deve calcular
sua nota final e exibir a seguinte frase:
O aluno _________ teve nota final _________.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    float exameInter, trabalhoPratico, exameFinal, notaFinal;

    printf("============= NOTAS AVALIAÇÕES =============\n\n");
    printf("Nome do aluno: ");
    scanf("%s", nome);
    printf("\nDigite as notas:\n");
    printf("  1- Exame intermediário: ");
    scanf("%f", &exameInter);
    printf("  2- Trabalho Prático . : ");
    scanf("%f", &trabalhoPratico);
    printf("  3- Trabalho final: .. : ");
    scanf("%f", &exameFinal);

    notaFinal = (exameInter * 0.3) + (trabalhoPratico * 0.2) + (exameFinal * 0.5);

    printf("\nO aluno %s teve nota final: %.2f\n\n", nome, notaFinal);
    return 0;
}
