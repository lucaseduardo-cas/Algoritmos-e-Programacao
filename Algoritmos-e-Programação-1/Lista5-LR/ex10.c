#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL, "Portuguese");
	
	char sexo, sexo_mais_alto;
	float altura;
	float menor_altura_total, maior_altura_total;
	float media_altura_m, soma_media_m, total_homens;
	int i=1, j=1, m=0, f=0; // Variáveis de controle
		
	do {
	printf("Digite a altura da %d° pessoa: ", i);
	scanf("%f", &altura);
	
	if (altura < 0.50 || altura > 2.60) {
		printf("    Altura inválida! Digite uma altura entre 0,50m e 2,60m\n\n");
		continue;
	}
	
	printf("Digite o sexo da %d° pessoa [M] ou [F]: ", i);
	scanf(" %c", &sexo);
	
		if (sexo == 'M') { // Sexo masculino
			printf("    Homem\n    %.2f\n\n", altura, sexo);
			m++;
		} else if (sexo == 'F') { // Sexo feminino
			printf("    Mulher\n    %.2f\n\n", altura, sexo);
			soma_media_m += altura;
			f++;
			media_altura_m = soma_media_m / f;
		} else {
			printf("\nSexo inválido!\n\n");
			continue;
		}	
		
		// Calcula a menor altura do grupo
		if (j == 1) {
			menor_altura_total = altura;
			maior_altura_total = altura;
			j = 0;
		} if (altura < menor_altura_total) {
			menor_altura_total = altura;
		} else if (altura > maior_altura_total) {
			sexo_mais_alto = sexo; // Calcula o sexo mais alto
		}
	
	i++;
	
	} while (i > 0 && i <= 15);

	printf("Menor altura do grupo: %.2f\n", menor_altura_total);
	printf("Média de altura das mulheres: %.2f\n", media_altura_m);
	printf("Número de homens: %d\n", m);
	printf("Sexo da pessoa mais alta: %c", sexo_mais_alto);
	printf("\n\n\n");
	
system("Pause");
return 0;

}
