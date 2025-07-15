//20. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da 
//soma dos valores lidos.

#include <stdio.h>

int main() {

    int a, b, soma, quadrado;

    printf("\nInforme o valor inteiro de A: "); scanf("%d", &a);
    printf("Informe o valor inteiro de B: "); scanf("%d", &b);

    soma = a + b;
    quadrado = soma * soma;

    printf("\n---------- RESULTADO DOS CÁLCULOS ----------");
    printf("\nA soma de A = %d mais B = %d é igual a %d", a, b, soma);
    printf("\nO quadrado de (A + B) é igual a %d", quadrado);

    return 0;
}