#include <stdio.h>

void troca(int *ptrA, int *ptrB);

int main () {
    int valorA, valorB;
    
    valorA = 2;
    valorB = 4;
    
    printf("%i %i", valorA, valorB);
    troca(&valorA, &valorB);
    printf("\n%i %i", valorA, valorB);
}

void troca(int *ptrA, int *ptrB) {
    int temporario;
    temporario = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temporario;
}