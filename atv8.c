#include <stdio.h>
#include <stdlib.h>

int main() {
    float pesoAtual, novoPesoEngordar, novoPesoEmagrecer;

    printf("Digite o peso atual da pessoa: ");
    scanf("%f", &pesoAtual);

    novoPesoEngordar = pesoAtual + (pesoAtual * 0.15);

    novoPesoEmagrecer = pesoAtual - (pesoAtual * 0.20);

    printf("Se a pessoa engordar 15%%, o novo peso sera: %.2f\n", novoPesoEngordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso sera: %.2f\n", novoPesoEmagrecer);

    return 0;
}
