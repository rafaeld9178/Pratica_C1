#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioAtual, novoSalario;

    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salarioAtual);

    novoSalario = salarioAtual + (salarioAtual * 0.25);

    printf("Novo salario do funcionario: R$ %.2f\n", novoSalario);

    return 0;
}
