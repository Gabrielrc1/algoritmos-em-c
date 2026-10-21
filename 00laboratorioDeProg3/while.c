#include <stdio.h>

int main(){
    int contador, numero;

    contador = 0;

    while (contador <= 4)
    {
        do
        {
            printf("Digite o %i número: ", contador);
            scanf("%i", &numero);
        } while (numero < 100);
        contador = contador + 1;
    }
    return 0;
}