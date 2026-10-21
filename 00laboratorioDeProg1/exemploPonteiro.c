#include <stdio.h>

int main () {
    int n1, n2, *ptrN1, *ptrN2;
    
    n1 = 2;
    n2 = 4;
    ptrN1 = &n1;
    ptrN2 = &n2;

    *ptrN1 = *ptrN2;

    printf("%i = %i", n1, n2);
    printf("\n%i = %i", *ptrN1, *ptrN2);

}