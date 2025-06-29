/*
23 – A polícia rodoviária resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabe-se que o mês em que o emplacamento do
carro deve ser renovado é determinado pelo último número da placa do veiculo. Criar um algoritmo que, a partir da leitura da placa do
carro, informe o mês em que o emplacamento deve ser renovado.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char placa[8];
    char ultimoChar;
    
    printf("Digite a placa do veículo: ");
    scanf("%s", placa);
    
    int tamanho = strlen(placa);
   
    if (tamanho <= 6) {
        printf("A placa precisa ter 6 caracteres!\n\n");
    } else {
        ultimoChar = placa[tamanho - 1];
        if (ultimoChar ==  '0' || ultimoChar == '1') {
            printf("Emplacamento deve ser renovado em Janeiro!\n");
        } else 
        if (ultimoChar ==  '2') {
            printf("Emplacamento deve ser renovado em Fevereiro!\n");
        } else 
        if (ultimoChar ==  '3') {
            printf("Emplacamento deve ser renovado em Março!\n");
        } else 
        if (ultimoChar ==  '4') {
            printf("Emplacamento deve ser renovado em Abril!\n");
        } else 
        if (ultimoChar ==  '5') {
            printf("Emplacamento deve ser renovado em Maio!\n");
        } else 
        if (ultimoChar ==  '6') {
            printf("Emplacamento deve ser renovado em Junho!\n");
        } else 
        if (ultimoChar ==  '7') {
            printf("Emplacamento deve ser renovado em Julho!\n");
        } else 
        if (ultimoChar ==  '8') {
            printf("Emplacamento deve ser renovado em Agosto!\n");
        } else 
        if (ultimoChar ==  '9') {
            printf("Emplacamento deve ser renovado em Setembro!\n");
        } 
    }

    printf("\n");
    return 0;
}