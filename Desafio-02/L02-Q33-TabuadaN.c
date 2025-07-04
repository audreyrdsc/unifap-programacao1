//33. Escrever um algoritmo que leia 20 valores para uma variável N e, para cada um deles, calcule a tabuada de 1
//até N. Mostre a tabuada na forma: 1 x N = N 2 x N = 2N 3 x N = 3N ...... N x N = N2

#include <stdio.h>

int main() {

    int n, qtdeValores = 20;

    for (int i = 0; i < qtdeValores; i++) {

        printf("\nInforme o valor de N: "); scanf("%d", &n);

        printf("Tabuada de 1 até %d:\n", n);
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d  ", j, n, j * n);
        }
    }

    return 0;
}