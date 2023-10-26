#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, i;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
