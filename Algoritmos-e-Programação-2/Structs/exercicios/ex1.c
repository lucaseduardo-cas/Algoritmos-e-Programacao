/*
1. Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horario: composto de hora, minutos e segundos.
• Data: composto de dia, mes e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Horario {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Compromisso {
    Data data;
    Horario horario;
    char textoCompromisso[50];
} Compromisso;

int main(void) {
    Compromisso meuCompromisso;

    meuCompromisso.data.dia =   28;
    meuCompromisso.data.mes =   10;
    meuCompromisso.data.ano = 2025;

    meuCompromisso.horario.hora     = 23;
    meuCompromisso.horario.minutos  = 30;
    meuCompromisso.horario.segundos = 20;

    strncpy(meuCompromisso.textoCompromisso, "Reuniao de Projeto", 50);

    printf("Compromisso agendado para: %d/%d/%d as %d:%d - %s\n",
            meuCompromisso.data.dia, meuCompromisso.data.mes, meuCompromisso.data.ano,
            meuCompromisso.horario.hora, meuCompromisso.horario.minutos,
            meuCompromisso.textoCompromisso);

    return 0;
}
