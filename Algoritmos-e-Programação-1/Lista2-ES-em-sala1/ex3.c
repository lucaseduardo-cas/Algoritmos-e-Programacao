/*
3) Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas

Elabore um algoritmo que receba uma medida em pés, faça as conversões a seguir, e imprima o
resultado de cada conversão realizada.
a. polegadas
b. jardas
c. milhas
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)  {
    float pes, jarda, milha, polegadas;

        printf("Digite o valor em pes: ");
            scanf("%f", &pes);

    polegadas = pes * 12;
    jarda = 3 * pes;
    milha = 1760 * jarda;

        printf("\nPolegadas: %.2f\nJardas: %.2f\nMilhas: %.2f", polegadas, jarda, milha);

system("Pause");
return 0;

}
