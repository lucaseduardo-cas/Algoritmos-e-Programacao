/*
01 - Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cilíndrica de alumínio. O custo do
alumínio é R$ 100,00 por m2
- Dados de Entrada: raio e altura da lata (em metros). Área da lata = área da base(π * raio2* 2) + área do lado(2 * π * raio * altura).
Considere o preço do alumínio por m2 como sendo uma constante.
*/

#include <stdio.h>
#include <math.h> // gcc -g -o ex9 ex9.c -lm

int main() {
    float pi=3.14159265, raio, altura, areaLata, areaBase, areaLado, custoLata;

    printf("============= CALCULAR CUSTOS PARA FABRICAÇÃO DE LATA =============\n\n");
    printf("Digite o raio da lata(m):   ");
    scanf("%f", &raio);
    printf("Digite a altura da lata(m): ");
    scanf("%f", &altura);

    areaBase  = pi * pow(raio, 2) * 2;
    areaLado  = 2 * pi * raio * altura;
    areaLata  = areaBase + areaLado;
    custoLata = areaLata * 100.0;

    printf("O custo da lata de alumínimo com as dimensões %.2f x %.2f é de R$ %1.2f\n", raio, altura, custoLata);

    return 0;
}
