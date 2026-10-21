#include <stdio.h>
#include <stdlib.h>

int main () {
    // Lendo caracteres do teclado com diferentes funções
    /*
        scanf
        getchar
        getc
        fgetc
    */

   char sexo;
   
   printf("Digite M [masculino]\tDigite F [feminino]\n");
   sexo = fgetc(stdin);
//    sexo = getc(stdin);
//    sexo = getchar();
//    scanf("%c", &sexo);
   printf("Sexo: %c\n", sexo);
   printf("Codigo do caracter: %d\n", sexo);


   // Imprimindo a letra g pelo seu código correspondente da tabela ASCII
//    printf("letra g: %c\n\n", 103);

}
