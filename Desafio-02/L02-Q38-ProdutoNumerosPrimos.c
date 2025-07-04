//38. Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478.

#include <stdio.h>
#include <math.h>

int main() {
    int contDiv, contPrimos = 0;
    double produto = 1.0;

    printf("\nPrimos: ");

    for (int i = 92; i <= 1478; i++) {
        
        contDiv = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                contDiv++;
            }
        }

        if (contDiv == 2) {
            printf("%d ", i);
            produto *= i;
            contPrimos++;
        }
    }

    printf("\nO produto de todos os números primos entre 92 e 1478 é: %d", produto);
    printf("\nForam encontrados %d números primos no intervalo", contPrimos);
    printf("\n\nO produto de todos os números primos entre 92 e 1478 é: %.3e", produto);

    return 0;
}