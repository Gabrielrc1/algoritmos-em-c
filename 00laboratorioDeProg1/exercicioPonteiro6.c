#include <stdio.h>

int somaDoDobro(int *ptrA, int *ptrB);

int main () {
    int valorA, valorB, soma;

    printf("Digite o primeiro numero: ");
    scanf("%i", &valorA);
    printf("Digite o segundo numero: ");
    scanf("%i", &valorB);
    
    soma = somaDoDobro(&valorA, &valorB);

    printf("O resultado da soma de %i e %i e: %i", valorA, valorB, soma);
}

int somaDoDobro(int *ptrA, int *ptrB) {
    *ptrA = *ptrA * 2;
    *ptrB = *ptrB * 2;
    return *ptrA + *ptrB;
}