/*
20 - Fazer um algoritmo que calcule e escreva a quantidade de dinheiro a ser gasto em uma viagem. Sabe-se que o veículo a ser usado
faz 12 Km por litro de gasolina e que o litro de gasolina custa R$ 6,47. O usuário irá fornecer o tempo de viagem e a velocidade média
do veículo.
  Distância = tempo de viagem * velocidade média.
  Quantidade de litros = distância / 12.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    int horas, minutos, tempoViagem, velMedia;
    float distancia, qtdLitros, valorGasolina;

    printf("Tempo de viagem:\n");
    printf("Horas .................... : ");
    scanf("%d", &horas);
    printf("Minutos: ................. : ");
    scanf("%d", &minutos);
    printf("\nVelocidade média: ........ : ");
    scanf("%d", &velMedia);

    tempoViagem = (horas * 60) + minutos;
    distancia = tempoViagem * (velMedia / 60.0); // Convertendo Km/h em m/min
    qtdLitros = distancia / 12.0;
    valorGasolina = qtdLitros * 6.47;

    printf("\n============= RESUMO DA VIAGEM =============\n");
    printf("Duração total: ................. %d min\n", tempoViagem);
    printf("Distância percorrida: .......... %.2f km\n", distancia);
    printf("Combustível necessário: ........ %.2f L\n", qtdLitros);
    printf("Custo total estimado: .......... R$ %.2f\n", valorGasolina);

    return 0;
}

