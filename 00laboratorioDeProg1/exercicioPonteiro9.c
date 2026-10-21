#include <stdio.h>

int main () {
    float matriz[3][3], *ponteiroMatriz;
    int contLinha, contColuna;

    ponteiroMatriz = &matriz[0][0];

    for (contLinha = 0; contLinha < 3; contLinha++) 
    {
        for (contColuna = 0; contColuna < 3; contColuna++) 
        {
            printf("%p ", ponteiroMatriz);
            ponteiroMatriz++;
        }
        printf("\n");
    }

    printf("\n");
    
    for (contLinha = 0; contLinha < 3; contLinha++) 
    {
        for (contColuna = 0; contColuna < 3; contColuna++) 
        {
            printf("%p ", &matriz[contLinha][contColuna]);
            ponteiroMatriz++;
        }
        printf("\n");
    }
}