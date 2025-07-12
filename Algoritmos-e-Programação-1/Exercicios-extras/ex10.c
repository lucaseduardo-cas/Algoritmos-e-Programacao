/*
10. Uma		loja		ualiza		o		código		V		para		compras		à		vista		e		o	código		P		para		
compras		a		prazo.		Faça		um		algoritmo		que	receba	o	código	de		e	o	valor	
de	15	transações.	Calcule	e	mostre:	
• O	valor	total	das	compras	à	vista	
• O	valor	total	das	compras	a	prazo	
• O	valor	total	das	compras	efetuadas	
*/

#include <stdio.h>

int main (void) {
    char codigo;
    float valor;
    float valorTotalComprasAVista=0.0;
    float valorTotalComprasAPrazo=0.0;
    float valorTotalComprasEfeturadas=0.0;
    int i=1;

    while (i <= 15) {
        printf("Digite o código da %d° compra:\n", i);
        printf("  [V] à vista\n");
        printf("  [P] à prazo\n");
        printf("      Código: ");
        scanf(" %c", &codigo);
    
        if (codigo != 'V' && codigo != 'v' &&
            codigo != 'P' && codigo != 'p') {
            printf("\nOpção inválida! Escolha entre 'V' ou 'P'\n");
            continue;
        } else {
            while (1) {
                printf("Digite o valor da %d° compra: R$ ", i);
                scanf("%f", &valor);
                if (valor <= 1.0) {
                    printf("\nValor inválido! Valor deve ser maior do que R$ 1.00\n");
                    continue;
                } else {
                    if (codigo == 'V' || codigo == 'v') {
                        valorTotalComprasAVista += valor;
                    } else if (codigo == 'P' || codigo == 'p') {
                        valorTotalComprasAPrazo += valor;
                    }
                    break;
                }
            }
        }
        printf("\n");
        i++;
    }
    valorTotalComprasEfeturadas = valorTotalComprasAVista + valorTotalComprasAPrazo;

    printf("\nValor total das compras à vista: ........ R$ %'.2f\n", valorTotalComprasAVista);
    printf("\nValor total das compras à prazo: ........ R$ %'.2f\n", valorTotalComprasAPrazo);
    printf("\nValor total das compras efetuadas: ...... R$ %'.2f\n", valorTotalComprasEfeturadas);
    printf("\n\n");
    return 0;
}