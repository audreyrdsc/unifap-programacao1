//104. Sem utilizar a operação de multiplicação, escreva um programa que multiplique dois números inteiros.
//Por exemplo: 2 * 2 = 2 + 2.

#include <stdio.h>

int main() {
    int num1, num2, resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for(int i = 0; i < num2; i++) {
        resultado += num1;
    }

    printf("O resultado de %d multiplicado por %d é: %d\n", num1, num2, resultado);

    return 0;
}