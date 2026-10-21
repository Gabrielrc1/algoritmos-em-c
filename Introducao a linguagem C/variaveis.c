#include <stdio.h>
#include <stdlib.h>

int main () {
    // Criando variáveis e lendo números com scanf
    int idade, num1, num2;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n\tIdade: %d", idade);
    
    printf ("\n\nDigite dois valores inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\tA soma dos valores %d + %d = %d\n", num1, num2, num1 + num2);
    printf("\tA soma dos valores %d - %d = %d\n", num1, num2, num1 - num2);
    printf("\tA soma dos valores %d x %d = %d\n", num1, num2, num1 * num2);
    printf("\tA soma dos valores %d / %d = %d\n", num1, num2, num1 / num2);
}