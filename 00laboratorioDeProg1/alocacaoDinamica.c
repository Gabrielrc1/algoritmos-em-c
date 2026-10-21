#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
        typedef struct
        {
            int idade;
            float peso, altura;
        } atleta;

        atleta *a;
        char buffer[50];

        /* Reserva um espaço na memória em tempo de execução do tamanho do tipo da variável e retorna um ponteiro do primeiro byte do bloco alocado*/
        a = malloc(sizeof(atleta));
        
        printf("Digite a idade: ");
        fgets(buffer,50,stdin);
        a->idade = strtol(buffer,NULL,10);

        printf("Digite o peso: ");
        fgets(buffer,50,stdin);
        a->peso = strtof(buffer,NULL);
        
        printf("Digite a altura: ");
        fgets(buffer,50,stdin);
        a->altura = strtof(buffer,NULL);

        printf("\nIdade: %i", a->idade);
        printf("\nPeso: %.2f", a->peso);
        printf("\nAltura: %.2f", a->altura);

        free(a);
}