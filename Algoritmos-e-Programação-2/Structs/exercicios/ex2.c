// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
// armazene os dados em uma estrutura.

#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
} Pessoa;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void dadosPessoa (Pessoa *p) {
    printf("Digite os dados da pessoa:\n");
    printf("Nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);

    printf("Idade: ");
    scanf("%d", &p->idade);
    limparBuffer();
    
    printf("Endereço: ");
    fgets(p->endereco, sizeof(p->endereco), stdin);
}

void imprimirDados (Pessoa *p) {
    printf("\n\n================================== DADOS DO USUÁRIO ==================================\n\n");
    printf("Nome: .... : %s", p->nome);
    printf("Idade: ....: %d\n", p->idade);
    printf("Endereço . : %s", p->endereco);
    printf("\n\n");
}

int main(void) {
    Pessoa p1;
    
    dadosPessoa(&p1);
    imprimirDados(&p1);
    return 0;
}