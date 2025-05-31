/*
02 - Muitos países estão passando a utilizar o sistema métrico. Fazer um algoritmo para executar as seguintes conversões:
• Ler uma temperatura dada em graus Fahrenheit e imprimir o equivalente em Celsius:
    fahrenheit = 9/5 * C + 32;
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm).
*/

#include <stdio.h>

int main () {
    float fahrenheit, celsius, qtdChuva, milimetros;

    printf("============= CONVERTER UNIDADE DE MEDIDA =============\n\n");
    printf("Digite a temperatura em (°F): ");
    scanf("%f", &fahrenheit);

    //celsius = (fahrenheit - 32) / 1.8;
    celsius = (5.0 / 9.0) * (fahrenheit - 32); // Pode usar ambas as fórmulas.

    printf("%.1f(°F) = %.1f(°C)\n\n", fahrenheit, celsius);

    printf("Quantidade de chuva/polegada: ");
    scanf("%f", &qtdChuva);

    milimetros = qtdChuva * 25.4;

    printf("\nQuantidade de chuva(metros): %.1f\n\n", milimetros);

    return 0;
}
