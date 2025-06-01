/*
06 - Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 para cada hora abaixo destas 3 horas.
Fazer um algoritmo que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.

3h = R$8,50;
 h < 3h = 3,50;

A cada 3h o valor é 3,50. Se houver uma hora resto, exemplo: 5 % 3 = 2; (2 = resto). Será 2 x 3,50 + 8,50;
5 / 3
3 * 1 = 3
*/

#include <stdio.h>

int main() {
    float valorPagar;
    int horaAbaixo, horas;
    
    printf("Uso do charrete:\n");
    printf("Horas: ");
    scanf("%d", &horas);
    
    horaAbaixo = horas % 3;
    horas = horas - horaAbaixo;
    valorPagar = (horas / 3 * 8.50) + (horaAbaixo * 3.50);

    printf("\nValor a pagar: R$%.2f\n\n", valorPagar);

    return 0;
}
