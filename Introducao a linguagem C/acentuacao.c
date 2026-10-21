#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    // Além da importação da biblioteca, no vscode é preciso mudar de UTF-8 para ISO 8859-1
    printf("Coração");
}
