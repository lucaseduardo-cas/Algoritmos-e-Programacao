/*
9- Desenvolver um programa para calcular a Composição de Lucros . Um problema comum na área financeira
é a determinação da quantia que será acumulada em uma conta bancária depois de n anos, conhecendo-se a
quantia inicial depositada, e os rendimentos anuais dessa conta, r por cento ao ano.
A resposta a essa questão pode ser determinada pela fórmula:
F = p*(1+i)^n onde i=r/100

Obs.: usando a função potencial pow(base,expoente) da diretiva #include <math>
    F = p * pow ( (1+i) , n);
    Seguindo os passos:
    1. Declarar as variáveis
    2. Ler os valores de p(principal), r(taxa de lucro) e n(número de anos)
    3. Calcular a representação decimal da taxa de lucro(i) : i = r/100
    4. Determinar a quantia que será acumulada: F = p(1 + i)^n
    5. Exibir o valor F calculado.
*/

#include <stdio.h>
#include <math.h> // gcc -g -o ex9 ex9.c -lm

int main() {
    float f, p, i, r;
    int n;

    printf("============== SISTEMA PARA CALCULAR A COMPOSIÇÃO DE LUCROS ==============\n\n");
    printf("Valor principal ..... : R$ ");
    scanf("%f", &p);
    printf("Taxa de lucro(%%) .... :    ");
    scanf("%f", &r);
    printf("Quantidade de anos .. :    ");
    scanf("%d", &n);

    i = r / 100;
    f = p * pow((1+i), n);

    printf("\nValor final: R$%.2f\n\n", f);

    return 0;
}
