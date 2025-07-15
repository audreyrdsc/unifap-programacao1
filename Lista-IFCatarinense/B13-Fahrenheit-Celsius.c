#include <stdio.h>

//Conversão de Fahrenheit para Celsius
int main() {

    float tf, tc;

    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &tf);

    tc = (tf - 32) * (5 / 9.0);

    printf("\n%.2f graus Fahrenheit corresponde a %.2f graus Celsius \n", tf, tc);

    return 0;
}