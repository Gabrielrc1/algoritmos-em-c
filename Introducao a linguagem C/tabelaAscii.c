#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    int i;
    setlocale(LC_ALL, "Portuguese");
    for (i = 0; i <= 256; i++)
    {
        printf("%c ", i);
    }
}
