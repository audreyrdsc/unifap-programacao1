//66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor e qual é o maior também.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
        printf("O menor numero e: %d\n", num2);
    } else if (num2 > num1) {
        printf("O maior numero e: %d\n", num2);
        printf("O menor numero e: %d\n", num1);
    } else {
        printf("Os dois numeros sao iguais: %d\n", num1);
    }

    return 0;
}