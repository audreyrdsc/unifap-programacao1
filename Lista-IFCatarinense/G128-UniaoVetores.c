//128. Faça um algoritmo que faça a união de dois vetores de mesmo tamanho e mesmo tipo em um 
//terceiro vetor com dobro do tamanho.

#include <stdio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int uniao[10];

    for (int i = 0; i < 5; i++) {
        uniao[i] = a[i];
    }

    for (int i = 0; i < 5; i++) {
        uniao[i + 5] = b[i];
    }

    printf("Vetor União = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\n");

    return 0;
}
