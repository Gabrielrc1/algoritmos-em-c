#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade;
    float peso, altura;

    printf("Digite sua idade, seu peso e sua altura\n");
    scanf("%d%f%f",&idade, &peso, &altura);
    printf("Idade: %d\tPeso: %.2f\tAltura: %.2f", idade, peso, altura);
}