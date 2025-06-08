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

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int tipo_ocorrencia, qtd_ocorrencia = 0, qtd_tipo_briga = 0;
    int direcao_perigosa = 0, barulho = 0, bebedeira = 0, briga = 0;
    int zoiudo = 0, ze_pequi = 0, jeca = 0;
    float percent_dir_perigosa;

    while (1) {
        printf("Selecione o tipo de ocorr�ncia: (0 p/ finalizar)\n");
        printf("    [1] Dire��o Perigosa\n");
        printf("    [2] Barulho\n");
        printf("    [3] Bebedeira\n");
        printf("    [4] Briga\nOp��o: ");
        scanf("%d", &tipo_ocorrencia);

        if (tipo_ocorrencia == 0) {
            printf("    Opera��o finalizada!\n\n");
            break;
        }

        if (tipo_ocorrencia < 1 || tipo_ocorrencia > 4) {
            printf("    Op��o inv�lida!\n\n");
            continue;
        }

        // Atualiza as contagens dos tipos de ocorr�ncia
        if (tipo_ocorrencia == 1) direcao_perigosa++;
        else if (tipo_ocorrencia == 2) barulho++;
        else if (tipo_ocorrencia == 3) bebedeira++;
        else if (tipo_ocorrencia == 4) briga++;

        qtd_ocorrencia++;

        // Distribui as ocorr�ncias entre os policiais
        if (tipo_ocorrencia == 4) {
            zoiudo++; // Ocorr�ncias de briga sempre para Zoiudo
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
        printf("\nResumo das ocorr�ncias:\n");
        printf("Policial Zoiudo: %d ocorr�ncias\n", zoiudo);
        printf("Policial Z� Pequi: %d ocorr�ncias\n", ze_pequi);
        printf("Policial Jeca: %d ocorr�ncias\n", jeca);
        printf("Ocorr�ncias do tipo Briga: %d\n", qtd_tipo_briga);
        printf("Percentual de Dire��o Perigosa: %.2f%%\n\n", percent_dir_perigosa);
    }

    system("Pause");
    return 0;
}

