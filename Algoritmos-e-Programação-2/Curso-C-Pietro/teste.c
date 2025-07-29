#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z', '\0'};
    int z = 0;
    
    for(int i = 0; i < 26; i++) {
        printf("%c", alfabeto[i]);
        if (alfabeto[i] != 'z') {
            printf("; ");
        }
    }
    
    printf("\n\n");
    return 0;
}