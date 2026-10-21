#include <stdio.h>

// Função soma em c
int soma (int numeroA, int numeroB) {
    int resultado;
    resultado = numeroA + numeroB;
    return resultado;
}

// Função sem retorno ou procedimento
void olaMundo () {
    printf("Isso e uma funçao sem retorno, ou tambem chamada de procedimento");
}

// Função principal
int main () {
    int numeroA, numeroB, resultado;

    numeroA = 2;
    numeroB = 2;
    resultado = soma(numeroA, numeroB);
    
    printf("A soma dos numeros e: %i\n", resultado);
    olaMundo();
    return 0;
}