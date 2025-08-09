/*
2.  Deseja-se publicar o n�mero de acertos de cada aluno em uma prova em forma de 
testes. A prova consta de 10 quest�es, cada uma com cinco alternativas identificadas
por A, B, C, D e E. Para isso s�o dados:

o cart�o gabarito;
o n�mero de alunos da turma;
o cart�o de respostas para cada aluno, contendo o seu n�mero e suas respostas.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> // Inclui a fun��o tolower

// Fun��o para imprimir a quest�o com base no n�mero
void imprimirQuestao(int numero) {
    printf("Quest�o %d - ", numero);
    switch (numero) {
        case 1:
            printf("Qual � a capital do Brasil?\n");
            printf("    A) Bras�lia\n");
            printf("    B) Goi�nia\n");
            printf("    C) Rio de Janeiro\n");
            printf("    D) S�o Paulo\n");
            printf("    E) Salvador\n");
            printf("Resposta: ");
            break;
        case 2:
            printf("Qual � o maior planeta do Sistema Solar?\n");
            printf("    A) Marte\n");
            printf("    B) J�piter\n");
            printf("    C) Netuno\n");
            printf("    D) Saturno\n");
            printf("    E) V�nus\n");
            printf("Resposta: ");
            break;
        case 3:
            printf("Quem escreveu 'Dom Quixote'?\n");
            printf("    A) Machado de Assis\n");
            printf("    B) Miguel de Cervantes\n");
            printf("    C) Monteiro Lobato\n");
            printf("    D) Carlos Drummond de Andrade\n");
            printf("    E) Clarice Lispector\n");
            printf("Resposta: ");
            break;
        case 4:
            printf("Quantos lados tem um hex�gono?\n");
            printf("    A) 8\n");
            printf("    B) 4\n");
            printf("    C) 5\n");
            printf("    D) 6\n");
            printf("    E) 7\n");
            printf("Resposta: ");
            break;
        case 5:
            printf("Em qual ano ocorreu a Revolu��o Russa?\n");
            printf("    A) 1920\n");
            printf("    B) 1910\n");
            printf("    C) 1913\n");
            printf("    D) 1922\n");
            printf("    E) 1914\n");
            printf("Resposta: ");
            break;
        case 6:
            printf("Qual a f�rmula qu�mica da �gua?\n");
            printf("    A) HE\n");
            printf("    B) H2O\n");
            printf("    C) O3\n");
            printf("    D) O2\n");
            printf("    E) H3O\n");
            printf("Resposta: ");
            break;
        case 7:
            printf("Qual � o idioma oficial do Egito?\n");
            printf("    A) �rabe\n");
            printf("    B) Ingl�s\n");
            printf("    C) Franc�s\n");
            printf("    D) Espanhol\n");
            printf("    E) Grego\n");
            printf("Resposta: ");
            break;
        case 8:
            printf("Quem pintou a 'Mona Lisa'?\n");
            printf("    A) Michelangelo\n");
            printf("    B) Leonardo da Vinci\n");
            printf("    C) Vincent van Gogh\n");
            printf("    D) Pablo Picasso\n");
            printf("    E) Claude Monet\n");
            printf("Resposta: ");
            break;
        case 9:
            printf("Qual � o metal l�quido � temperatura ambiente?\n");
            printf("    A) Merc�rio\n");
            printf("    B) Chumbo\n");
            printf("    C) Ferro\n");
            printf("    D) Ouro\n");
            printf("    E) Prata\n");
            printf("Resposta: ");
            break;
        case 10:
            printf("Quantos metros tem um quil�metro?\n");
            printf("    A) 100\n");
            printf("    B) 1.000\n");
            printf("    C) 10.000\n");
            printf("    D) 100.000\n");
            printf("    E) 1.000.000\n");
            printf("Resposta: ");
            break;
        default:
            printf("Quest�o inv�lida!\n");
            break;
    }
}

// Fun��o para confirmar a resposta do usu�rio
int confirmarResposta(int numeroQuestao, char alternativa) {
    char confirmacao;

    while (1) {
        system("cls"); // Limpa a tela
        imprimirQuestao(numeroQuestao); // Reimprime a quest�o com alternativas
        printf("%c. Deseja confirmar? (s/n): ", toupper(alternativa));
        scanf(" %c", &confirmacao);
        getchar(); // Limpa o buffer do teclado

        // Processa a confirma��o
        if (tolower(confirmacao) == 's') {
            return 1; // Resposta confirmada
        } else if (tolower(confirmacao) == 'n') {
            printf("Resposta descartada. Digite novamente.\n");
            return 0; // Resposta n�o confirmada
        } else {
            printf("Op��o inv�lida! Tente novamente.\n");
            getchar(); // Aguarda antes de reimprimir
        }
    }
    system("cls");
}

// Fun��o para calcular os acertos e imprimir as respostas
void imprimirResultados(char respostasAluno[], char gabarito[]) {
    system("cls");
    printf("\nRespostas registradas:\n");
    for (int i = 0; i < 10; i++) {
        char resultado = (respostasAluno[i] == gabarito[i]) ? 'V' : 'X';
        printf("Quest�o %2d: %2c %c\n", i + 1, respostasAluno[i], resultado);
    }
}

// Fun��o para calcular os acertos
int calcularAcertos(char respostasAluno[], char gabarito[]) {
    int acertos = 0;
    for (int i = 0; i < 10; i++) {
        if (respostasAluno[i] == gabarito[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main(void) {
    setlocale(LC_ALL, "portuguese");
    system("cls");
                       // 1    2    3    4    5    6    7    8    9   10
    char gabarito[10] = {'A', 'B', 'B', 'D', 'E', 'B', 'A', 'B', 'A', 'B'};  // Exemplo de gabarito
    char respostas[10]; // Para armazenar as respostas do usu�rio
    char entrada[10];   // Buffer tempor�rio para leitura da entrada
    int acertos;
    int i;

    // Entrada das respostas do usu�rio
    for (i = 0; i < 10; i++) {
        while (1) {
            system("cls");
            imprimirQuestao(i + 1); // Chama a fun��o para imprimir a quest�o atual
            fgets(entrada, sizeof(entrada), stdin); // L� a entrada como string

            // Verifica se a entrada tem apenas um caractere v�lido
            if (strlen(entrada) == 2 && 
                (entrada[0] == 'a' || entrada[0] == 'b' || entrada[0] == 'c' || 
                 entrada[0] == 'd' || entrada[0] == 'e' || 
                 entrada[0] == 'A' || entrada[0] == 'B' || entrada[0] == 'C' || 
                 entrada[0] == 'D' || entrada[0] == 'E')) {
                
                // Confirma a resposta
                if (confirmarResposta(i + 1, entrada[0])) {
                    respostas[i] = toupper(entrada[0]); // Armazena a resposta em mai�scula
                    break;
                }
            } else {
                printf("Entrada inv�lida! Digite apenas as letras A, B, C, D ou E.\n");
                getchar(); // Aguarda antes de reimprimir
            }
        }
    }

    system("cls"); // Exibe as respostas finais
    imprimirResultados(respostas, gabarito); // Chama a fun��o para imprimir os resultados
    acertos = calcularAcertos(respostas, gabarito);
    printf("\nAcertos %d/%d quest�es.\n", acertos, i);

    printf("\n\n\n");
    return 0;
}
