#include <stdio.h>

// Isso são protótipos das funções, usadas para colocar a função main acima das funções na escrita
int parOuImpar(int x);
void resposta(int y, int z);

int main () {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    resultado = parOuImpar(numero);
    resposta(numero, resultado);
}

int parOuImpar(int x) {
    int resposta = x % 2;
    return resposta;
}

void resposta (int y, int z) {
    if (z == 0)
    {
        printf("O numero %i e par", y);
    }
    else
    {
        printf("O numero %i e impar", y);
    }
}

