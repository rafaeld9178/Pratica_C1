#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media = %.2f\n", media);

    return 0;
}
