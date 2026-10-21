#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANHO_STRING 50
#define TAMANHO 3
 
char buffer[TAMANHO_STRING];

typedef struct 
{
    char nome[TAMANHO_STRING];
    char tipoMusical[TAMANHO_STRING];
    int integrantes;
    int posicaoRank;
} banda;

void removerQuebraLinha(char *ptrDoRegistroEmCadeia);
int escolhaOpcao();

int main() {
    banda bandaMusical[TAMANHO];
    int contador, opcao;

    for (contador = 0; contador < TAMANHO; contador++) {
        printf("TOP %i BANDAS\n", TAMANHO);
        printf("\nNome: ");
        fgets(bandaMusical[contador].nome, TAMANHO_STRING, stdin);
        removerQuebraLinha(bandaMusical[contador].nome);
        
        printf("Genero: ");
        fgets(bandaMusical[contador].tipoMusical, TAMANHO_STRING, stdin);
        removerQuebraLinha(bandaMusical[contador].tipoMusical);

        printf("Integrantes: ");
        fgets(buffer,TAMANHO_STRING,stdin);
        bandaMusical[contador].integrantes = strtol(buffer, NULL, 10);
        
        printf("Ranking: ");
        fgets(buffer,TAMANHO_STRING,stdin);
        bandaMusical[contador].posicaoRank = strtol(buffer, NULL, 10);
        system("cls");
    }
    opcao = escolhaOpcao();
    
    printf("TOP %i BANDAS", TAMANHO);
    
    for (contador = 0; contador < TAMANHO; contador++)
    {
        if (opcao == bandaMusical[contador].posicaoRank)
        {
            printf("\n-----------------");
            printf("\nNome: %s", bandaMusical[contador].nome);
            printf("\nGenero: %s", bandaMusical[contador].tipoMusical);
            printf("\nIntegrantes: %i", bandaMusical[contador].integrantes);
            printf("\nRanking: %i", bandaMusical[contador].posicaoRank);
            printf("\n-----------------");
            contador = TAMANHO;
        }
    }
    
}

void removerQuebraLinha(char *ptrDoRegistroEmCadeia) {
    ptrDoRegistroEmCadeia[strcspn(ptrDoRegistroEmCadeia, "\n")] = '\0';
}

int escolhaOpcao() {
    int opcao, contador;
    for (contador = 0; contador < TAMANHO; contador++)
    {
        printf("[%i] ", contador + 1);
    }
    
    printf("\nDigite uma opcao: ");
    fgets(buffer,TAMANHO_STRING,stdin);
    opcao = strtol(buffer, NULL, 10);
    return opcao;
}