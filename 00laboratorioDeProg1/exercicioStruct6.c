#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANHO 3

char buffer[50];

typedef struct {
    char nome[50], curso[50];
    int numeroMatricula;
} aluno;

int main () {
    aluno registroAlunos[TAMANHO];
    int contador;

    for (contador = 0; contador < TAMANHO; contador++) 
    {
        printf("Digite o nome do aluno: ");
        fgets(registroAlunos[contador].nome, 50, stdin);

        printf("Numero de matricula: ");
        fgets(buffer, 50, stdin);
        registroAlunos[contador].numeroMatricula = strtol(buffer, NULL, 10);
        
        // while (getchar() != '\n');        
        printf("Digite o curso: ");
        fgets(registroAlunos[contador].curso,50,stdin);
    }

    for (contador = 0; contador < TAMANHO; contador++)
    {
        printf("---------\n%s\n%i\n%s\n----------\n", registroAlunos[contador].nome, registroAlunos[contador].numeroMatricula, registroAlunos[contador].curso);
    }
}