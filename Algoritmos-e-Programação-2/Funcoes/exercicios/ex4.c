/*
Crie um programa que dado um valor em segundos, gere um horário em hora, minuto, segundo: 00:00:00
*/

#include <stdio.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Horario;

int entradaDados(int *segundosTotais) {
    printf("Digite a quantidade de segundos: ");
    scanf("%d", segundosTotais);
    return 0;
}

Horario calcularHorario(int segundosTotais) {
    Horario h;

    h.horas = segundosTotais / 3600;
    int segundosAposHoras = segundosTotais % 3600;
    h.minutos = segundosAposHoras / 60;
    h.segundos = segundosAposHoras % 60;

    return h; 
}

void exibirHorario(Horario h) {
    printf("%02d:%02d:%02d\n", h.horas, h.minutos, h.segundos);
}

int main(void) {
    int totalSegundos;
    Horario horarioCalculado;

    entradaDados(&totalSegundos); 
    horarioCalculado = calcularHorario(totalSegundos);
    exibirHorario(horarioCalculado);

    return 0;
}