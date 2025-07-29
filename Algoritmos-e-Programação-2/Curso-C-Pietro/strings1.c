#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
    char s[10];
    int ch;

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s);
    while ((ch = getchar()) != '\n' && ch != EOF); // Limpar buffer do teclado. 'EOF' = End Of File: FIM DE ARQUIVO

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado:)\n");
    scanf("%10[^\n]s", s);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %s\n\n", s);
    return 0;
}