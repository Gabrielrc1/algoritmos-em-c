#include <stdio.h>

void verificaValor(int *ptr1, int *ptr2);

int main () {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    verificaValor(&valor1, &valor2);

    printf("\nMaior valor: %i", valor1);
    printf("\nMenor valor: %i", valor2);
}

void verificaValor(int *ptr1, int *ptr2) {
    int auxiliar;

    if (*ptr1 < *ptr2) 
    {
        auxiliar = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = auxiliar;
    }
}