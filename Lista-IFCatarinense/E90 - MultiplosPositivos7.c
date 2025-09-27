//90. Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000.

#include <stdio.h>

int main() {
    printf("Múltiplos positivos de 7, inferiores a 1000:\n");

    int contador = 0;

    for (int i = 7; i < 1000; i += 7) {
        printf("%d ", i);
        contador++;

        if (contador % 10 == 0) {
            printf("\n");
        }
    }

    if (contador % 10 != 0) {
        printf("\n");
    }

    return 0;
}
