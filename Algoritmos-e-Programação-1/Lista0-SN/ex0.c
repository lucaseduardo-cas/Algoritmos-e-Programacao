/*
Sequência de escape: O comando printf aceita um variedade de sub-
                     comandos precedidos pelo caracter “\”.

\n – pula para linha debaixo
\a – toca o beep padrão do SO
\t – tabulação horizontal
\v – tabulação vertical
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello world\n");
    printf("Pressione Enter para continuar...\n");
    getchar(); // Espera o usuário pressionar Enter

    printf("Hello world\a");
    printf("\nPressione Enter para continuar...\n");
    getchar();

    printf("Hello world\t");
    printf("Pressione Enter para continuar...\n");
    getchar();

    printf("Hello world\v");
    printf("Pressione Enter para continuar...\n");
    getchar();

    return 0;
}
