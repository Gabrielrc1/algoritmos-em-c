#include <stdio.h>
#include <stdlib.h>

int main () {
    
    /*
        O operador short é um tipo de variável com menor consumo de memória para int que pode armazenar um número muito grande, na casa dos milhões, o short armazena números menores para programas que não precisam de muito espaço ou que possuem espaço muito limitado.

        O maior número que esse operador pode armazenar é: 32.767
        Ao utilizar o operador unsigned junto ao short ele consegue armazenar até 65.535
    */

    short valor;

    valor = 100;

    printf("Tamanho do tipo short: %d\tValor: %d\tTamanho: %d\n\n", sizeof (short), valor, sizeof valor);
}