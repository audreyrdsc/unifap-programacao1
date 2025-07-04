//12. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n.
//Mostre a tabuada na forma:
//1 x n = n

#include <stdio.h>

int main() {
    int n, mult;

    for (int i = 0; i < 20; i++) {
        printf("\nDigite o número N: "); scanf("%d", &n);

        for (int t = 1; t <= 10; t++) {
            mult = n * t;
            printf("\n %d X %d = %d", n, t, mult);
        }
        printf("\n");
    }

    return 0;
}