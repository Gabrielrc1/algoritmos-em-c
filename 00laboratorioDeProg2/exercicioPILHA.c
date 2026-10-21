#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 4

// VARIÁVEIS GLOBAIS
int pilha[TAMANHO], saidaPilha[TAMANHO], topo, topoSaida;

// PROTÓTIPOS DAS FUNÇÕES
void inicializa();
int verificaCheia();
int verificaVazia();
void empilha();
void desempilha();
void imprimir();
void inicializaSaida();
void saida();
void imprimirSaida();
void limpaSaida();


int main () {
    int condicao;
    char instrucao[100], opcao;

    inicializa();
    inicializaSaida();

    condicao = 0;
    strcpy(instrucao, "Digite uma opçao");
    
    printf("%s\n", instrucao);

    do
    {
        imprimir();
        imprimirSaida();
        printf("[1] para empilhar\n[0] para desempilhar\n[S] para sair\n\n:");
        scanf(" %c", &opcao);
        printf("\n");
    
        if (opcao == 'S' || opcao == 's')
        {
            condicao = 1;
            strcpy(instrucao, "Obrigado!!");
        }
        else if(opcao == '1')
        {
            if (verificaCheia() == 1)
            {
                strcpy(instrucao, "PILHA CHEIA");
            }
            else
            {
                empilha();
                strcpy(instrucao, "Empilhado com sucesso");
            }
        }
        else if(opcao == '0')
        {
            if (verificaVazia() == 0)
            {
                strcpy(instrucao, "PILHA VAZIA");
            }
            else
            {
                saida();
                desempilha();
                strcpy(instrucao, "Desempilhado com sucesso");
            }
        }
        else
        {
            strcpy(instrucao, "Digite uma opçao valida");
        }

        system("cls");   
        printf("%s\n", instrucao);

    } while (condicao == 0);
    
    
    return 0;
}

// Estrutura da PILHA
void inicializa () {
    topo = -1;
}

int verificaCheia () {
    if (topo == TAMANHO - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int verificaVazia () {
    if (topo == -1) 
    {
        return 0;
    } 
    else 
    {
        return 1;
    }
}

void empilha () {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    topo++;
    pilha[topo] = numero;
}

void desempilha () {
    topo--;
}

void imprimir () {
    int contador;

    printf("\n-----PILHA-----\n");

    for (contador = 0; contador <= topo; contador++) {
        printf("%i\n", pilha[contador]);
    }
    
    printf("---------------\n");
}

// Fim da estrutura

void inicializaSaida(){
    topoSaida = -1;
}

void saida() {
    topoSaida++;
    saidaPilha[topoSaida] = pilha[topo];
}

void imprimirSaida () {
    int contador;

    printf("Saída: ");
    for (contador = 0; contador <= topoSaida; contador++) {
        printf("%i ", saidaPilha[contador]);
    }
    printf("\n");
}