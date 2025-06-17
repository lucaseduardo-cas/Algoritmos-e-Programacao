#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int ant2=0, ant1=1, atual=0, contador=1;
    
    do {
    ant2 = ant1;
    ant1 = atual;
    atual = ant2 + ant1;
		printf("%d, ", atual);
    contador++;
	}
    while (contador <= 30); 
    

    system("Pause");
    return 0;
}

