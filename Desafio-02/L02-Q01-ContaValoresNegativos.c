// 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos,
//escrevendo esta informação.

#include <stdio.h>

int main() {
    int a, contNeg = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor de A: "); scanf("%d", &a);

        if (a < 0) {
            contNeg++;
        }
    }

    printf("\nForam lidos %d números negativos", contNeg);

    return 0;
}
