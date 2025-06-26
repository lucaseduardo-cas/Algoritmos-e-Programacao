/*
17 - Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as
seguintes expressões:
• Para homens: 72.7 * h −58 ;
• Para mulheres: 62.1* h −44.7.
*/

#include <stdio.h>

int main () {
    float altura, pesoIdeal;
    char sexo;

    printf("========== CALCULADORA DE PESO IDEAL ==========\n\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("\n[M] Masculino\n");
    printf("[F] Feminino\n");
    printf("Sexo: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("\nPeso ideal de um Homem com %.2f de altura: ..... %.2f\n", altura, pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("\nPeso ideal de uma Mulher com %.2f de altura: ..... %.2f\n", altura, pesoIdeal);
    } else {
        printf("\nSexo inválido! Digite 'M' para Masculino e 'F' para Feminino\n");
    }

    return 0;
}