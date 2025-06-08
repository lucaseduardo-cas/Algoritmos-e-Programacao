#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale (LC_ALL, "portuguese");
    system("cls");

    int mat [3][3] = {{1,2,3}, 
                      {4,5,6}, 
                      {7,8,9}};
    int i, j;

    printf("Imprimindo primeira linha:\n");
    for (i=0; i<3; i++) {
        printf("%d ", mat[0][i]);
    }

    printf("\n\nImprimindo a matriz toda:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    return 0;
}