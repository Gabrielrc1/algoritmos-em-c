#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Resultado: %f", 10.5/3.2);
    // Convertendo float para int
    printf("\nResultado: %d", (int)(10.5/3.2));
    // int para float
    printf("\nResultado: %f", 10/(float)3);
    // Mostrando o resto da divisão
    printf("\nResultado: %d", 10 % 3);
}
