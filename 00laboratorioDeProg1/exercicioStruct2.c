#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
} aluno;

int main () {
    aluno a, b;

    printf("Digite o nome do aluno: ");
    fgets(a.nome,50,stdin);

    a.nome[strcspn(a.nome, "\n")] = '\0'; // Tirando a quebra de linha no final da string;
    
    printf("Digite a idade do aluno: ");
    scanf("%i", &a.idade);

    b = a;

    printf("\nAluno: %s - Idade: %i", b.nome, b.idade);

}