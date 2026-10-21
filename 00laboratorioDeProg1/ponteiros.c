#include <stdio.h>

int main () {
    int valor, *ponteiroValor;
    
    valor = 40;
    ponteiroValor = &valor;
    *ponteiroValor = 10;

    printf("Endereco: %i - Valor: %i\n", &valor, valor);
    printf("Endereco: %i - Valor: %i\n", &ponteiroValor, ponteiroValor);
    printf("Valor que o ponteiro aponta: %i", *ponteiroValor);
}