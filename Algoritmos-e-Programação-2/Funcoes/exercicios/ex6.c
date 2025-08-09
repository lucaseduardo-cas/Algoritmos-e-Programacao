/*
Exercício 6: Funções com structs e Ponteiros
Enunciado:
Crie uma struct chamada Ponto com dois campos: x e y (ambos inteiros). Crie as seguintes funções:

lerPonto(Ponto *p): Recebe um ponteiro para a struct Ponto. Pede ao usuário para digitar os valores de x e y e os armazena na struct através do ponteiro. A função deve usar a notação -> para acessar os campos da struct.

calcularDistancia(Ponto p1, Ponto p2): Recebe duas structs Ponto como parâmetros, calcula a distância euclidiana entre elas e retorna o resultado como um float. A fórmula da distância é sqrt( (x2 - x1)^2 + (y2 - y1)^2 ).

exibirPonto(Ponto p): Recebe uma struct Ponto e imprime suas coordenadas no formato (x, y).

No main, declare duas variáveis do tipo Ponto, chame a função lerPonto duas vezes para preenchê-las, chame a função calcularDistancia para obter a distância e, por fim, imprima as coordenadas de ambos os pontos e a distância calculada.

Conceitos a praticar:

Criação e uso de structs.

Passagem de structs para funções (por valor e por referência/ponteiro).

Uso de ponteiros para structs (->).

Bibliotecas matemáticas (math.h).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

typedef struct Ponto Ponto;

void lerPonto(Ponto *p, int elemento) {
    printf(" (Ponto %d) Digite os valores de X e Y:\n", elemento);
    printf("\tX: ");
    scanf("%d", &p->x);
    printf("\tY: ");
    scanf("%d", &p->y);
    printf("\n");
}

void calcularDistancia(Ponto p1, Ponto p2) {
    float distanciaCalculada =  sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    printf("Distancia entre P1 e P2 .. : %.3f\n\n", distanciaCalculada);
    //return distanciaCalculada;
}

void exibirPonto(Ponto p, int elemento) {
    printf("Coordenadas do Ponto %d ... : (%d,%d)\n", elemento, p.x, p.y);
}

int main(void) {
    Ponto ponto1, ponto2;

    system("clear");
    lerPonto(&ponto1, 1);
    lerPonto(&ponto2, 2);
    calcularDistancia(ponto1, ponto2);
    exibirPonto(ponto1, 1);
    exibirPonto(ponto2, 2);
    return 0;
}