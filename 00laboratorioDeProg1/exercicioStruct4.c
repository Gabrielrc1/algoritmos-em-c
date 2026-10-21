#include <stdio.h>
#include <string.h>

typedef struct 
{
    int hora;
    int minuto;
    int segundo;
} horario;

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

typedef struct 
{
    horario h;
    data d;
    char descricao[100];
} compromisso;

int main () {
    compromisso compromissoUser;

    printf("Informe o horário do compromisso\n");
    printf(":");
    scanf("%i", &compromissoUser.h.hora);
    printf(":");
    scanf("%i", &compromissoUser.h.minuto);
    printf(":");
    scanf("%i", &compromissoUser.h.segundo);
    
    printf("\nInforme a data do compromisso\n");
    printf(":");
    scanf("%i", &compromissoUser.d.dia);
    printf(":");
    scanf("%i", &compromissoUser.d.mes);
    printf(":");
    scanf("%i", &compromissoUser.d.ano);

    while (getchar() != '\n');

    printf("\nInfome a descricao do comprimisso: ");
    fgets(compromissoUser.descricao, 100, stdin);

    printf("\n%i:%i:%i", compromissoUser.h.hora, compromissoUser.h.minuto, compromissoUser.h.segundo);
    printf("\n%i/%i/%i", compromissoUser.d.dia, compromissoUser.d.mes, compromissoUser.d.ano);
    printf("\n%s", compromissoUser.descricao);
}