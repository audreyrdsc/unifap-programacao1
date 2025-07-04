//53. Faça um algoritmo que calcule os 20 primeiros números primos, dados os tres primeiros 1,2 e 3.

#include <stdio.h>
#include <math.h>

int main() {
   int numero = 2;         // começa em 2 (primeiro número primo)
    int contPrimos = 0;     // quantidade de primos encontrados

    printf("\n20 primeiros números primos:\n");

    while (contPrimos < 20) {
        int contDiv = 0;

        for (int j = 1; j <= numero; j++) {
            if (numero % j == 0) {
                contDiv++;
            }
        }

        if (contDiv == 2) {
            printf("%d ", numero);
            contPrimos++;
        }

        numero++;
    }

    printf("\n\nTotal de primos encontrados: %d\n", contPrimos);

    return 0;
}