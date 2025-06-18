/*
2) Elabore um algoritmo que receba 3 notas, seus respectivos pesos, calcule e imprima a média
ponderada dessas notas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota1, nota2, nota3;
    float media;

        printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

        printf("A media ponderada dessas notas foi de: %.2f", media);


system("Pause");
return 0;
}
