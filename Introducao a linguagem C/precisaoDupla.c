#include <stdio.h>
#include <stdlib.h>

int main () {
    double x;
    long double y; // <- Para lidar com esse tipo usar __mingw_printf

    x = 3.14568345;
    y = 3.14568345;

    printf("%d\n", sizeof x);
    /*
        Para o tipo double podemos usar para imprimir o f ou lf(long float). Pois double é um float maior
    */
    printf("Valor de x: %f ou %lf\n", x, x);

    printf("%d\n", sizeof y);
    /*
        printf("Valor de y: %lf", y); <- Essa função para imprimir long double não funciona por padrão do computador que não imprime números muito longos
        
        Para isso usa-se __mingw_printf(""): Função diretamente do compilador ao invés de usar do sistema operacional

        Le -> máscara usada para imprimir números longos com notação exponencial ou científica
    */
    __mingw_printf("Valor de y: %Le\n", y);
}