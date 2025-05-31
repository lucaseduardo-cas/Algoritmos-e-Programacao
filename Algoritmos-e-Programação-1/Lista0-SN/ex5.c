/*
5) Faça um programa que:
- Leia a idade do usuário;
- Imprima essa idade da seguinte forma: “A sua idade é ___ anos: "".
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nSua idade é: %d anos\n\n", idade);

    return 0;
}
