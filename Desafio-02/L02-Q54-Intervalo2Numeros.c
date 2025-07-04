// 54. Faça uma algoritmo que receba 2 numeros e divida o intervalo entre eles em 3 partes iguais. Obs. Faça 
//a consistência para que os extremos não sejam iguais.

#include <stdio.h>

int main() {

    float numero1, numero2, divisao;

    printf("\nDigite o primeiro número: "); scanf("%f", &numero1);
    printf("\nDigite o segundo número: "); scanf("%f", &numero2);

    if (numero1 == numero2) {
        printf("\nOs números não podem ser iguais");
        return 1;
    }

    if (numero1 > numero2) {
        float aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }

    divisao = (numero2 - numero1) / 3.0;

    printf("\nDividindo o intervalo [%.2f, %.2f] em 3 partes iguais:\n", numero1, numero2);
    printf("Parte 1: %.2f\n", numero1 + divisao);
    printf("Parte 2: %.2f\n", numero1 + 2 * divisao);

    return 0;
}