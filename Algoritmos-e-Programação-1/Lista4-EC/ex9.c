/*
10- Um palíndromo é um número que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a
direita. Por exemplo, cada um dos inteiros seguintes, de quatro dígitos, são palíndromo: 1331, 5555, 4554 e 1661. Escreva
um algoritmo que leia um número de quatro dígitos e determine se ele e palíndromo ou não. Se o número não for de quatro
dígitos imprima uma mensagem de erro. 
*/

#include <stdio.h>

int main(void) {
    int n, ni;
    int n1, n2, n3, n4;

    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%d", &n);
    if (n < 1000 || n > 9999) {
        printf("\nNúmero inválido! Digite um número com 4 dídigos.\n\n");
        return 0;
    }

    n1 =  n / 1000;
    n2 = (n % 1000) / 100;
    n3 = (n % 100) / 10;
    n4 =  n % 10;

    ni = (n4 * 1000) + (n3 * 100) + (n2 * 10) + n1;

    if (n == ni) {
        printf("\nNúmero palíndromo!\nNúmero:  %d\nInverso: %d", n, ni);
    } else {
        printf("\nNúmero NÃO é palíndromo!\nNúmero:  %d\nInverso: %d", n, ni);
    }

    printf("\n\n");
    return 0;
}