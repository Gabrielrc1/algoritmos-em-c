#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }
}