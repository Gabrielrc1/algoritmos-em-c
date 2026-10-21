#include <stdio.h>
#include <stdlib.h>

int main () {
    // Isso é um comentário

    /*
        Este é um bloco de comentário
        Várias linhas podem ser comentadas
        Assim
        Assim
        asSim
        E por aí vai
        ..
        .
        ...
    */
    
    /*
        CARACTERES DE ESCAPE

        \n = pula linha
        \t = Tabulação, adiciona espaço
        \" ou \' = Adiciona as aspas
    */

    // A instrução de saída: printf(""); -> A função para mostrar coisas(processamento) ao usuário

    printf("\n\n\t\"Ola mundo\'\n");

    // Operações matemáticas
    printf("\n\t%d + %d = %d", 10, 15, 10 + 15); //Soma
    printf("\n\t%d - %d = %d", 10, 15, 10 - 15); //Subtração
    printf("\n\t%d * %d = %d", 10, 15, 10 * 15); //Multiplicação
    printf("\n\t%d / %d = %d", 10, 15, 10 / 15); //Divisão

    return 0;

}