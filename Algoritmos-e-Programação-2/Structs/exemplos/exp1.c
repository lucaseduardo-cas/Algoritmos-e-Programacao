/*
STRUCTS

Obs.: Structs é muito utilizado com lista de vetores, não com variáveis simples.

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50 // Constante do tamanho 50

// Define o tipo de dado struct
struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa; // Renomeando "struct tipo_pessoa" para apenas "tipo_pessoa"

// Função para limpar buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");

    // Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"}; // Criando uma variável "pes" do tipo "tipo_pessoa". Ou seja, a variável é "pes"

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    
    // Atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto"); // strcpy: função que permite fazer atribuição a uma string
    
    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Solicitando incersões via teclado
    printf("\nInsira um número inteiro: ");
    scanf("%d", &pes.idade);
    limparBuffer();
    printf("Insira um número real: ");
    scanf("%f", &pes.peso);
    limparBuffer();
    printf("Insira uma (ou conjunto) de palavra: ");
    fgets(pes.nome, TAM, stdin);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}