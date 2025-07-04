//17. Escrever um algoritmo que lê um número não determinado de pares de valores m,n, todos inteiros e positivos,
//um par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m inclusive.

#include <stdio.h>

int main() {
    int m, n, soma = 0;

    while (1) {

        printf("\nInforme o valor de M: "); scanf("%d", &m);
        printf("Informe o valor de N: "); scanf("%d", &n);

        if (n <= 0) {
            break;
        }

        if (n > 0) {

            printf("Soma de %d", m);

            for (int i = 0; i < n; i++) {
                soma += m + i;
                
                if (i + 1 < n) {
                    printf(" + %d", m + i + 1);
                }
            }

            printf("\nA soma dos %d números a partir de %d é igual a %d\n", n, m, soma);
        }

    }

    printf("\nPROGRAMA ENCERRADO!");

    return 0;
}