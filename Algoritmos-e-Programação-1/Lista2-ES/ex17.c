/*
17 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que
o peso das notas é: 2,3 e 5, respectivamente.
*/

#include <stdio.h>

int main () {
    float n1, n2, n3, x;
    n1 = 10.0;
    n2 =  8.0;
    n3 =  5.0;

    x  = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("\nNota final: %.2f\n", x);

    return 0;
}
