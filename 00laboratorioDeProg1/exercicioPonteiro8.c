#include <stdio.h>

int main () {
    float array[10], *ponteiroArray;
    int cont;

    ponteiroArray = &array[0];

    for (cont = 0; cont < 10; cont++) 
    {
        printf("%p ", ponteiroArray);
        ponteiroArray++;
    }

    printf("\n");
    
    for (cont = 0; cont < 10; cont++) 
    {
        printf("%p ", &array[cont]);
        ponteiroArray++;
    }
    
    printf("\n");
    
    for (cont = 0; cont < 10; cont++) 
    {
        printf("%.2f ", *ponteiroArray);
        ponteiroArray++;
    }

    printf("\n");
    printf("%p ", &array);
}