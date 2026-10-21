#include <stdio.h>

int main(){
    int contador, numero, maior_numero, menor_numero;

    maior_numero = 0;
    menor_numero = 0;

    for (contador = 1; contador <= 16; contador++) {
        printf("Informe um numero: ");
        scanf("%i", &numero);

        if (numero > maior_numero) {
            maior_numero = numero;    
        }
        if (menor_numero == 0 || menor_numero > numero){
            menor_numero = numero;
        }
    }

    printf("Maior numero digitado: %i\nMenor numero digitado: %i", maior_numero, menor_numero);

    return 0;
}