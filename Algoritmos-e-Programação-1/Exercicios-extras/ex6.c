/*
6.	Chico		tem		1,70m		e		cresce		2		centímetros		por		ano,	enquanto	Juca	tem	
1,10m	e	cresce	3	centímetros	por	ano.	 	Construir	 	um	 	programa	em	C	que		
calcule		e		imprima		quantos	anos		serão		necessários			para		que		Juca		seja		
maior		que	Chico	(Utilize	a	estrutura	while).		
*/

#include <stdio.h>

int main(void) {
    float chico=1.70;
    float juca=1.10;
    int anos=0;

    while(chico > juca) {
        chico += 0.02;
        juca += 0.03;
        anos++;
    }
    printf("\nJuca levará %d anos para ser maior que Chico\n\n", anos);
    return 0;
}