/*
2.  Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de 
testes. A prova consta de 10 questões, cada uma com cinco alternativas identificadas
por A, B, C, D e E. Para isso são dados:

o cartão gabarito;
o número de alunos da turma;
o cartão de respostas para cada aluno, contendo o seu número e suas respostas.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> // Inclui a função tolower

// Função para imprimir a questão com base no número
void imprimirQuestao(int numero) {
    printf("Questão %d - ", numero);
    switch (numero) {
        case 1:
            printf("Qual é a capital do Brasil?\n");
            printf("    A) Brasília\n");
            printf("    B) Goiânia\n");
            printf("    C) Rio de Janeiro\n");
            printf("    D) São Paulo\n");
            printf("    E) Salvador\n");
            printf("Resposta: ");
            break;
        case 2:
            printf("Qual é o maior planeta do Sistema Solar?\n");
            printf("    A) Marte\n");
            printf("    B) Júpiter\n");
            printf("    C) Netuno\n");
            printf("    D) Saturno\n");
            printf("    E) Vênus\n");
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
            printf("Quantos lados tem um hexágono?\n");
            printf("    A) 8\n");
            printf("    B) 4\n");
            printf("    C) 5\n");
            printf("    D) 6\n");
            printf("    E) 7\n");
            printf("Resposta: ");
            break;
        case 5:
            printf("Em qual ano ocorreu a Revolução Russa?\n");
            printf("    A) 1920\n");
            printf("    B) 1910\n");
            printf("    C) 1913\n");
            printf("    D) 1922\n");
            printf("    E) 1914\n");
            printf("Resposta: ");
            break;
        case 6:
            printf("Qual a fórmula química da água?\n");
            printf("    A) HE\n");
            printf("    B) H2O\n");
            printf("    C) O3\n");
            printf("    D) O2\n");
            printf("    E) H3O\n");
            printf("Resposta: ");
            break;
        case 7:
            printf("Qual é o idioma oficial do Egito?\n");
            printf("    A) Árabe\n");
            printf("    B) Inglês\n");
            printf("    C) Francês\n");
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
            printf("Qual é o metal líquido à temperatura ambiente?\n");
            printf("    A) Mercúrio\n");
            printf("    B) Chumbo\n");
            printf("    C) Ferro\n");
            printf("    D) Ouro\n");
            printf("    E) Prata\n");
            printf("Resposta: ");
            break;
        case 10:
            printf("Quantos metros tem um quilômetro?\n");
            printf("    A) 100\n");
            printf("    B) 1.000\n");
            printf("    C) 10.000\n");
            printf("    D) 100.000\n");
            printf("    E) 1.000.000\n");
            printf("Resposta: ");
            break;
        default:
            printf("Questão inválida!\n");
            break;
    }
}

// Função para confirmar a resposta do usuário
int confirmarResposta(int numeroQuestao, char alternativa) {
    char confirmacao;

    while (1) {
        system("cls"); // Limpa a tela
        imprimirQuestao(numeroQuestao); // Reimprime a questão com alternativas
        printf("%c. Deseja confirmar? (s/n): ", toupper(alternativa));
        scanf(" %c", &confirmacao);
        getchar(); // Limpa o buffer do teclado

        // Processa a confirmação
        if (tolower(confirmacao) == 's') {
            return 1; // Resposta confirmada
        } else if (tolower(confirmacao) == 'n') {
            printf("Resposta descartada. Digite novamente.\n");
            return 0; // Resposta não confirmada
        } else {
            printf("Opção inválida! Tente novamente.\n");
            getchar(); // Aguarda antes de reimprimir
        }
    }
    system("cls");
}

// Função para calcular os acertos e imprimir as respostas
void imprimirResultados(char respostasAluno[], char gabarito[]) {
    system("cls");
    printf("\nRespostas registradas:\n");
    for (int i = 0; i < 10; i++) {
        char resultado = (respostasAluno[i] == gabarito[i]) ? 'V' : 'X';
        printf("Questão %2d: %2c %c\n", i + 1, respostasAluno[i], resultado);
    }
}

// Função para calcular os acertos
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
    char respostas[10]; // Para armazenar as respostas do usuário
    char entrada[10];   // Buffer temporário para leitura da entrada
    int acertos;
    int i;

    // Entrada das respostas do usuário
    for (i = 0; i < 10; i++) {
        while (1) {
            system("cls");
            imprimirQuestao(i + 1); // Chama a função para imprimir a questão atual
            fgets(entrada, sizeof(entrada), stdin); // Lê a entrada como string

            // Verifica se a entrada tem apenas um caractere válido
            if (strlen(entrada) == 2 && 
                (entrada[0] == 'a' || entrada[0] == 'b' || entrada[0] == 'c' || 
                 entrada[0] == 'd' || entrada[0] == 'e' || 
                 entrada[0] == 'A' || entrada[0] == 'B' || entrada[0] == 'C' || 
                 entrada[0] == 'D' || entrada[0] == 'E')) {
                
                // Confirma a resposta
                if (confirmarResposta(i + 1, entrada[0])) {
                    respostas[i] = toupper(entrada[0]); // Armazena a resposta em maiúscula
                    break;
                }
            } else {
                printf("Entrada inválida! Digite apenas as letras A, B, C, D ou E.\n");
                getchar(); // Aguarda antes de reimprimir
            }
        }
    }

    system("cls"); // Exibe as respostas finais
    imprimirResultados(respostas, gabarito); // Chama a função para imprimir os resultados
    acertos = calcularAcertos(respostas, gabarito);
    printf("\nAcertos %d/%d questões.\n", acertos, i);

    printf("\n\n\n");
    return 0;
}
