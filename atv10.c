#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio, comprimento, area, volume;
    const float pi = 3.14;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;

    area = pi * pow(raio, 2);

    volume = (3.0 / 4.0) * pi * pow(raio, 3);

    printf("O comprimento da esfera e: %.2f\n", comprimento);
    printf("A area da esfera e: %.2f\n", area);
    printf("O volume da esfera e: %.2f\n", volume);

    return 0;
}
