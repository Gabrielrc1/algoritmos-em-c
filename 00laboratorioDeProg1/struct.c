#include <stdio.h>

int main() {
    struct atleta{
        int idade;
        float peso, altura;
    };

    typedef struct atleta informacao_atleta;

    informacao_atleta a;

    printf("Digite a idade: ");
    scanf("%i", &a.idade);
    printf("Digite o peso: ");
    scanf("%f", &a.peso);
    printf("Digite o peso: ");
    scanf("%f", &a.altura);

    printf("Idade do atleta e: %i", a.idade);
}