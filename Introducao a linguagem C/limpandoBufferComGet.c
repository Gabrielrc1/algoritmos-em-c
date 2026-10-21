#include <stdio.h>
#include <stdlib.h>

int main () {
    char a, b;

    printf("Digite dois caracteres: ");
    scanf("%c", &a);
    // Limpa o buffer do teclado após o digito, recebendo o enter ou espaço
    getchar();
    scanf("%c", &b);
    printf("\nA: %c\tB: %c", a, b);
    printf("\nA: %d\tB: %d", a, b);
}