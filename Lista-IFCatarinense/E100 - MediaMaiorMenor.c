//100. Crie um programa que peça 10 números inteiros e apresente: a média, o maior e o menor.

#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    int maior, menor;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];

        if (i == 0) {
            maior = menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    media = soma / 10.0;

    printf("Média: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}