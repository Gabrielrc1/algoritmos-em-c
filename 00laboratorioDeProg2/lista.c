#include <stdio.h>
#include <stdlib.h>

// typedef struct no {
//     int valor;
//     struct no *prox;
// } no;

typedef struct no No;

struct no {
    int valor;
    No *prox;
};  

typedef struct 
{
    No *inicio;
} lista;

int main () {
    No *no1, *no2;
    lista item_da_lista;

    no1 = malloc(sizeof(No));
    no2 = malloc(sizeof(No));

    no1->valor = 10;
}