#include <stdio.h>
#include <stdlib.h>

int main() {
    float cotacao_dolar, valor_em_dolares, valor_em_reais;

    printf("Informe a cotacao do dolar em reais: ");
    scanf("%f", &cotacao_dolar);

    printf("Informe o valor em dolares: ");
    scanf("%f", &valor_em_dolares);

    valor_em_reais = valor_em_dolares * cotacao_dolar;

    printf("O valor em reais e: R$%.2f\n", valor_em_reais);

    return 0;
}
