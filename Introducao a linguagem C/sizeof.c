#include <stdio.h>
#include <stdlib.h>

int main () {
    /*
        Descobrindo o tamanho em memória de cada tipo de dado usando o operador sizeof
        Usamos esse operador para descobrir quanto espaço uma váriavel ou tipo de dado ocupa na memória
        Usando para descobrir o tamanho de uma variável para var x usa-se -> sizeof x
        Para descobrir o tamanho de um tipo usa-se -> sizeof(int) ou qualquer outro tipo
    */
    int a;
    float b;
    char c;
    printf("int = %d\n", sizeof(int));
    printf("char = %d\n", sizeof(char));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n\n\n", sizeof(double));

    printf("int = %d\n", sizeof a);
    printf("char = %d\n", sizeof c);
    printf("float = %d\n", sizeof b);
}