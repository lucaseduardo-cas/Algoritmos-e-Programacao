#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_brazil");

    int sexo;
    int i=1, h=0, m=0; //variáveis de controle
    float altura=0, soma_altura_h=0, soma_altura_m=0;
	float media_altura_h=0, media_altura_m=0;
	float maior_altura_h, menor_altura_h;
	float maior_altura_m, menor_altura_m;
	float maior_altura_geral = 0, menor_altura_geral = 0;
    char sexo_maior_altura, sexo_menor_altura;
	int leitura_h=1, leitura_m=1;

    do {
    	printf("Escolha o sexo da %d° pessoa:\n    [1] Masculino\n    [2] Feminino\n", i);
    	scanf("%d", &sexo);

    	if (sexo == 1 || sexo == 2) { // Valida se o sexo digitado é valido
    		if (sexo == 1) { // Se o sexo for masculino:
	    		printf("\nDigite a altura da %dº pessoa:\n", i);
			   	scanf("%f", &altura);
			   	printf("\n");

			   	if (altura >= 0.50 && altura <= 2.60) {
					soma_altura_h = soma_altura_h + altura;
					h++;
					media_altura_h = soma_altura_h / h;
				} else {
					printf("    Altura inválida!\n");
					continue;
				}

			} else if (sexo == 2) { // Se o sexo for feminino
				printf("\nDigite a altura da %dº pessoa:\n", i);
			   	scanf("%f", &altura);
				printf("\n");

				if (altura >= 0.50 && altura <= 2.60) {
					soma_altura_m = soma_altura_m + altura;
					m++;
					media_altura_m = soma_altura_m / m;
				} else {
					printf("    Altura inválida!\n");
					continue;
				}

			} else {
				printf("\nSexo inválido!!!\n");
				continue;
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

		} else {
			printf("\n    Opção inválida!!!\n");
    		continue;
		}

		i++;

	} while (i <= 5);

	printf("\nAltura média dos homens: %.2f", media_altura_h);
	printf("\nAltura média das mulheres: %.2f", media_altura_m);

	printf("\n\nMaior altura do grupo: %.2f (%c)", maior_altura_geral, sexo_maior_altura);
    printf("\nMenor altura do grupo: %.2f (%c)", menor_altura_geral, sexo_menor_altura);

	printf("\n\n\n");

system("Pause");
return 0;

}

