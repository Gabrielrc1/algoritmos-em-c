#include <stdio.h>

int main (){
    int variavel1, variavel2, *ptrVariavel1, *ptrVariavel2, *maior_endereco;

    variavel1 = 2;
    variavel2 = 4;
    ptrVariavel1 = &variavel1;
    ptrVariavel2 = &variavel2;

    maior_endereco = (ptrVariavel1 > ptrVariavel2) ? ptrVariavel1 : ptrVariavel2;

    printf("O maior endereco e: %p", maior_endereco);
    printf("\nEndereco da var1: %p - Endereco var2: %p", ptrVariavel1, ptrVariavel2);
}