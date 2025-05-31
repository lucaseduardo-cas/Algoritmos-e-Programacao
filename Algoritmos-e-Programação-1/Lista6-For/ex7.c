/*
7) Um trabalhador quer fazer uma poupança para a sua aposentadoria e para isso ele irá
guardar 3% de seu salário pelos exatos 25 anos que ele tem de trabalho pela frente. Sabendo
que ele recebe um reajuste de 5% ao ano, faça um programa que peça ao usuário o valor do
salário atual e calcule quanto ele irá juntar se seguir o plano.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    float salario_atual, salario_guardado, total_guardado, reajuste_anual;
    int i, j;

    while (1) {
        if (salario_atual == 0) {
            break;
        }
        printf("0 p/ sair\n");
        printf("Digite o salário atual: ");
        printf("R$");
        scanf("%f", &salario_atual);

        total_guardado = 0.0;
        reajuste_anual = salario_atual;

        for (i=1; i<=25; i++) {
            for (j=1; j<=13; j++) {
                salario_guardado = reajuste_anual * 0.03; 
                total_guardado += salario_guardado;
            }
            reajuste_anual += reajuste_anual * 0.05;
        }
        printf("\n\nTotal guardado após %d anos: R$%.2f\n\n\n", i-1, total_guardado);    
    }

    system("Pause");
    return 0;
}
