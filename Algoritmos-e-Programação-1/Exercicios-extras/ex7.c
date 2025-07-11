/*
7. Dado	 	 um	 	 país	 	A,	 	 com	 	 5000000	 	 de	 	 habitantes	 	e	 	 uma	 taxa	 	 de		
natalidade		de		3%		ao		ano,		e		um		país		B		com	7000000		de		habitantes		
e		uma		taxa		de		natalidade		de		2%	ao	ano,	escrever	um	programa	em	C	
que	seja	capaz	de	calcular		e		mostrar		o		tempo		necessário		para		que		a		
população	 	do	país	 	A	 	ultrapasse	 	a	 	população	 	do	 	país	 	B.	 	(Ualize	 	a	
estrutura	while).		
*/

#include <stdio.h>

int main(void) {
    int paisA=5000000, paisB=7000000;
    int anos=0;

    while(paisA <= paisB) {
        paisA += (paisA * 0.03);
        paisB += (paisB * 0.02);
        anos++;
    }
    printf("\nPopulação do país A superaria população do país B em %d anos\n\n", anos);
    return 0;
}