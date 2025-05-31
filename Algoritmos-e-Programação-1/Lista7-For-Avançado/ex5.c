/*
5. O cardápio de uma lanchonete é o seguinte: Especificação Código Preço 
- Cachorro Quente 100 R$ 1,20 
- Bauru Simples 101 R$ 1,30 
- Bauru com ovo 102 R$ 1,50 
- Hambúrguer 103 R$ 1,20 
- Cheeseburguer 104 R$ 1,30 
- Refrigerante 105 R$ 1,00 
Faça um programa que leia o
código dos itens pedidos e as quantidades desejadas sabendo que pedidos acima de
R$100,00 tem desconto de 5%. Calcule e mostre o sub-total e o desconto(se houver) e o
total geral do pedido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int codigo, qtd;
	float total_a_pagar, total=0.0, total_desconto=0.0;
	float cachorro_quente=0.0, bauru_simples=0.0, bauru_c_ovo=0.0, hamburguer=0.0, cheeseburguer=0.0, refrigerante=0.0;
	int cachorro_quente_qtd=0, bauru_simples_qtd=0, bauru_c_ovo_qtd=0, hamburguer_qtd=0, cheeseburguer_qtd=0, refrigerante_qtd=0;
    
    do {   
    	printf("Especificação    | Código | Preço\n");
	    printf("Cachorro quente  |  100   | R$1,20\n");
	    printf("Bauru Simples    |  101   | R$1,30\n");
	    printf("Bauru c/ ovo     |  102   | R$1,50\n");
	    printf("Hambúrguer       |  103   | R$1,20\n");
	    printf("Cheeseburguer    |  104   | R$1,30\n");
	    printf("Refrigerande     |  105   | R$1,00\n");
	    
	    printf("\nDigite o código do item: ");
	    scanf("%d", &codigo);
	    
	    if (codigo == 0) {
			break;	
		} else if (codigo < 100 || codigo > 105) {
			printf("\n     Código inválido!\n\n");
			continue;
		}
		 
		while (1) {
			printf("Quantidade: ");
		    scanf("%d", &qtd);
		    printf("\n");
		    
		    if (qtd < 1) {
		    	printf("Quantidade inválida!\n");
		    	continue;
			} else {
				break;
			}
		}
	    	
    	if (codigo == 100) {
    		total_a_pagar = qtd * 1.20;
    		cachorro_quente_qtd += qtd;
    		cachorro_quente += total_a_pagar;
    		
		} else if (codigo == 101) {
			total_a_pagar = qtd * 1.30;
			bauru_simples_qtd += qtd;
			bauru_simples += total_a_pagar;
			
		} else if (codigo == 102) {
			total_a_pagar = qtd * 1.50;
			bauru_c_ovo_qtd += qtd;
			bauru_c_ovo += total_a_pagar;
			
		} else if (codigo == 103) {
			total_a_pagar = qtd * 1.20;
			hamburguer_qtd += qtd;
			hamburguer += total_a_pagar;
			
		} else if (codigo == 104) {
			total_a_pagar = qtd * 1.30;
			cheeseburguer_qtd += qtd;
			cheeseburguer += total_a_pagar;
			
		} else if (codigo == 105) {
			total_a_pagar = qtd * 1.00;
			refrigerante_qtd += qtd;
			refrigerante += total_a_pagar;
			
		} 
		
		total = total + total_a_pagar;
    	
	} while (1);
	
		if (total > 100) {
			total_desconto = total * 0.05;
		}
	
		printf("\nTOTAL DO PEDIDO:");
		printf("\nEspecificação    |  Quantidade |  Total\n");
	    printf("Cachorro quente  |     %03d     |  R$%.2f\n", cachorro_quente_qtd, cachorro_quente);
	    printf("Bauru Simples    |     %03d     |  R$%.2f\n", bauru_simples_qtd, bauru_simples);
	    printf("Bauru c/ ovo     |     %03d     |  R$%.2f\n", bauru_c_ovo_qtd, bauru_c_ovo);
	    printf("Hambúrguer       |     %03d     |  R$%.2f\n", hamburguer_qtd, hamburguer);
	    printf("Cheeseburguer    |     %03d     |  R$%.2f\n", cheeseburguer_qtd, cheeseburguer);
	    printf("Refrigerande     |     %03d     |  R$%.2f\n", refrigerante_qtd, refrigerante);
	    printf("                        Total:  R$%.2f\n", total);
	    printf("                     Desconto: -R$%.2f\n", total_desconto);
	    printf("                                R$%.2f\n", total - total_desconto);
    	printf("\n\n\n");
  
	system("Pause");
    return 0;
}
