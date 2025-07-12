/*
11. A	 prefeitura	 de	 uma	 cidade	 fez	 uma	 	 pesquisa	 com	 200	 pessoas,	
coletando	dados	sobre	o	salário	e	o	número	de	filhos.	A	prefeitura	deseja	
saber:	
• A	média	do	salário	dessas	pessoas	
• A	média	do	número	de	filhos		
• O	maior	salário	
• A		percentagem		de		pessoas		com		salários		até		R$	150,00	

i             = 100
salarioAte150 =   x
ix = salarioAte150 * 100
 x = (salarioAte150 * 100) / i
*/

#include <stdio.h>

int main(void) {
    float salario, salarioTotal=0.0, maiorSalario=-1.0;
    int qtdFilhos, qtdFilhosTotal;
    float mediaSalario, mediaFilhos;
    int salarioAte150=0, mediaSalarioAte150=0;
    int i=0;

    printf("Digite os dados de 200 pessoas:\n");
    while (i < 200) {
        printf("Salário da %d° pessoa ................. : ", i + 1);
        scanf("%f", &salario);
        printf("Quantidade de filhos da %d° pessoa .... : ", i + 1 );
        scanf("%d", &qtdFilhos);

        salarioTotal += salario;
        qtdFilhosTotal += qtdFilhos;

        if (maiorSalario < salario) {
            maiorSalario = salario;
        }
        if (salario <= 150.0) {                
            salarioAte150++;
        }
        printf("\n");
        i++;
    }

    mediaSalario = salarioTotal / i;
    mediaFilhos = qtdFilhosTotal / i;
    mediaSalarioAte150 = ((float)salarioAte150 * 100.0) / i;

    printf("Média salarial ........................................... : %'.2f\n", mediaSalario);
    printf("Média filhos ............................................. : %'.2f\n", mediaFilhos);
    printf("Maior salário ............................................ : %'.2f\n", maiorSalario);
    printf("Porcentagem de pessoas com salários de até R$ 150.00 ..... : %d%%\n", mediaSalarioAte150);
    printf("\n\n");
    return 0;
}