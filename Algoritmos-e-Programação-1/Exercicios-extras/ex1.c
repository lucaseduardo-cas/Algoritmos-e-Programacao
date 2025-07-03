/*
1.	Faça	um	programa	em	C	que	mostre	a	 tabuada	do	número	5.	 (considerar	
tabuada	do		número	1	ao	10).	
*/

#include <stdio.h>

int main(void) {
    int i, j, x;
    
    for (i = 5; i <= 5; i++) {
        for (j = 0; j <= 10; j++) {
            x = i * j;
            printf("%2d  x %2d = %2d\n", i, j, x);
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}