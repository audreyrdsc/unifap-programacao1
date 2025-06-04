#include <stdio.h>

//Conversão de Celsius para Fahrenheit
int main() {

    float tf, tc;

    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &tc);

    tf = (9 * tc + 160) / 5;

    printf("\n%.2f graus Celsius corresponde a %.2f graus Fahrenheit \n", tc, tf);

    return 0;
}