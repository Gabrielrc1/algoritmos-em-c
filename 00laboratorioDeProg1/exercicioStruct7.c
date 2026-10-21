#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Constante para tamanho de vetores ou contagem para contadores
#define TAMANHO 5

// Variável GLOBAL auxiliar para conversão de tipos
char buffer[50];

// Um registro do tipo "aluno"
typedef struct 
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
} aluno;

// Protótipos de função
void cadastrarAluno(aluno *ptrRegistroAluno);
void imprimirAlunos(aluno *ptrRegistroAluno);
float maiorPrimeiraNota(aluno *ptrRegistroAluno);

// Função principal
int main() {
    aluno registroAlunos[TAMANHO];
    int contador;

    for (contador = 0; contador < TAMANHO; contador++)
    {
        cadastrarAluno(&registroAlunos[contador]);
        printf("\n");
    }

    imprimirAlunos(&registroAlunos[0]);

    return 0;
}

// Função cadastrar
void cadastrarAluno (aluno *ptrRegistroAluno) {
    int auxiliarMatricula;
    float auxiliarNotas;

    printf("Nome: ");
    fgets(ptrRegistroAluno->nome,50,stdin);

    printf("Matrícula: ");
    fgets(buffer,50,stdin);
    auxiliarMatricula = strtol(buffer,NULL,10);
    ptrRegistroAluno->matricula = auxiliarMatricula;

    printf("Nota 1: ");
    fgets(buffer,50,stdin);
    auxiliarNotas = strtof(buffer,NULL);
    ptrRegistroAluno->nota1 = auxiliarNotas;
    
    printf("Nota 2: ");
    fgets(buffer,50,stdin);
    auxiliarNotas = strtof(buffer,NULL);
    ptrRegistroAluno->nota2 = auxiliarNotas;
    
    printf("Nota 3: ");
    fgets(buffer,50,stdin);
    auxiliarNotas = strtof(buffer,NULL);
    ptrRegistroAluno->nota3 = auxiliarNotas;
}

// Função de impressão de alunos
void imprimirAlunos(aluno *ptrRegistroAluno) {
    int contador;
    float maiorNota;

    maiorNota = maiorPrimeiraNota(ptrRegistroAluno);

    printf("/n");
    for (contador = 0; contador < TAMANHO; contador++)
    {
        printf("--------------\n");
        printf("%s", ptrRegistroAluno->nome);
        printf("%i\n", ptrRegistroAluno->matricula);
        printf("%.2f\n", ptrRegistroAluno->nota1);
        printf("%.2f\n", ptrRegistroAluno->nota2);
        printf("%.2f\n", ptrRegistroAluno->nota3);
        printf("--------------\n");
        // Mudando a posição no vetor de RegistroAluno
        ptrRegistroAluno++;
    }
    printf ("Maior primeira nota: %.2f", maiorNota);
}

float maiorPrimeiraNota (aluno *ptrRegistroAluno) {
    int contador;
    float maiorNota = 0;

    for (contador = 0; contador < TAMANHO; contador++)
    {
        if (maiorNota < ptrRegistroAluno->nota1)
        {
            maiorNota = ptrRegistroAluno->nota1;
        }
        ptrRegistroAluno++;
    }
    return maiorNota;
};