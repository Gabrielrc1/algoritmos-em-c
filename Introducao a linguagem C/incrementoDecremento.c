#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, y;
    x = 35;
    y = x++; // Sinal de incrento = ++ e Decremento = --
    printf("Valor Y: %d\tValor X: %d", y, x);
    y = ++x; // Sinal de incrento = ++ e Decremento = --
    printf("\nValor Y: %d\tValor X: %d", y, x);
    y--;
    printf("\nValor Y: %d\tValor X: %d", y, x);
}
