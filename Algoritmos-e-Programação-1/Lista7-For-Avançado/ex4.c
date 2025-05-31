/*
4. Um funcion�rio de uma empresa recebe aumento salarial anualmente, sendo que no 
primeiro ano aplica-se um percentual e apartir do segundo o percentual � o dobro do ano 
anterior. 
Fa�a um programa que leia o sal�rio inicial e o �ndice de aumento do primeiro 
ano e determine o sal�rio atual desse funcion�rio. Obs: mostre o sal�rio anterior o 
percentual de aumento e o sal�rio com aumento em todos os anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    float salario_inicial, salario_atual, aumento_ano1, valor_percent, percent_aumento;
    int anos, i;
    
    
    printf("Sal�rio inicial: R$");
    scanf("%f", &salario_inicial);
    printf("Aumento do 1� ano em (%%): ");
    scanf("%f", &aumento_ano1);
    printf("Quantidade de anos: ");
    scanf("%d", &anos);
    
    for (i=1; i<=anos; i++) {
    	valor_percent = salario_inicial * aumento_ano1 / 100;
    	salario_atual = salario_inicial + valor_percent;
    	percent_aumento = aumento_ano1;
    	
    	printf("%d� ano: sal�rio: R$%.2f - Aumento (%.2f%%): R$%.2f - Sal�rio atual: R$%.2f\n", 
		i, salario_inicial, percent_aumento, valor_percent, salario_atual);
		
    	aumento_ano1 = aumento_ano1 * 2;
    	salario_inicial = salario_atual;
	}
    
    
  
	system("Pause");
    return 0;
}
