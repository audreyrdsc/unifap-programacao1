//97. Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação de 1 até 13.

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabela de multiplicacao de %d:\n", numero);
    for (i = 1; i <= 13; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}