#include <stdio.h>
#include <math.h>

int main() {
    float raio, area, pi;

    printf("\nDigite o raio da circunferência: ");
    scanf("%f", &raio);

    pi = 3.14159265359;
    area = pi * pow(raio,2);

    printf("\nA área do círculo de raio %.2f é %.2f\n", raio, area);

    return 0;
}