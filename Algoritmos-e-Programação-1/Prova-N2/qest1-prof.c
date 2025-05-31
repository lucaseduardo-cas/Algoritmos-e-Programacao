#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int nrTitulo=0, c1=0, c2=0, c3=0, c4=0, voto, invalidos=0, aux=0, eleito=0;
    do{
        printf("Numero do Titulo: ");
        scanf("%d",&nrTitulo);
        if (nrTitulo != -1){
            printf("Voto: ");
            scanf("%d", &voto);
            if(voto ==  500){
                c1++;
            }else if(voto == 600){
                c2++;
            }else if (voto == 700){
                c3++;
            }else if(voto == 800){
                c4++;
            }else{
                invalidos++;
            }
        }
    }while(nrTitulo != -1);

    if (c1>c2 && c1>c3 && c1>c4){
        printf("Candidato 500 eleito para prefeito\n");
        if(c2>c3 && c2>c4){
            printf("Candidato 600 eleito para vice-prefeito\n");
        }
        if(c3>c2 && c3>c4){
            printf("Candidato 700 eleito para vice-prefeito\n");
        }
        if(c4>c2 && c4>c3){
            printf("Candidato 800 eleito para vice-prefeito\n");
        }
    }

    return 0;
}