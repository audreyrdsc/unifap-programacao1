#include <stdio.h>

int main() {
    float base, altura, area;

    printf("\nDigite as dimensões da base do triângulo: ");
    scanf("%f", &base);

    printf("\nDigite as dimensões da altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nA área do triângulo de base %.2f e altura %.2f é %.2f\n", base, altura, area);

    return 0;
}