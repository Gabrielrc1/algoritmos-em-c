#include <stdio.h>

void soma(int *ptrA, int vlrB);

int main () {
    int valorA, valorB;

    printf("Digite o primeiro valor: ");
    scanf("%i", &valorA);
    printf("Digite o segundo valor: ");
    scanf("%i", &valorB);

    soma(&valorA, valorB);

    printf("Valor de A: %i", valorA);
    printf("\nValor de B: %i", valorB);
}

void soma (int *ptrA, int vlrB) {
    *ptrA = *ptrA + vlrB;
}