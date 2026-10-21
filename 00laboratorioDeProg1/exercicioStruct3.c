#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
} pessoa;

void exibirPessoa(pessoa a);
void alterandoPessoa(pessoa *a);

int main() {
    pessoa pessoaA;

    strcpy(pessoaA.nome, "Gabriel Reis Costa");
    pessoaA.idade = 24;

    exibirPessoa(pessoaA);

    printf("\n%s - %i", pessoaA.nome, pessoaA.idade);
    alterandoPessoa(&pessoaA);
    printf("\n%s - %i", pessoaA.nome, pessoaA.idade);
    
}

void exibirPessoa (pessoa a) {
    printf("%s - %i", a.nome, a.idade);
    
    strcpy(a.nome, "Mateus Reis Costa");
    a.idade = 17;
    
    printf("\n%s - %i", a.nome, a.idade);
    
}

void alterandoPessoa (pessoa *a) {
    strcpy(a->nome, "Thiago Reis Costa");
    a->idade = 31;
}
