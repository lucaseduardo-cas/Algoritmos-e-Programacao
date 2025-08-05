/*
Exemplo do tipo Lista

Diferença de '.' e '->' (ponto e seta):
Para variáveis do tipo ponteiro: '->'
Para variáveis comum: '.'
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

No* inserir(No *inicio, int x) {
    No *novo = malloc(sizeof(No));
    int v;
    if (novo) {
        novo->valor = x;
        novo->proximo = inicio;
    }
    return novo;
}

void imprimir(No *inicio) {
    if (inicio) { // if(inicio) é a mesma coisa que if(inicio != null)
        printf("%d ", inicio->valor);
        imprimir(inicio->proximo);
    }
}

int main(void) {
    No *lista = NULL; // No inicio a lista está vazia, portando a lista é nula (Deixa o código robusto)

    lista = inserir(lista,  10);
    lista = inserir(lista,  50);
    lista = inserir(lista, 100);

    imprimir(lista);
    return 0;
}