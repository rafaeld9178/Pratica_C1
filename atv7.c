#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalariosMinimos;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salario do funcionario: R$ ");
    scanf("%f", &salarioFuncionario);

    quantidadeSalariosMinimos = salarioFuncionario / salarioMinimo;

    printf("O funcionario recebe %.2f salarios minimos.\n", quantidadeSalariosMinimos);

    return 0;
}
