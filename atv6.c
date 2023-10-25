#include <stdio.h>
#include <stdlib.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;

    printf("A temperatura em graus Fahrenheit e: %.2f\n", temperaturaFahrenheit);

    return 0;
}
