//83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para determinar a operação 
//que deve ser executada, conforme o usuário escolher no menu de opções. Conforme a opção escolhida pelo usuário, 
//uma operação diferente da calculadora deve ser executada.

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Calculadora Simples\n");
    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite a opcao (1-4): ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao entre 1 e 4.\n");
            break;
    }

    return 0;
}