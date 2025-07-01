/*
10. Desenvolver um algoritmo e um programa em C que leia a altura e o sexo (M ou F) de 15 pessoas. Este
programa deverá calcular e mostrar :
	a. A menor altura do grupo;
	b. A média de altura das mulheres;
	c. O número de homens;
	d. O sexo da pessoa mais alta 
*/

#include <stdio.h>

int main(void) {
	char sexo, sexo_mais_alto;
	float altura;
	float menor_altura_total, maior_altura_total;
	float media_altura_m=0.0, soma_media_m=0.0;
	int i=1, j=1, m=0, f=0; // Variáveis de controle
		
	do {
	printf("Altura da %d° pessoa ............. : ", i);
	scanf("%f", &altura);
	if (altura < 0.50 || altura > 2.60) {
		printf("    Altura inválida! Digite uma altura entre 0,50m e 2,60m\n\n");
		continue;
	}
	printf("Sexo da %d° pessoa [M] ou [F] .... : ", i);
	scanf(" %c", &sexo);
		if (sexo == 'M' || sexo == 'm') { // Sexo masculino
			printf("    Homem\n    %.2f\n\n", altura);
			m++;
		} else if (sexo == 'F' || sexo == 'f') { // Sexo feminino
			printf("    Mulher\n    %.2f\n\n", altura);
			soma_media_m += altura;
			f++;
		} else {
			printf("\nSexo inválido!\n\n");
			continue;
		}	
		
		// Calcula a menor altura do grupo
		if (j == 1) {
			menor_altura_total = altura;
			maior_altura_total = altura;
			j = 0;
		} 
		if (altura > maior_altura_total) {
			maior_altura_total = altura;
			sexo_mais_alto = sexo; // Calcula o sexo mais alto
		}
		if (altura < menor_altura_total) {
			menor_altura_total = altura;
		} 
		i++;
	} while (i > 0 && i <= 15);
	
	// Calcula média de altura das mulheres
	media_altura_m = soma_media_m / f;

	printf("Menor altura do grupo: %.2f\n", menor_altura_total);
	printf("Média de altura das mulheres: %.2f\n", media_altura_m);
	printf("Número de homens: %d\n", m);
	printf("Sexo da pessoa mais alta: %c", sexo_mais_alto);
	printf("\n\n");
	return 0;
}
