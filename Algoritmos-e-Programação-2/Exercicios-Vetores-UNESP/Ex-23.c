/*
23. Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o
produto escalar, sendo que o produto escalar e dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.
*/

#include <stdio.h>

int main(void) {
    float conjuntoA[5], conjuntoB[5];
    float produtoEscalar=0.0;
    int i;

    printf("Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto\n");
    printf("escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e\n");
    printf("o produto escalar, sendo que o produto escalar e dado por:\n");
    printf("x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn\n\n");

    printf("Primeiro conjunto de números reais:\n");
    for (i = 0; i < 5; i++) {
        printf("%d° número: ", i + 1);
        scanf("%f", &conjuntoA[i]);
    }
    printf("\n");

    printf("Segundo conjunto de números reais:\n");
    for (i = 0; i < 5; i++) {
        printf("%d° número: ", i + 1);
        scanf("%f", &conjuntoB[i]);
    }
    printf("\n");

    printf("   Produto Escalar =  conjunto A  x  conjunto B\n");
    for (i = 0; i < 5; i++) {
        produtoEscalar += conjuntoA[i] * conjuntoB[i];
        printf("%d°      %5.2f      =     %3.2f     x     %3.2f\n", i + 1, produtoEscalar, conjuntoA[i], conjuntoB[i]);
    }

    printf("\nProduto escalar entre o conjunto A e B: %.2f\n\n", produtoEscalar);
    return 0;
}