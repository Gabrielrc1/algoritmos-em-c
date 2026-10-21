#include <stdio.h>
#include <stdlib.h>

/*
    O buffer pode ser lido adicionando espaço entre as leituras de dados para o tipo caracter pois ele recebe qualquer caracter digitado pelo teclado
    
    Para esse caso utilizando a função scanf() para leitura de dados
    
    Misturando os tipos de leituras pois queria testar um exemplo que deu errando a umas aulas atrás
*/

int main () {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite o sexo (m ou f): ");
    // O espaço também pode ser adicionado aqui após a leitura para "limpar" o buffer
    scanf("%c", &sexo);
    // sexo = getchar();
    printf("Sexo: %c\n\n\n", sexo);

    printf("Digite seu sexo (m ou f), idade, peso e altura:\n");
    
    // Adicionando espaço antes da próxima leitura para ignorar o caracter enter ou espaço
    scanf(" %c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("\nCodigo: %d", sexo);
    printf("\n\nSEXO: %c\nIDADE: %d\nPESO: %.2f\nALTURA: %.2f", sexo, idade, peso, altura);

}