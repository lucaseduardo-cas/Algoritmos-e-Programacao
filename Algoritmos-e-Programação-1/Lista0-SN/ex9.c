/*
9) Crie um programa que peça ao usuário 2 números e mostre na tela o resultado das operações
de soma, multiplicação, subtração e divisão entre estes 2 números.
*/

#include <stdio.h>

int main() {
    int n1, n2;
    int soma, mult, sub;
    float div;

    printf("Digite 2 números:\n");
    printf("1° número: ");
    scanf("%d", &n1);
    printf("2° número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    mult = n1 * n2;
    sub  = n1 - n2;
    div  = (float)n1 / n2; // type casting (não altera o valor da variável, só converte naquele momento da operação)

    printf("\n%d + %d = %2d", n1, n2, soma);
    printf("\n%d * %d = %2d", n1, n2, mult);
    printf("\n%d - %d = %2d", n1, n2,  sub);
    printf("\n%d / %d = %5.2f", n1, n2,  div);
    printf("\n\n");

    return 0;
}
