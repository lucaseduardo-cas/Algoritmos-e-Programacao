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
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int tipo_ocorrencia, qtd_ocorrencia = 0, qtd_tipo_briga = 0;
    int direcao_perigosa = 0, barulho = 0, bebedeira = 0, briga = 0;
    int zoiudo = 0, ze_pequi = 0, jeca = 0;
    float percent_dir_perigosa;

    while (1) {
        printf("Selecione o tipo de ocorrência: (0 p/ finalizar)\n");
        printf("    [1] Direção Perigosa\n");
        printf("    [2] Barulho\n");
        printf("    [3] Bebedeira\n");
        printf("    [4] Briga\nOpção: ");
        scanf("%d", &tipo_ocorrencia);

        if (tipo_ocorrencia == 0) {
            printf("    Operação finalizada!\n\n");
            break;
        }

        if (tipo_ocorrencia < 1 || tipo_ocorrencia > 4) {
            printf("    Opção inválida!\n\n");
            continue;
        }

        // Atualiza as contagens dos tipos de ocorrência
        if (tipo_ocorrencia == 1) direcao_perigosa++;
        else if (tipo_ocorrencia == 2) barulho++;
        else if (tipo_ocorrencia == 3) bebedeira++;
        else if (tipo_ocorrencia == 4) briga++;

        qtd_ocorrencia++;

        // Distribui as ocorrências entre os policiais
        if (tipo_ocorrencia == 4) {
            zoiudo++; // Ocorrências de briga sempre para Zoiudo
            qtd_tipo_briga++;
        } else {
            if (zoiudo <= ze_pequi && zoiudo <= jeca) {
                zoiudo++;
            } else if (ze_pequi <= zoiudo && ze_pequi <= jeca) {
                ze_pequi++;
            } else {
                jeca++;
            }
        }

        percent_dir_perigosa = (direcao_perigosa * 100.0) / qtd_ocorrencia;

        // Exibe o resumo
        printf("\nResumo das ocorrências:\n");
        printf("Policial Zoiudo: %d ocorrências\n", zoiudo);
        printf("Policial Zé Pequi: %d ocorrências\n", ze_pequi);
        printf("Policial Jeca: %d ocorrências\n", jeca);
        printf("Ocorrências do tipo Briga: %d\n", qtd_tipo_briga);
        printf("Percentual de Direção Perigosa: %.2f%%\n\n", percent_dir_perigosa);
    }

    system("Pause");
    return 0;
}

