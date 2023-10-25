#include <stdio.h>
#include <stdlib.h>

int main() {
    int dataNascimento, idade, idadeFutura;

    printf("Digite a data de nascimento: ");
    scanf("%d", &dataNascimento);

    idade = 2023 - dataNascimento;

    idadeFutura = 2050 - dataNascimento;

    // Apresenta o resultado
    printf("Idade em 2023: %d\n", idade);
    printf("Idade em 2050: %d\n", idadeFutura);

    return 0;
}
