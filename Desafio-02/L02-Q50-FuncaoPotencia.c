//50. Faça um algoritmo que leia 2 valores inteiros e positivos: X e Y. O algoritmo deve calcular e escrever a 
//função potência X Y

#include <stdio.h>

int main() {
    int b, n, potencia = 1;

    printf("\n---------- POTENCIAÇÃO DE NÚMEROS INTEROS ----------");
    printf("\nDigite o número que representa a base (B): "); scanf("%d", &b);
    printf("Digite o número o expoente (N): "); scanf("%d", &n);

    if (n < 0) {
        printf("\nO expoente deve ser inteiro e **positivo**!");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        potencia *= b;
    }

    printf("\nA potenciação de (%d) elevado a (%d) é igual a: %d ", b, n, potencia);

    return 0;
}