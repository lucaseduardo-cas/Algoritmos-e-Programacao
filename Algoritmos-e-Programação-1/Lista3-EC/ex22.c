/*
22 - Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita
informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg
por ml, e que cada ml corresponde a 20 gotas.
    ● Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 1000
    mg; com peso abaixo de 60 quilos devem tomar 875 mg.
    ● Para crianças e adolescentes abaixo de 12 anos a dosagem e calculada pelo peso corpóreo conforme a tabela a
    seguir:
                     Peso                  dosagem
                 5   kg a 9 kg              125 mg
                 9.1 kg a 16 kg             250 mg
                16.1 kg a 24 kg             375 mg
                24.1 kg a 30 kg             500 mg
                acima de 30 kg              750 mg
*/

#include <stdio.h>

int main() {
    float peso;
    int idade, doseMG, gotasMedicamento;

    printf("============== CALCULADORA DE DOSAGEM DE REMÉDIO ==============\n\n");
    printf("Peso do paciente .......... : ");
    scanf("%f", &peso);
    printf("Idade do paciente ......... : ");
    scanf("%d", &idade);

    if (idade >= 12) {
        if (peso >= 60.0) {
            doseMG = 1000.0;
        } else {
            doseMG = 875.0;
        }
    } else {
        if (peso >= 5.0 && peso <= 9.0) {
            doseMG = 125.0;
        } else
        if (peso >= 9.1 && peso <= 16.0) {
            doseMG = 250.0;
        } else
        if (peso >= 16.1 && peso <= 24.0) {
            doseMG = 375.0;
        } else
        if (peso >= 24.1 && peso <= 30.0) {
            doseMG = 375.0;
        } else {
            doseMG = 750.0;
        }
    }

    gotasMedicamento = (doseMG / 500.0) * 20;

    printf("\nQuantidade de gotas do mediamento que o paciente deve tomar: %d gotas\n\n", gotasMedicamento);

    return 0;
}