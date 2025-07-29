#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

// Concatenação  de strings
int main(void) {
    setlocale(LC_ALL, "portuguese");

    char s1[N] = {"Lógica de "};
    char s2[N] = {"Programação!"};
    
    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);
    
    // Somando conteúdo de s2 + conteúdo de s1 e imprimindo s1
    strcat(s1, s2);
    printf("\nDepois do strcat:\n");
    puts(s1);
    return 0;
}