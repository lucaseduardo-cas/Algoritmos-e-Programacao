/*
Crie um programa que leia 5 números inteiros do usuário. Crie três funções:
- lerVetor(int vetor[], int tamanho): Preenche o vetor com os valores fornecidos pelo usuário.
- somarVetor(int vetor[], int tamanho): Calcula a soma de todos os elementos do vetor e retorna essa soma.
- exibirVetor(int vetor[], int tamanho): Imprime todos os elementos do vetor na tela.
- No programa principal (main), chame essas funções na sequência correta para ler os dados, calcular a soma e exibir o vetor.

Conceitos a praticar:
- Passagem de vetores para funções.
- Funções sem retorno (void) e com retorno (int).
- Modularização de código.

Quando você passa o array x para a função lerVetor, o C não copia os 5 elementos de x para um novo array vetor.
Na verdade, o C passa o endereço de memória do primeiro elemento do array x para a variável vetor da função.
Portanto, a variável vetor dentro da função lerVetor não é uma cópia separada. 
Ela é, na verdade, um ponteiro para a mesma área de memória onde o array x está armazenado no main.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

void lerVetor(int vetor[], int tamanho) { // vetor[] pode ser substituído por *vetor
    printf("Digite um vetor de %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d° elemento: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int somarVetor(int vetor[], int tamanho) {
    int valorTotal = 0;;
    for (int i = 0; i < tamanho; i++) {
        valorTotal += vetor[i];
    }
    return valorTotal;
}

void exibirVetor(int vetor[], int tamanho) {
    printf("Exibindo vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
}

int main(void) {
    int x[5];
    int i;
  
    system("clear");
    lerVetor(x, TAMANHO);
    printf("\nValor total: %2d\n", somarVetor(x, TAMANHO));
    exibirVetor(x, TAMANHO);  
    printf("\n");
    return 0;
}