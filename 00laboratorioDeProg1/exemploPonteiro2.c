#include <stdio.h>

int main () {
    int vetor[5], *ptr, cont;

    ptr = &vetor;

    for (cont = 0; cont < 5; cont++)
    {
        printf("%p ", ptr);
        ptr++;
    }
    
}