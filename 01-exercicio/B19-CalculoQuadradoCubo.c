//19. Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do
//valor lido.

#include <stdio.h>

int main() {

    int numero, quadrado = 0, cubo = 0;

    printf("\nInforme o número (N): "); scanf("%d", &numero);

    quadrado = numero * numero;

    cubo = quadrado * numero;

    printf("\n---------- RESULTADO DOS CÁLCULOS ----------");
    printf("\nO quadrado do número %d é: %d", numero, quadrado);
    printf("\nO cubo do número %d é: %d", numero, cubo);

    return 0;
}