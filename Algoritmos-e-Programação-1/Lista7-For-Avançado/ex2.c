/*
2. A delegacia de polícia da pequena cidade de Faina conta com somente 3 políciais: o chefe de
polícia Zoiudo, e os policiais Zé Pequi e Jeca. Como é de se esperar, esse pequeno
contingente de policiais não consegue atender imediatamente a todos os chamados policiais.
Portanto, você foi contratado para criar um sistema de atendimento, de maneira que cada um
dos policiais fique com um conjunto equilibrado de chamados. Considere os requisitos:
- Cada ocorrência deve ser de um tipo: Direção Perigosa, Barulho, Bebedeira, Briga;
- Cada ocorrência deve ser de um nível de gravidade: Baixo, Médio, Alto;
- Toda ocorrência do tipo Briga tem nível de gravidade alto;
- Novas ocorrências devem ser atribuídas ao policial com menos ocorrências;
- Ocorrências do tipo Briga sempre são atribuídas ao chefe de polícia;
- A cada registro de ocorrência o sistema deve imprimir um resumo da quantidade de
ocorrências de cada policial, o número de ocorrências do tipo Briga e o percentual de
ocorrências do tipo “Direção Perigosa” em relação do total de ocorrências cadastradas.

- Resumo da quantidade e ocorrências de cada policial; 
- Número de ocorrências do tipo briga; [V]
- Percentual de ocorrências do tipo "Direção Perigosa" em relação ao TOTAL de ocorrências cadastradas; [V]
*/

#include <stdio.h>

int main(void) {
    float percent_dir_perigosa;
    int tipo_ocorrencia, direcao_perigosa, qtd_ocorrencia=0;
    int zoiudo1=0, zoiudo2=0, zoiudo3=0, zoiudo4=0, qtd_zoiudo; 
	int ze_pequi1=0, ze_pequi2=0, ze_pequi3=0, qtd_zepequi;
	int jeca1=0, jeca2=0, jeca3=0, qtd_jeca;
    int i;
    
    do {
        printf("Selecione o tipo de ocorrência: (0 p/ finalizar)\n");
        printf("    [1] Direção Perigosa\n");
        printf("    [2] Barulho\n");
        printf("    [3] Bebedeira\n");
        printf("    [4] Briga\nOpção: ");
        scanf("%d", &tipo_ocorrencia);
        
        if (tipo_ocorrencia < 0 || tipo_ocorrencia > 4) {
            printf("    Opção inválida!\n\n");
            continue; 
        } else if (tipo_ocorrencia == 0) {
        	printf("    Operação finalizada!\n\n");
        	break;
        } 
     	  
		if (tipo_ocorrencia == 1 || tipo_ocorrencia == 2 || tipo_ocorrencia == 3) {
			// Soma da quantidade total de cada policial
		    qtd_zoiudo = zoiudo1 + zoiudo2 + zoiudo3 + zoiudo4;
		    qtd_zepequi = ze_pequi1 + ze_pequi2 + ze_pequi3;    
		    qtd_jeca = jeca1 + jeca2 + jeca3;
		    qtd_ocorrencia++; //Soma da quantidade de ocorrências de todos os policiais para as opções 1, 2 ou 3;
		
		    // Atribui ao policial com menos ocorrências (excluindo o caso de "Briga")
		    if (qtd_zoiudo <= qtd_zepequi && qtd_zoiudo <= qtd_jeca) {
		        // Zoiudo recebe a ocorrência
		        if (tipo_ocorrencia == 1) { 
		            zoiudo1++; 
		        } else if (tipo_ocorrencia == 2) { 
		            zoiudo2++; 
		        } else if (tipo_ocorrencia == 3) { 
		            zoiudo3++; 
		        }
		        qtd_zoiudo++;
		    } else if (qtd_zepequi <= qtd_zoiudo && qtd_zepequi <= qtd_jeca) {
		        // Zé Pequi recebe a ocorrência
		        if (tipo_ocorrencia == 1) { 
		            ze_pequi1++; 
		        } else if (tipo_ocorrencia == 2) { 
		            ze_pequi2++; 
		        } else if (tipo_ocorrencia == 3) { 
		            ze_pequi3++; 
		        }
		        qtd_zepequi++;
		    } else {
		        // Jeca recebe a ocorrência
		        if (tipo_ocorrencia == 1) { 
		            jeca1++; 
		        } else if (tipo_ocorrencia == 2) { 
		            jeca2++; 
		        } else if (tipo_ocorrencia == 3) { 
		            jeca3++; 
		        }
		        qtd_jeca++;
		    }
		} else if (tipo_ocorrencia == 4) {
		    // Ocorrência do tipo "Briga" sempre vai para Zoiudo (chefe de polícia)
		    qtd_ocorrencia++; //Soma da quantidade de ocorrências de todos os policiais somente para a opção 4
		    qtd_zoiudo++;
		    zoiudo4++;
		}

		direcao_perigosa = zoiudo1 + ze_pequi1 + jeca1;
		percent_dir_perigosa = (direcao_perigosa * 100) / qtd_ocorrencia;
						  
        printf("Policial: Zoiudo (%d)\n", qtd_zoiudo);
        printf("Direção Perigosa [MÉDIA]: %d\n", zoiudo1);
        printf("Barulho          [BAIXA]: %d\n", zoiudo2);
        printf("Bebedeira        [BAIXA]: %d\n", zoiudo3);
        printf("Briga            [ALTA ]: %d\n\n", zoiudo4);
        
        printf("Policial: Zé Pequi (%d)\n", qtd_zepequi);
        printf("Direção Perigosa [MÉDIA]: %d\n", ze_pequi1);
	    printf("Barulho          [BAIXA]: %d\n", ze_pequi2);
        printf("Bebedeira        [BAIXA]: %d\n\n", ze_pequi3);
        
        printf("Policial: Zeca (%d)\n", qtd_jeca);
        printf("Direção Perigosa [MÉDIA]: %d\n", jeca1);
        printf("Barulho          [BAIXA]: %d\n", jeca2);
        printf("Bebedeira        [BAIXA]: %d\n\n", jeca3);
        
        printf("Porcentagem (Direção Perigosa) em relação ao total de ocorrências: %.2f%%\n\n\n", percent_dir_perigosa);
        
    } while (1); 
    
    // Após o usário digitar 0 imprime a tabela mais uma vez com todo o histórico digitado
    printf("Policial: Zoiudo (%d)\n", qtd_zoiudo);
    printf("Direção Perigosa [MÉDIA]: %d\n", zoiudo1);
    printf("Barulho          [BAIXA]: %d\n", zoiudo2);
    printf("Bebedeira        [BAIXA]: %d\n", zoiudo3);
    printf("Briga            [ALTA ]: %d\n\n", zoiudo4);
        
    printf("Policial: Zé Pequi (%d)\n", qtd_zepequi);
    printf("Direção Perigosa [MÉDIA]: %d\n", ze_pequi1);
	printf("Barulho          [BAIXA]: %d\n", ze_pequi2);
    printf("Bebedeira        [BAIXA]: %d\n\n", ze_pequi3);
        
    printf("Policial: Zeca (%d)\n", qtd_jeca);
    printf("Direção Perigosa [MÉDIA]: %d\n", jeca1);
    printf("Barulho          [BAIXA]: %d\n", jeca2);
    printf("Bebedeira        [BAIXA]: %d\n\n", jeca3);
        
    printf("Porcentagem (Direção Perigosa) em relação ao total de ocorrências: %.2f%%", percent_dir_perigosa);
    
    printf("\n\n");
    return 0;
}
