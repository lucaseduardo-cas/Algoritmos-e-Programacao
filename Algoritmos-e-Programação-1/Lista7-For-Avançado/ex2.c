/*
2. A delegacia de pol�cia da pequena cidade de Faina conta com somente 3 pol�ciais: o chefe de
pol�cia Zoiudo, e os policiais Z� Pequi e Jeca. Como � de se esperar, esse pequeno
contingente de policiais n�o consegue atender imediatamente a todos os chamados policiais.
Portanto, voc� foi contratado para criar um sistema de atendimento, de maneira que cada um
dos policiais fique com um conjunto equilibrado de chamados. Considere os requisitos:
- Cada ocorr�ncia deve ser de um tipo: Dire��o Perigosa, Barulho, Bebedeira, Briga;
- Cada ocorr�ncia deve ser de um n�vel de gravidade: Baixo, M�dio, Alto;
- Toda ocorr�ncia do tipo Briga tem n�vel de gravidade alto;
- Novas ocorr�ncias devem ser atribu�das ao policial com menos ocorr�ncias;
- Ocorr�ncias do tipo Briga sempre s�o atribu�das ao chefe de pol�cia;
- A cada registro de ocorr�ncia o sistema deve imprimir um resumo da quantidade de
ocorr�ncias de cada policial, o n�mero de ocorr�ncias do tipo Briga e o percentual de
ocorr�ncias do tipo �Dire��o Perigosa� em rela��o do total de ocorr�ncias cadastradas.

- Resumo da quantidade e ocorr�ncias de cada policial; 
- N�mero de ocorr�ncias do tipo briga; [V]
- Percentual de ocorr�ncias do tipo "Dire��o Perigosa" em rela��o ao TOTAL de ocorr�ncias cadastradas; [V]
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    float percent_dir_perigosa;
    int tipo_ocorrencia, direcao_perigosa, qtd_ocorrencia=0;
    
    int zoiudo1=0, zoiudo2=0, zoiudo3=0, zoiudo4=0, qtd_zoiudo; 
	int ze_pequi1=0, ze_pequi2=0, ze_pequi3=0, qtd_zepequi;
	int jeca1=0, jeca2=0, jeca3=0, qtd_jeca;
	
    int i;
    
    do {
        printf("Selecione o tipo de ocorr�ncia: (0 p/ finalizar)\n");
        printf("    [1] Dire��o Perigosa\n");
        printf("    [2] Barulho\n");
        printf("    [3] Bebedeira\n");
        printf("    [4] Briga\nOp��o: ");
        scanf("%d", &tipo_ocorrencia);
        
        if (tipo_ocorrencia < 0 || tipo_ocorrencia > 4) {
            printf("    Op��o inv�lida!\n\n");
            continue; 
        } else if (tipo_ocorrencia == 0) {
        	printf("    Opera��o finalizada!\n\n");
        	break;
        } 
     	  
		if (tipo_ocorrencia == 1 || tipo_ocorrencia == 2 || tipo_ocorrencia == 3) {
			// Soma da quantidade total de cada policial
		    qtd_zoiudo = zoiudo1 + zoiudo2 + zoiudo3 + zoiudo4;
		    qtd_zepequi = ze_pequi1 + ze_pequi2 + ze_pequi3;    
		    qtd_jeca = jeca1 + jeca2 + jeca3;
		    qtd_ocorrencia++; //Soma da quantidade de ocorr�ncias de todos os policiais para as op��es 1, 2 ou 3;
		
		    // Atribui ao policial com menos ocorr�ncias (excluindo o caso de "Briga")
		    if (qtd_zoiudo <= qtd_zepequi && qtd_zoiudo <= qtd_jeca) {
		        // Zoiudo recebe a ocorr�ncia
		        if (tipo_ocorrencia == 1) { 
		            zoiudo1++; 
		        } else if (tipo_ocorrencia == 2) { 
		            zoiudo2++; 
		        } else if (tipo_ocorrencia == 3) { 
		            zoiudo3++; 
		        }
		        qtd_zoiudo++;
		    } else if (qtd_zepequi <= qtd_zoiudo && qtd_zepequi <= qtd_jeca) {
		        // Z� Pequi recebe a ocorr�ncia
		        if (tipo_ocorrencia == 1) { 
		            ze_pequi1++; 
		        } else if (tipo_ocorrencia == 2) { 
		            ze_pequi2++; 
		        } else if (tipo_ocorrencia == 3) { 
		            ze_pequi3++; 
		        }
		        qtd_zepequi++;
		    } else {
		        // Jeca recebe a ocorr�ncia
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
		    // Ocorr�ncia do tipo "Briga" sempre vai para Zoiudo (chefe de pol�cia)
		    qtd_ocorrencia++; //Soma da quantidade de ocorr�ncias de todos os policiais somente para a op��o 4
		    qtd_zoiudo++;
		    zoiudo4++;
		}

		
		direcao_perigosa = zoiudo1 + ze_pequi1 + jeca1;
		percent_dir_perigosa = (direcao_perigosa * 100) / qtd_ocorrencia;
						  
        printf("Policial: Zoiudo (%d)\n", qtd_zoiudo);
        printf("Dire��o Perigosa [M�DIA]: %d\n", zoiudo1);
        printf("Barulho          [BAIXA]: %d\n", zoiudo2);
        printf("Bebedeira        [BAIXA]: %d\n", zoiudo3);
        printf("Briga            [ALTA ]: %d\n\n", zoiudo4);
        
        printf("Policial: Z� Pequi (%d)\n", qtd_zepequi);
        printf("Dire��o Perigosa [M�DIA]: %d\n", ze_pequi1);
	    printf("Barulho          [BAIXA]: %d\n", ze_pequi2);
        printf("Bebedeira        [BAIXA]: %d\n\n", ze_pequi3);
        
        printf("Policial: Zeca (%d)\n", qtd_jeca);
        printf("Dire��o Perigosa [M�DIA]: %d\n", jeca1);
        printf("Barulho          [BAIXA]: %d\n", jeca2);
        printf("Bebedeira        [BAIXA]: %d\n\n", jeca3);
        
        printf("Porcentagem (Dire��o Perigosa) em rela��o ao total de ocorr�ncias: %.2f%%\n\n\n", percent_dir_perigosa);
        
    } while (1); 
    
    	// Ap�s o us�rio digitar 0 imprime a tabela mais uma vez com todo o hist�rico digitado
    	printf("Policial: Zoiudo (%d)\n", qtd_zoiudo);
        printf("Dire��o Perigosa [M�DIA]: %d\n", zoiudo1);
        printf("Barulho          [BAIXA]: %d\n", zoiudo2);
        printf("Bebedeira        [BAIXA]: %d\n", zoiudo3);
        printf("Briga            [ALTA ]: %d\n\n", zoiudo4);
        
        printf("Policial: Z� Pequi (%d)\n", qtd_zepequi);
        printf("Dire��o Perigosa [M�DIA]: %d\n", ze_pequi1);
	    printf("Barulho          [BAIXA]: %d\n", ze_pequi2);
        printf("Bebedeira        [BAIXA]: %d\n\n", ze_pequi3);
        
        printf("Policial: Zeca (%d)\n", qtd_jeca);
        printf("Dire��o Perigosa [M�DIA]: %d\n", jeca1);
        printf("Barulho          [BAIXA]: %d\n", jeca2);
        printf("Bebedeira        [BAIXA]: %d\n\n", jeca3);
        
        printf("Porcentagem (Dire��o Perigosa) em rela��o ao total de ocorr�ncias: %.2f%%", percent_dir_perigosa);
    
    printf("\n\n\n");
    
    system("Pause");
    return 0;
}
