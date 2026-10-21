#include <stdio.h>

int main () {
    int conteudo1, conteudo2, *ptrConteudo1, *ptrConteudo2, maior_endereco;

    printf("Digite um numero: ");
    scanf("%i", &conteudo1);
    printf("Digite um numero: ");
    scanf("%i", &conteudo2);

    ptrConteudo1 = &conteudo1;
    ptrConteudo2 = &conteudo2;

    maior_endereco = (ptrConteudo1 > ptrConteudo2) ? *ptrConteudo1 : *ptrConteudo2;

    printf("O conteudo do maior endereco e: %i", maior_endereco);
}