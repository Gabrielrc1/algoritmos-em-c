#include <stdio.h>
#include <stdlib.h>

int main () {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo (m ou f), idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("\n\nSEXO: %c\nIDADE: %d\nPESO: %.2f\nALTURA: %.2f", sexo, idade, peso, altura);
}