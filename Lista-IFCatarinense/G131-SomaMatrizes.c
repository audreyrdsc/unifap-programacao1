//131. Faça um algoritmo para somar duas matrizes.

#include <stdio.h>

int main() {

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nMatriz Soma 2x2: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}