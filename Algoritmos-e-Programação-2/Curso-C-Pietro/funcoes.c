#include <stdio.h>
#define MAX 5

const int n = 5;

void helloWorld (){
    printf("Hello wordl!\n");
}

void calcularSoma () {
    int x = 5;
    int y = 10;
    int soma = x + y;
    printf("A soma de x + y = %d\n", soma);
}

// Argumento passado por parâmetro
void nomeFuncao(char nome[]) {
    printf("Olá, %s\n", nome);
}

// Parâmetros multivalorados
void parametrosMultivalorados(char nome[], int idade) {
    printf("Olá, %s! Você tem %d anos.\n", nome, idade);
}

// Parâmetros de função
void calcularSomaP(int x, int y) {
    int soma = x + y;
    printf("A soma de %d + %d é: %d\n", x, y, soma);
}

// Vetor como parâmetro de função
void passarVetores (int numeros[MAX]) {
    printf("Números: ");
    for (int i = 0; i < n; i++) {
        if (i < 4) {
            printf("%d, ", numeros[i]);
        } else {
            printf("%d", numeros[i]);
        }
    }
    printf("\n");
}

// Valores de retorno
int valoresRetorno (int x) {
    return 5 + x;
}

int valoresRetorno2 (int x, int y) {
    return x + y;
}

// Armazenando resultados em uma variável
int armazenandoResultadosVariavel (int x, int y) {
    return x + y;
}

int multiplosVetores (int x, int y) {
    int variosVetores[5];
    return x + y;
}

// Função para converter graus Fahrenheit para Celsius
float paraCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main (void) {
    int numeros[MAX] = {10, 20, 30, 40, 50};
    int resultado = armazenandoResultadosVariavel(5, 3);
    int variosVetores[5];
    float valorF = 98.8;
    float resultadoF = paraCelsius(valorF);

    helloWorld(); // helloWorld
    calcularSoma(); // calcularSoma
    nomeFuncao("Lucas Eduardo Cassiano Silva"); // nomeFuncao
    parametrosMultivalorados("Lucas Eduardo", 26); // parametrosMultivalorados
    calcularSomaP(8, 3); // calcularSomaP
    passarVetores (numeros); // passarMatrizes
    printf("Resultado: %2d\n", valoresRetorno(3)); // valoresRetorno
    printf("Resultado: %2d\n", valoresRetorno2(7, 5)); // valoresRetorno2
    printf("Resultado: %d\n", resultado); // armazenandoResultadosVariavel

    variosVetores[0] = multiplosVetores(5, 2); // multiplosVetores
    variosVetores[1] = multiplosVetores(8, 3);
    variosVetores[2] = multiplosVetores(1, 8);
    variosVetores[3] = multiplosVetores(7, 9);
    variosVetores[4] = multiplosVetores(4, 2);
    printf("Resultado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", variosVetores[i]);
        if (i < 5-1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Fahrenheit: %.2f\n", valorF); // paraCelsius
    printf("Converter Fahrenheit para Celsius: %.2f\n", resultadoF);

    return 0;
}
