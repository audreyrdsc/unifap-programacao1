//22. Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua média na variável 
//Media e imprima seu valor.

#include <stdio.h>

int main() {

    float val1, val2, media = 0.0;

    printf("\nDigite o primeiro valor (V1): "); scanf("%f", &val1);
    printf("Digite o primeiro valor (V2): "); scanf("%f", &val2);

    media = (val1 + val2) / 2.0;

    printf("\nA média dos valores V1 = %.2f e V2 = %.2f é igual a %.2f", val1, val2, media);

    return 0;
}