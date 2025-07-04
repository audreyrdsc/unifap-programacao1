//29. Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73.

#include <stdio.h>

int main() {
    int soma = 0, cont = 0;
    float media = 0.0;

    for (int i = 1; i <= 3; i++) {
        soma += i;
        cont++;
    }

    media = soma / (float) cont;

    printf("\nA média aritmética calculada é: %.2f", media);

    return 0;
}