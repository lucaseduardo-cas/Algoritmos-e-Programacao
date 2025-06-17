/*
Questão 3:  Crie  um  programa  que  leia  uma  sequência  de  números  inteiros
fornecidos pelo usuário. O programa deve contar quantos desses números estão
no  intervalo  aberto  entre  100  e  200  (ou  seja,  números  maiores  que  100  e
menores que 200). A leitura de números deve parar quando o usuário digitar 0.
Ao final, o programa deve exibir a quantidade total de números que satisfazem
a condição.
*/

#include <stdio.h>

int main() {
    int numero=0, total=0;
    do{
        printf("Entre com um numero: ");
        scanf("%d", &numero);
        if (numero>100 && numero<200){
            total++;
        }
    }while(numero!=0);
    printf("Total: %d\n", total);

    return 0;
}
