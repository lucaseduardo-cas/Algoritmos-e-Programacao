/*
8- Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se utilizar
18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule a sua
área (em m2) e a potência de iluminação que deverá ser utilizada.
*/

#include <stdio.h>

int main() {
    float largura, profundidade, area;

    printf("Digite a largura ... : ");
    scanf("%f", &largura);
    printf("Digite a profundidade: ");
    scanf("%f", &profundidade);

    area = (largura * profundidade);

    printf("\nÁrea do cômodo: ..................... %.2f m2\n", area);
    printf("Potênciade iluminação utilizada: .... %.2f w\n\n", area * 18);

    return 0;
}
