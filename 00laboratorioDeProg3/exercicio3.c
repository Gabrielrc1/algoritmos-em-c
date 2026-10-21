#include <stdio.h>

int main() {
    float altura, media_altura, soma_altura;
    int maiores_atletas, contador;

    soma_altura = 0;
    maiores_atletas = 0;

    for (contador = 1; contador <= 8; contador++)
    {
        printf("Entre com a altura do atleta: ");
        scanf("%f", &altura);

        soma_altura = altura + soma_altura;
        if (altura > 1.5)
        {
            maiores_atletas = maiores_atletas + 1;
        }
    }
    
    media_altura = soma_altura / 8;
    printf("Media de altura: %.2f\nMaiores que 1.5: %i\n", media_altura, maiores_atletas);
}