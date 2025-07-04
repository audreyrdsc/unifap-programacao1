//37. Escrever um algoritmo que leia um valor X e calcule e mostre os 20 primeiros termos da série:  
//1 1 1 1 .....
//X X2 X3 X4

#include <stdio.h>
#include <math.h>

int main() {
    int x;

    printf("\nDigite o valor de (X): "); scanf("%d", &x);

    printf("\nOs 20 primeiros termos da série são:\n");

    for (int i = 1; i <= 20; i++) {
        float termo = 1.0 / pow(x, i);
        printf("1/%d^%d = %.3f\n", x, i, termo);
    }

    return 0;
}