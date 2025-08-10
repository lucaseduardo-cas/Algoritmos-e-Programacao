#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

// (Declaração Unificada)
typedef struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
} tipo_pessoa;

// typedef struct tipo_pessoa tipo_pessoa;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");

    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Insira os dados da %d° pessoa:\n", i + 1);
        printf("Nome: ");
        fgets(lista[i].nome, 50, stdin);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        limparBuffer();
        
        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        limparBuffer();
        printf("\n");
    }

    system("clear");

    printf("Imprimindo dados:\n");
    for ( i = 0; i < TAM; i++) {
        printf("================================= %d° PESSOA =================================\n\n", i + 1);
        printf("Nome ............................ : %s", lista[i].nome);
        printf("Idade ........................... : %6d\n", lista[i].idade);
        printf("Peso ............................ : %.03f\n\n\n\n", lista[i].peso);
    }
    return 0;
}