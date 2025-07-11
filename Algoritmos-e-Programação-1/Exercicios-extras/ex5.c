/*
5. Faça	um	programa	em	C	que	exiba	na	tela	os	números	ímpares	entre	100	
e	300.	
*/

#include <stdio.h>

int main(void) {
    /*
    for (int i = 100; i <= 300; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    */
   
    for (int i = 101; i <= 299; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}