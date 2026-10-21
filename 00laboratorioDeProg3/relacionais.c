#include <stdio.h>

int main() {
    int a = 5, b = 5, resultado;

    resultado = a == b;
    printf("%i e %i sao  iguais: %d\n", a, b, resultado);

    resultado = a != b;
    printf("%i e %i sao  diferentes: %d\n", a, b, resultado);
    
    resultado = a < b;
    printf("%i e menor que %i: %d\n", a, b, resultado);
    
    resultado = a > b;
    printf("%i e maior que %i: %d\n", a, b, resultado);
    
    resultado = a <= b;
    printf("%i e menor ou igual a %i: %d\n", a, b, resultado);
    
    resultado = a >= b;
    printf("%i e maior ou igual a %i: %d\n", a, b, resultado);
}