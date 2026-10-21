#include <stdio.h>
#include <stdlib.h>

int main () {
    int contador;
    // char letra;

    printf("Imprimindo o alfabeto\n");
    
    for (contador = ((int) 'a'); contador <= ((int) 'z'); contador++) {
        printf("%c ", contador);
        // letra = ((char) contador);
    }
}
