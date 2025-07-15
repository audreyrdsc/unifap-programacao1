//21. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do 
//quadrado de cada valor lido. 

#include <stdio.h>

int main() {

    int a, b, soma, quadradoA, quadradoB;

    printf("\nInforme o valor inteiro de A: "); scanf("%d", &a);
    printf("Informe o valor inteiro de B: "); scanf("%d", &b);

    quadradoA = a * a;
    quadradoB = b * b;
    soma = quadradoA + quadradoB;

    printf("\n---------- RESULTADO DOS CÁLCULOS ----------");
    printf("\nO quadrado de (A) é igual a %d", quadradoA);
    printf("\nO quadrado de (B) é igual a %d", quadradoB);
    printf("\nA soma dos quadrados de A e B é igual a %d", soma);

    return 0;
}