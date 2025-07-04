// 30. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>

int main() {
    int cont = 0;

    printf("\n----- ----- NÚMEROS ÍMPARES ENTRE 100 E 200 ----- -----");
    for (int i = 100; i <= 200; i++) {

        if (i % 2 != 0) {
            
            if (cont % 10 == 0) {
                printf("\n");
            }
            printf("  %d", i);
            cont++;
        }    
    }

    return 0;
}