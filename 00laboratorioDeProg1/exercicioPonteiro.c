#include <stdio.h>

int main() {
    int inteiro, *ptrInteiro;
    float real, *ptrReal;
    char letra, *ptrLetra;

    inteiro = 4;
    ptrInteiro = &inteiro;

    real = 1.5;
    ptrReal = &real;

    letra = 'G';
    ptrLetra = &letra;

    printf("Valor inteiro: %i - Valor real: %.2f - Valor letra: %c", inteiro, real, letra);
    printf("\nEndereco inteiro: %p - Endereco real: %p - Endereco letra: %p", ptrInteiro, ptrReal, ptrLetra);
    
    *ptrInteiro = 10;
    *ptrReal = 30.5;
    *ptrLetra = 'K';

    printf("\nValor inteiro: %i - Valor real: %.2f - Valor letra: %c", inteiro, real, letra);
    printf("\nValor inteiro: %i - Valor real: %.2f - Valor letra: %c", *ptrInteiro, *ptrReal, *ptrLetra);
}