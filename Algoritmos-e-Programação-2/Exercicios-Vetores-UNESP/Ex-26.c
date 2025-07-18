/*
26. Fac¸a um programa que calcule o desvio padrao de um vetor v contendo n = 10 numeros,
onde m e a media do vetor
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float vetorV[10], m=0.0, somatorio=0.0, desvio;
    int i, n=10;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%f", &vetorV[i]);
        m += vetorV[i];
    }
    m /= n;
    
    for (i = 0; i < 10; i++) {
        somatorio += pow(vetorV[i] - m, 2);
    }

    desvio = sqrt(somatorio / (n - 1));

    printf("\nMédia: %.2f\n\n", m);
    printf("\nDesvio padrão: %.2f\n", desvio);
    return 0;
}