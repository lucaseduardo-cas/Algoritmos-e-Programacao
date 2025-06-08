/*
15 - Criar um algoritmo que, dado o número da conta corrente com três dígitos, retorne o dígito verificador, o qual é calculado da
seguinte maneira:


Exemplo: número da conta: 235;
• Somar o número da conta com seu inverso: 235 + 532 = 767;
• Multiplicar cada dígito pela sua ordem posicional e somar estes resultados: 767
    7 6 7
    * * *
    1 2 3
    7 12 21 = 40
• O último digito desse resultado é o dígito verificador da conta (40 → 0);
• O número da conta passa a ser 235 – 0.

*/

#include <stdio.h>

int main() {
    int x=235, y, z;
    int x1, x2, x3;

    x1 = x / 100;
    x2 = (x / 10) % 10;
    x3 = x % 10;

    y = (x3 * 100) + (x2 * 10) + x1;

    z = x + y;

    x1 = (z / 100) * 1;
    x2 = ((z / 10) % 10) * 2;
    x3 = (z % 10) * 3;

    z = (x1 + x2 + x3) % 10;


    printf("\n%d\n\n", z);


    return 0;
}
