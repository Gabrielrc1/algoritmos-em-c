#include <stdio.h>
#include <stdlib.h>

// Trocando os valores das variáveis sem variável auxiliar

int main () {
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;

    printf("\nValor 1: %d\tValor 2: %d", valor1, valor2);
}