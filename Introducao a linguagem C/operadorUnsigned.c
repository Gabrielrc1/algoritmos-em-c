#include <stdio.h>
#include <stdlib.h>

int main () {
    /*
        O operador unsigned serve para trabalhar com números independentes do seu sinal numérico
        para declarar: unsigned int valor
        Para usar: %u a %d para int nesse caso
        Isso deixa a parte dos números negativos livre para poder armazenar mais números
        2, 1, 0, -1, -2 -- Ao trabalhar com unsigned ignoramos a parte negativa ou melhor o sinal dos números sobrando mais memória para guardar os números puros. -- Isso pode resolver o problema do estouro de memória.
    */
   unsigned int valor = 10;
   int comEstouro;
   unsigned int semEstouro;
   
   comEstouro = 2147483647 + 1;
   semEstouro = 2147483647 + 1;

   printf("%u\n", valor);

   printf("%d\n", comEstouro);
   
   printf("%u", semEstouro);

}