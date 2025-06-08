/*
9) Uma criança de 6 anos tem uma taxa de crescimento de 3 cm ao ano e cresce até os 18 anos.
Faça um programa que peça ao usuário a altura da criança e calcule a altura que ela vai ter
quando adulta, sabendo que a taxa de crescimendo diminui 0,1 cm ao ano.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "Portuguese");

    float altura, t_c; // t_c = taxa de crescimento
    int i;

    printf("Altura da criança(cm): ");
    scanf("%f", &altura);

    for (i=6; i<= 18; i++) {
        t_c += (3.0 - 0.1);
        printf("%d° ano: %.1f\n", i, t_c);
    }

    printf("\nAltura quando adulta: %.2f(m)\n\n", (t_c + altura) / 100); // Convertendo cm p/ m

    system("Pause");
    return 0;
}
