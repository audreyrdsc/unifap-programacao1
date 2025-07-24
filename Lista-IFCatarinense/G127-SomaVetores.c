//127. Faça um algoritmo que some o conteúdo de dois vetores e armazene o resultado em um 
//terceiro vetor.

#include <stdio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int soma[5];
    
    for (int i = 0; i < 5; i++) {
        soma[i] = a[i] + b[i];
    }

    printf("\nVetor Soma = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }

    return 0;
}