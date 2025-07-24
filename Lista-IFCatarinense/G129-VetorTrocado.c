//129. Escrever um algoritmo que lê um vetor N(20) e o escreve. Troque, a seguir, o 1º elemento 
//com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva o vetor N assim modificado.

#include <stdio.h>

int main() {

    int N[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int aux;

    printf("\nVetor N  = ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    for (int i = 0; i < 10; i++) {
        aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }


    printf("\nVetor N' = ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    return 0;
}