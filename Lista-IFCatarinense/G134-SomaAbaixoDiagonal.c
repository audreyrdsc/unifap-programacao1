//134. Faça um algoritmo que leia uma matriz mat 4 x 4, e imprima na tela a soma dos elementos
//abaixo da diagonal principal da matriz mat.

#include <stdio.h>

int main() {

    int M[4][4] = {{1,   2,  3,  4},
                   {5,   6,  7,  8},
                   {9,  10, 11, 12},
                   {13, 14, 15, 16}};
    int soma = 0;               

    printf("\nA matriz original M: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i > j) {
                soma += M[i][j];
            }

        }
    }

    printf("\nA soma dos elementos abaixo da diagonal é %d \n", soma);

    return 0;
}