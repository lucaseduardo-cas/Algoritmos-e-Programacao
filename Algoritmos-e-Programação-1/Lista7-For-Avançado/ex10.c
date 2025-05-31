/*
10. Fa�a um algoritmo que separe um conjunto de N(ler) n�meros inteiros e positivos
e separe-os em subconjuntos de p(ler) elementos.

(N�o p) = (N�o!) / p! x (N-p)!
{1,2}; {1,3}; {1,4}; {1,5};
{2,3}; {2,4}; {2,5};
{3,4}; {3,5};
{4,5};
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "portuguese");
    
    int n=5, p=2, n_P;
    int i, j, fN=1, fP=1, fN_P=1, Naop;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    printf("Quantidade do subconjunto: ");
    scanf("%d", &p);

    for (i=1; i<=n; i++) {
        fN*=i;
    }
    for (i=1; i<=p; i++) {
        fP*=i;
    }

    n_P = n - p;
    for (i=1; i<=n_P; i++) {
        fN_P*=i;
    }

    Naop = (fN) / (fP * (fN_P));

    printf("\n\ntransfer�ncias poss�veis (%d)\n\n", Naop);
/*
        for (i=1; i<=n; i++) {
        for (j=i+1; j<=n; j++) {
            printf("{%d,%d}; ", i, j);
        }
    }
*/
    for (i=1; i<=n; i++) {
        for (j=i+1; j<=n; j++) {
            printf("{");
            printf("%d %d}; ", i, j);
        }
    }

    printf("\n\n\n");
    return 0;
}