/*
8. Faça um programa para ler o sexo (1-masculino, 2-feminino) e a altura de um grupo de 50 pessoas. O
programa deve calcular :
* A altura média das mulheres e a altura média dos homens;
* A maior e a menor altura do grupo, dizendo se a altura é de um homem ou de uma mulher. 
*/

#include <stdio.h>

int main(void) {
    int sexo;
    int i=1, h=0, m=0; //variáveis de controle
    float altura=0, soma_altura_h=0, soma_altura_m=0;
	float media_altura_h=0, media_altura_m=0;
	float maior_altura_geral = 0.0, menor_altura_geral = 999.0;
    char sexo_maior_altura, sexo_menor_altura;
	int leitura_h=1, leitura_m=1;

    do {
    	printf("Escolha o sexo da %d° pessoa:\n", i);
		printf("   [1] Masculino\n");
		printf("   [2] Feminino\n");
		printf("\tOpção: ");
    	scanf("%d", &sexo);

    	if (sexo != 1 && sexo != 2) { // Valida se o sexo digitado é valido
			printf("\n    Opção inválida!!!\n");
			continue;
		} else {
			if (sexo == 1) { // Se o sexo for masculino:
	    		printf("\nDigite a altura do %d° homem:\n", h + 1);
				printf("Altura: ");
				scanf("%f", &altura);
				printf("\n");
				if (altura >= 0.50 && altura <= 2.60) {
					soma_altura_h += altura;
					h++;
				} else {
					printf("    Altura inválida!\n");
					continue;
				}
			} else { // Se o sexo for feminino (Opção 2)
				printf("\nDigite a altura da %d° mulher:\n", m + 1);
				printf("Altura: ");
				scanf("%f", &altura);
				printf("\n");
				if (altura >= 0.50 && altura <= 2.60) {
					soma_altura_m += altura;
					m++;
				} else {
					printf("    Altura inválida!\n");
					continue;
				}
			} 
			if (i == 1 || altura > maior_altura_geral) {
				maior_altura_geral = altura;
				if (sexo == 1) {
					sexo_maior_altura = 'M';
				} else {
					sexo_maior_altura = 'F';
				}
			}
			if (i == 1 || altura < menor_altura_geral) {
				menor_altura_geral = altura;
				if (sexo == 1) {
					sexo_menor_altura = 'M';
				} else {
					sexo_menor_altura = 'F';
				}
        	}
			i++;
		} 
	} while (i <= 50);

	media_altura_h = soma_altura_h / h;
	media_altura_m = soma_altura_m / m;
	
	printf("\nAltura média dos homens: %.2f", media_altura_h);
	printf("\nAltura média das mulheres: %.2f", media_altura_m);
	printf("\n\nMaior altura do grupo: %.2f (%c)", maior_altura_geral, sexo_maior_altura);
    printf("\nMenor altura do grupo: %.2f (%c)", menor_altura_geral, sexo_menor_altura);
	printf("\n\n\n");
	return 0;
}