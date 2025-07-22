//38. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que informe se a soma de
//A com B é menor, maior ou igual a C. 

#include <stdio.h>

int main() {

    int A, B, C, somaAB;

    printf("\nInforme o valor de A: "); scanf("%d", &A);
    printf("Informe o valor de B: "); scanf("%d", &B);
    printf("Informe o valor de C: "); scanf("%d", &C);

    somaAB = A + B;

    if (somaAB < C) {
        printf("\nA soma de A e B (%d) é menor que C (%d) ", somaAB, C);
    } else if (somaAB > C) {
        printf("\nA soma de A e B (%d) é maior que C (%d) ", somaAB, C);
    } else {
        printf("\nA soma de A e B (%d) é igual a C (%d) ", somaAB, C);
    }

    return 0;
}