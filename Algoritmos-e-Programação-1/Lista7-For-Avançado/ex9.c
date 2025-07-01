/*
9. Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de N
(N!).
*/

#include <stdio.h>

int main(void) {
    int n=5, fatorial=1, resultado=0;  // Inicializa fatorial em 1, pois será multiplicado
    int i, j;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        resultado = fatorial * i;
        fatorial *= i;
    }

    // Imprime o resultado: N!
    printf("\n%d! = ", n);
    for (j=n; j>=2; j--) {
        printf("%d x ", j);
    }
    printf("1 = %d\n\n", resultado);

    return 0;
}

