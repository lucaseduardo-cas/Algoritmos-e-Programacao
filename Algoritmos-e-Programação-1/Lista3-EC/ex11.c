/*
11 - Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, de um cilindro
ou de uma esfera. O algoritmo deverá ler a opção da figura desejada (cone/cilindro /esfera) e de acordo com a opção escolhida calcular e
escrever o volume e a área da superfície da figura pedida.
Fórmulas:
• Cone Reto: volume = (pi * reio^2 * altura) / 3
               Área = (pi * raio * raiz(raio^2 + altura^2))

• Cilindro:  volume = pi * raio^2 * altura
               Área = 2 * pi * raio * altura

• Esfera:    volume = (4/3) * pi * raio^3 
               Área = 4 * pi * raio^2
*/

#include <stdio.h>
#include <math.h>

int main () {
    int opcao;
    double raio, altura, volume, area, pi=3.1415926535897932;

    printf("Escolha a opção:\n");
    printf("[1] Cone\n");
    printf("[2] Cilindro\n");
    printf("[3] Esfera\n");
    printf("    Opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 3) {
        printf("\nOpção inválida!\n");
        return 0;
    } else {
        if (opcao == 3) {
            printf("\nDigite a dimensão da figura:\n");
            printf("Raio ........ : ");
            scanf("%lf", &raio);

            if (raio < 0.0) {
                printf("\nEntrada de dados inválida! Digite dimensões da figura maior do que 0.\n");
                return 0;
            }
        } else {
            printf("\nDigite as dimensões da figura:\n");
            printf("Raio ........ : ");
            scanf("%lf", &raio);
            printf("Altura ...... : ");
            scanf("%lf", &altura);
            
            if (raio < 0.0 || altura < 0.0) {
                printf("\nEntrada de dados inválida! Digite dimensões da figura maior do que 0.\n");
                return 0;
            }
        }
            if (opcao == 1) {
                printf("\n===== CONE RETO =====\n");
                volume = (pi * pow(raio, 2) * altura) / 3.0;
                area = pi * raio * sqrt(pow(raio, 2) + pow(altura,2));
            } else if (opcao == 2) {
                printf("\n====== CILINDRO ======\n");
                volume = pi * pow(raio, 2) * altura;
                area = 2.0 * pi * raio * altura;
            } else {
                printf("\n====== ESFERA ======\n");
                volume = (4.0 / 3.0) * pi * pow(raio, 3);
                area = 4.0 * pi * pow(raio, 2);
            }
        }

    printf("Volume: %.2f\n  Area: %.2f\n\n", volume, area);

    return 0;
}