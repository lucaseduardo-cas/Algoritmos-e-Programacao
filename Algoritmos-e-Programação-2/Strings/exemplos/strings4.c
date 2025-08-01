#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

// Concatenação  de strings
int main(void) {
    setlocale(LC_ALL, "portuguese");

    char s[N];
    int i;

    printf("Digite um texto:\n");
    // Lendo o texto e atriguindo a variável 's'
    fgets(s, 50, stdin); // stdin: indica que a leitura será feita da entrada padrão (teclado)
    
    // Verifica quantos caracteres o usuário digitou: 'strlen'
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
    
    return 0;
}