//70. Crie um algoritmo que retorne verdadeiro quando um número fornecido for par.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}