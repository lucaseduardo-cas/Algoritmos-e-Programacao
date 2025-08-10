/*
Exercício 8: Alocação Dinâmica de Memória para um Vetor
Enunciado:
- Crie um programa que peça ao usuário para digitar o tamanho de um vetor de números inteiros. 
- Crie uma função alocarVetor que receba o tamanho como parâmetro e retorne um ponteiro para o vetor alocado dinamicamente. 
- No main, chame a função alocarVetor, e em seguida chame a função lerVetor (como no Exercício 5) para preencher o vetor. 
- Por fim, chame a função exibirVetor (também do Exercício 5) para imprimir o vetor e, por último, use free para liberar a memória.

Funções a criar:
- int* alocarVetor(int tamanho): Aloca memória para um vetor e retorna o ponteiro.
- void lerVetor(int vetor[], int tamanho): Preenche o vetor com valores.
- void exibirVetor(int vetor[], int tamanho): Exibe o conteúdo do vetor.
- void liberarVetor(int *vetor): Libera a memória alocada.

Conceitos a praticar:
- Ponteiros e alocação dinâmica de memória (malloc).
- Manipulação de vetores alocados dinamicamente.
- Gerenciamento de memória (free).

Função malloc retorna um ponteiro para a região de memória que foi alocada, ou NULL
*/

#include <stdio.h>
#include <stdlib.h>

void tamanhoVetor(int *tamanho) {
    printf("Digite o tamanho do vetor: ");
    scanf("%d", tamanho);
}

int* alocarVetor(int tamanho) { // Função alocarVetor é do tipo int* porque a sua responsabilidade é retornar um ponteiro para o vetor que foi alocado.
    int *ptr_int = (int*) malloc(tamanho * sizeof(int));
    return ptr_int;
}

void verificarAlocacao(int *vetor) {
    if (vetor) {
        printf("\nAlocacao bem-sucedida!\n");
    } else {
        printf("\nFalha na alocacao de memoria. Encerrando o programa.\n");
        exit(1); // Encerra o programa com codigo de erro
    }
}


void lerVetor(int vetor[], int tamanho) {
    printf("\nDigite um vetor de %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d elementos: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[], int tamanho) {
    printf("\nExibindo vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf("; ");
        }
    }
    printf("\n");
}

// Função para liberar a memória, com uma responsabilidade clara
void liberarVetor(int *vetor) {
    if (vetor != NULL) {
        free(vetor);
        printf("Memoria liberada com sucesso.\n");
    }
}

int main(void) {
    int x, tamanhoX;
    int *vetor_alocado;
    
    system("clear");
    tamanhoVetor(&tamanhoX);
    vetor_alocado = alocarVetor(tamanhoX);
    verificarAlocacao(vetor_alocado);
    lerVetor(vetor_alocado, tamanhoX);
    exibirVetor(vetor_alocado, tamanhoX);
    liberarVetor(vetor_alocado);
    
    return 0;
}