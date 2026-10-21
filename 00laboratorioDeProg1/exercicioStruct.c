#include <stdio.h>
#include <string.h>
#define TAMANHO 3

typedef struct 
{
    char nome[50];
    float nota;
} aluno;

int main() {
    aluno registroAlunos[TAMANHO];
    int contador;

    for (contador = 0; contador <  TAMANHO; contador++) 
    {
        printf("Digite o nome do %i aluno: ", contador + 1);
        fgets(registroAlunos[contador].nome,50,stdin);
        
        registroAlunos[contador].nome[strcspn(registroAlunos[contador].nome, "\n")] = '\0';
        
        printf("Digite a nota: ");
        scanf("%f", &registroAlunos[contador].nota);

        while (getchar() != '\n');
    }

    for (contador = 0; contador < TAMANHO; contador++)
    {
        printf("\nAluno: %s --- Nota: %.1f\n", registroAlunos[contador].nome, registroAlunos[contador].nota);
    }
    
}