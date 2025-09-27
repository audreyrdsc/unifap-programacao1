//Faça um algoritmo que leia 3 números inteiros distintos e escreva o menor deles.

#include <stdio.h>

int main() {

    int a, b, c, menor, maior;

    printf("Digite tres numeros inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && a < c) {
        menor = a;
    } else if (b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }

    if (a > b && a > c) {
        maior = a;
    } else if (b > a && b > c) {
        maior = b;
    } else {
        maior = c;
    }

    printf("O menor numero e: %d\n", menor);
    printf("O maior numero e: %d\n", maior);

    return 0;

}