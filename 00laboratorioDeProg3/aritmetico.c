#include <stdio.h>

int main(){
    int a = 5, b = 3;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;
    a++;
    b--;

    printf("Soma: %i\nSubtracao: %i\nMultiplicacao: %i\nDivisao: %i\nResto da div: %i\n", soma, subtracao, multiplicacao, divisao, resto);
    printf("Incremento: %i\nDecremento: %i", a, b);
}