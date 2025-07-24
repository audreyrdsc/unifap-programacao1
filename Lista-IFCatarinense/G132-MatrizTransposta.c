//132. Faça um algoritmo para calcular a transposta de uma matriz.

#include <stdio.h>

int main() {

    int M[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int T[3][2] = {0};

   printf("Matriz Original M: \n");
 
   for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            T[j][i] = M[i][j];
        }
    }

    printf("\nMatriz Transposta T: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}