/*
4. Um funcionário de uma empresa recebe aumento salarial anualmente, sendo que no 
primeiro ano aplica-se um percentual e apartir do segundo o percentual é o dobro do ano 
anterior. 
Faça um programa que leia o salário inicial e o índice de aumento do primeiro 
ano e determine o salário atual desse funcionário. Obs: mostre o salário anterior o 
percentual de aumento e o salário com aumento em todos os anos.
*/

#include <stdio.h>

int main(void) {
    float salario_inicial, salario_atual, aumento_ano1, valor_percent, percent_aumento;
    int anos, i;
    
    printf("Salário inicial: R$");
    scanf("%f", &salario_inicial);
    printf("Aumento do 1° ano em (%%): ");
    scanf("%f", &aumento_ano1);
    printf("Quantidade de anos: ");
    scanf("%d", &anos);
    
    for (i=1; i<=anos; i++) {
    	valor_percent = salario_inicial * aumento_ano1 / 100;
    	salario_atual = salario_inicial + valor_percent;
    	percent_aumento = aumento_ano1;
    	
    	printf("%d° ano: salário: R$%.2f - Aumento (%.2f%%): R$%.2f - Salário atual: R$%.2f\n", 
		i, salario_inicial, percent_aumento, valor_percent, salario_atual);
		
    	aumento_ano1 = aumento_ano1 * 2;
    	salario_inicial = salario_atual;
	}
    
    return 0;
}
