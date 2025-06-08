#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    
    //           0  1  2  3  4  5  6  7  8   9
//    int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n[10];
    int i;

    for (i=0; i<10; i++) {
        printf("%2d° número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\n\n");

    printf("Imprimindo números:\n");
    for (i=0; i<5; i++) {
        printf("%d, ", n[i]);
    }
    for (i=9; i>4; i--) {
       if (i == 5) {
            printf("%d", n[i]);
            break;
        }
        printf("%d, ", n[i]);
    }

    printf("\n\n\n");
    return 0;
}