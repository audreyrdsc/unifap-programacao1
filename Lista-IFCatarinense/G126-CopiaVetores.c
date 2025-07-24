//126. Faça um algoritmo que copie o conteúdo de um vetor em um segundo vetor. 

#include <stdio.h>

int main() {

    int origem[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int destino[10];

    printf("\nOrigem  = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", origem[i]);
        destino[i] = origem[i];
    }

    printf("\nDestino = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", destino[i]);
    }

    return 0;
}