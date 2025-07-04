// 9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.

#include <stdio.h>

int main() {
    int valor = 0, maior = -99999999, menor = 99999999;

    for (int i = 0; i < 50; i++) {
        printf("\nDigite o valor %d : ", i + 1); scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        } else if (valor < menor) {
            menor = valor;
        }
    }

    printf("\n*** *** *** *** *** *** *** ***");
    printf("\nO maior valor inserido foi: %d", maior);
    printf("\nO menor valor inserido foi: %d", menor);
    return 0;
    
}