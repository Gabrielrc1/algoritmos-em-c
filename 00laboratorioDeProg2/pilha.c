#include <stdio.h>
#define TAMANHO 3

int pilha[TAMANHO], topo; // Variável global

void inicializa() { // Inicializa a pilha
    topo = -1;
}

int verificaCheia() { // Verifica se a pilha está cheia
    if (topo == TAMANHO - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int verificaVazia() { // Verifica se a pilha está vazia
   if (topo == -1) 
   {
        return 0;
   }
   else
   {
        return 1;
   } 
}

void empilha() { // Adiciona um elemento na pilha 
    int numero, pilhaCheia;
    
    pilhaCheia = verificaCheia();
    
    if (pilhaCheia == 1)
    {
        printf("\nPILHA CHEIA!!\n");
    }
    else
    {
        printf("Digite um numero: ");
        scanf("%i", &numero);
        topo++;
        pilha[topo] = numero;
    }
}

void desempilha() { // Remove um elemento da pilha
    int pilhaVazia;
    pilhaVazia = verificaVazia();

    if (pilhaVazia == 0)
    {
        printf("\nPILHA VAZIA\n");
    }
    else
    {
        topo--;
    }
}

void imprimir() { // Mostra a pilha
    int contador;
    
    printf("----- PILHA -----\n");
    for (contador = 0; contador <= topo; contador++)
    {
        printf("%i\n", pilha[contador]);
    }
    printf("-----------------\n");
}

int main () {
    inicializa();
    empilha();
    empilha();
    empilha();
    desempilha();
    desempilha();
    empilha();
    empilha();
}