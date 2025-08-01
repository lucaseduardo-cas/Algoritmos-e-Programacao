#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(void) {
    setlocale(LC_ALL, "portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    fgets(senha_usr, 50, stdin);
    senha_usr[strcspn(senha_usr, "\n")] = '\0'; // Remove o '\n' do final da entrada

    ok = strcmp(hardText, senha_usr);

    if (ok == 0) {
        printf("Textos iguais.\n");
    } else {
        printf("Textos diferentes.\n");
    }

    return 0;
}
