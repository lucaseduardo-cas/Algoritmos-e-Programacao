/*
Escreva um programa que leia um n�mero inteiro e utilize-o como ponto de partida para preencher um vetor de 10 posi��es, onde cada elemento seguinte � incrementado d
e 0,5 em rela��o ao anterior. Em seguida, armazene em um segundo vetor apenas os valores �mpares da parte inteira dos elementos do primeiro vetor. Por fim, imprima os
n�meros �mpares. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system ("cls");

    float x, n[10];
    int M[10];
    int i, j;

    printf("Digite 1 n�mero inteiro: ");
    scanf("%f", &x);
    
    n[0] = x;
    for (i=0; i<10; i++) {
        n[i] = (x += 0.5) - 0.5;
        M[i] = n[i];
    }

    printf("\n\nVetor:\n");
    for (i=0; i<10; i++) {
        printf("%2d� = %2.1f - %d\n", i+1, n[i], M[i]);
    }
    
    printf("\n\nN�meros �mpares:\n");
    for (i=0; i<10; i++) {
        if (M[i] % 2 != 0) {
            
        for (j=0; j<i; j++) {
            if (M[i] == M[j]) {
                if (i != 7 && i != 9) {
                    printf("%d; ", M[i]);
                    break;
                } else {
                    printf("%d", M[i]);
                }
            }
        }
        
        }
    }
    
    printf("\n\n\n");
    return 0;
}