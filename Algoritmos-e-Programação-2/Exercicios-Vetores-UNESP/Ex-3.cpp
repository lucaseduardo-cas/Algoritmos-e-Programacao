/*
3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado 
das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem?
10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define MAX 100

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system("cls");

    float n[MAX], n2[MAX], quadrado, conjuntos;
    int i, cont=0, cont2=0, cont3=1;

    printf("Digite um conjunto de números reais: (0 p/ sair)\n");
    for (i=0; i<100; i++) {
        printf("%d° número: ", i + 1);
        scanf("%f", &n[i]);

        if (n[i] == 0.0) {
            break;
        }
        cont++;
    }

    printf("\nQuadrados dos elementos:\n");
    for (i=0; i<cont; i++) {
        quadrado = pow(n[i], 2);
        n2[i] = quadrado;
    }
    // Imprime quadrado dos elementos
    for (i=0; i<cont; i++) {

        if (i == 0 || i % 10 == 0) {
            printf("\nConjunto %d\n", cont3++);
        }
    
        if (cont2 <=10) {
            printf("%.2f\n", n2[i]);    
            if (cont2 == 10) {
            cont2 = 1;
            }    
        }
        cont2++;
    }

    printf("\n\n\n");
    return 0;
}