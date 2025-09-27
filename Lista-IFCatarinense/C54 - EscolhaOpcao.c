//54. Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e mostre o valor de Num1 se 
//Opção for igual a 2; o valor de Num2 se Opção for igual a 3; e o valor de Num3 se Opção for igual a 4.
//Os únicos valores possíveis para a variável Opção são 2, 3 e 4.

#include <stdio.h>

int main() {
    int opcao, num1, num2, num3;

    printf("Digite a opcao (2, 3 ou 4): ");
    scanf("%d", &opcao);

    if (opcao < 2 || opcao > 4) {
        printf("Opcao invalida. Por favor, escolha 2, 3 ou 4.\n");
        return 1;
    }

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (opcao == 2) {
        printf("O valor de Num1 é: %d\n", num1);
    } else if (opcao == 3) {
        printf("O valor de Num2 é: %d\n", num2);
    } else if (opcao == 4) {
        printf("O valor de Num3 é: %d\n", num3);
    }

    return 0;
}