#include <stdio.h>
#include <math.h>

//Cálculo do volume em uma lata de óleo
int main() {

    float pi, raio, altura, volume;

    pi = 3.14159265359;

    printf("\n*** CÁLCULO DO VOLUME DA LATA ***");
    printf("\nDigite o raio da circunferência da lata: ");
    scanf("%f", &raio);

    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = pi * pow(raio, 2) * altura;

    printf("\nO volume calculado da lata é: %.2f \n", volume);

    return 0;

}