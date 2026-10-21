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

void registrarHorario(compromisso *ptrCompromissoDoUsuario);
void registrarData(compromisso *ptrCompromissoDoUsuario);
void registrarCompromisso(compromisso *ptrCompromissoDoUsuario);

int main () {
    compromisso compromissoDoUsuario;

    registrarHorario(&compromissoDoUsuario);
    registrarData(&compromissoDoUsuario);
    registrarCompromisso(&compromissoDoUsuario);

    printf("\n%i:%i:%i", compromissoDoUsuario.h.hora, compromissoDoUsuario.h.minuto, compromissoDoUsuario.h.segundo);
    printf("\n%i/%i/%i", compromissoDoUsuario.d.dia, compromissoDoUsuario.d.mes, compromissoDoUsuario.d.ano);
    printf("\n%s", compromissoDoUsuario.descricao);
}

void registrarHorario (compromisso *ptrCompromissoDoUsuario) {
    int temporario;

    printf("Informe o horário do compromisso\n");
    
    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->h.hora = temporario;
    
    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->h.minuto = temporario;

    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->h.segundo = temporario;
}

void registrarData (compromisso *ptrCompromissoDoUsuario) {
    int temporario;

    printf("\nInforme a data do compromisso\n");
    
    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->d.dia = temporario;

    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->d.mes = temporario;

    printf(":");
    scanf("%i", &temporario);
    ptrCompromissoDoUsuario->d.ano = temporario;
}

void registrarCompromisso (compromisso *ptrCompromissoDoUsuario) {
    while (getchar() != '\n');

    printf("\nInfome a descricao do comprimisso: ");
    fgets(ptrCompromissoDoUsuario->descricao, 100, stdin);
}