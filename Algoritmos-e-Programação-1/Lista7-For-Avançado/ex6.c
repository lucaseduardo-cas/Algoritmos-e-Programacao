/*
6. Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a pior
nota são eliminadas. A sua nota fica sendo a média dos votos restantes. Você deve fazer um
programa que receba as notas dos sete jurados alcançadas pelo atleta em sua apresentação e
depois informe a sua média, conforme a descrição acima informada (retirar o melhor e o
pior salto e depois calcular a média com as notas restantes).As notas não são informados
ordenadas.
Resultado final:
Melhor nota: 9.9
Pior nota: 7.5
Média: 9,04

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float nota=0, soma=0, media=0;
    //Começa com -1 e 100 para atualizar os laços condicionais para a primeira nota inserida
    float maior_nota=-1, menor_nota=100;
    int i=1;

	do {
		printf("Nota do %d° jurado: ", i);
    	scanf("%f", &nota);

    	if (nota >= 0.0 && nota <= 10.0) {
    		if (maior_nota < nota) { // Calcula a maior nota;
    			maior_nota = nota;
			}
			if (menor_nota > nota) { // Calcula a pior nota;
				menor_nota = nota;
			}
			soma = soma + nota;
			i++;
		} else {
			printf("      Valor inválido! Digite uma nota entre 0.00 e 10.00: \n\n");
			continue;
		}

	} while (i <= 7);

	soma = soma - (maior_nota + menor_nota); // Retirando o melhor e a pior nota
	media = soma / 5; // 5, pois são 7 jurados menos 2, que subtrai a melhor e pior nota

	printf("\nResultado final:\n");
	printf("Melhor nota: %.2f\n", maior_nota);
	printf("Pior nota: %.2f\n", menor_nota);
	printf("Média: %.2f\n\n\n", media);

	system("Pause");
    return 0;
}
