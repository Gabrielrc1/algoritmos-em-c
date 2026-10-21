#include <stdio.h>

void troca(char *ptrA, char *ptrB);

int main() {
    int valorA, valorB;
    char letraA, letraB;

    valorA = 2;
    valorB = 3;
    letraA = 'A';
    letraB = 'B';

    printf("%c: %i - %c: %i",letraA, valorA, letraB, valorB);
    troca(&letraA, &letraB);
    printf("\n%c: %i - %c: %i", letraA, valorA, letraB, valorB);
}

void troca(char *ptrA, char *ptrB) {
    char auxiliar;
    auxiliar = *ptrA;
    *ptrA = *ptrB;
    *ptrB = auxiliar;
}

/*
void troca (int endA, int endB) {
    int auxiliar, *ptrA, *ptrB;
    
    ptrA = endA;
    ptrB = endB;

    auxiliar = *ptrA;
    *ptrA = *ptrB;
    *ptrB = auxiliar;
}
*/