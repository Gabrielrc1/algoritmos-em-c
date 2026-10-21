#include <stdio.h>
// Calcular o valor de um produto com base no seu valor total
/*
    valor <= 100 sendo a vista tem 10% de desconto
    valor > sendo a vista tem 15% de desconto
    valor <= 100 sendo a prazo preço normal
    valor > 100 sendo a prazo tem juros de 10%
*/

int main(){
    float valor, desconto, juros, valor_final;
    int tipo_pagamento;

    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);
    printf("\nForma de pagamento a vista (0) | a prazo (1): ");
    scanf("%i", &tipo_pagamento);

    if (tipo_pagamento == 0) {
        desconto = (valor > 100.0) ? 0.15 : 0.1;
        valor_final = valor - (valor * desconto);
    } else {
        juros = (valor > 100.0) ? 0.1 : 0.0;
        valor_final = valor + (valor * juros);
    }

    printf("Total a pagar: %.2f\n", valor_final);

    return 0;
}