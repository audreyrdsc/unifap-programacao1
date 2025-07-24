//133. Faça um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de todos 
//os elementos da matriz mat.

#include <stdio.h>

int main() {

    int M[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int soma = 0;

    printf("\nMatriz original M: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += M[i][j];
        }
    }

    printf("\nA soma dos elementos da matriz é: %d ", soma);

    return 0;
}