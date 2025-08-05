/*
PONTEIRO PARA PONTEIRO

Exemplo do tipo Lista encadeada

Diferença de '.' e '->' (ponto e seta):
Para variáveis do tipo ponteiro: '->'
Para variáveis comum: '.'

Ponteiro para ponteiro pode ter mais níveis de complexidades. Exemplo:
**x; = Ponteiro para ponteiro
***x; = Ponteiro para ponteiro para ponteiro
****x: = Ponteiro para ponteiro para ponteiro para ponteiro

Obs.: Não é recomendado utilizar isso devido a complexidade. Um bom código deve ser legível, claro, até para facilitar manutenções e atualizações. 
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

No* inserir2(No **inicio, int x) { // Ponteiro para ponteiro
    No *novo = malloc(sizeof(No));
    int v;
    if (novo) {
        novo->valor = x;
        novo->proximo = *inicio;
        *inicio = novo;
    }
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

    inserir2(&lista,   17);
    inserir2(&lista,   57);
    inserir2(&lista,  107);
   
    imprimir(lista);
    return 0;
}