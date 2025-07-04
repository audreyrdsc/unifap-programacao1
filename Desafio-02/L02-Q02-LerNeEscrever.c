//2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
//E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!

#include <stdio.h>

int main() {
    int n;
    float e = 1.0, fat = 1.0;

    printf("\nDigite o valor de N positivo: "); scanf("%d", &n);

    if (n >= 0) {
        for(int i = 1; i <= n; i++) {
            for (int j = i; j >= i; j--) {
                fat *= i;
            }
            e += (1 / fat);
        } 
        printf("\nO valor de E = %.2f ", e);
    } else {
        printf("\nAVISO: O valor de N não pode ser negativo!");
    }
    
}