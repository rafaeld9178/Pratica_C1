#include <stdio.h>
#include <stdlib.h>

int main() {
    float diagonalMaior, diagonalMenor, area;

    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("A area do losango e: %.2f\n", area);

    return 0;
}
