//73. Faça um programa, utilizando estrutura de condição, que receba um número real, digitado pelo usuário e 
//mostre o menu para selecionar o tipo de cálculo que deve ser realizado: 
//101-Raiz quadrada 
//102-A metade 
//103-10% do número 
//104-O dobro 
//Escolha a opção:

#include <stdio.h>
#include <math.h>

int main() {
    float numero, resultado;
    int opcao;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Menu de opcoes:\n");
    printf("101 - Raiz quadrada\n");
    printf("102 - A metade\n");
    printf("103 - 10%% do numero\n");
    printf("104 - O dobro\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch(opcao) 
    {
        case 101:
            if (numero < 0) 
            {
                printf("Erro: Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
            } 
            else 
            {
                resultado = sqrt(numero);
                printf("A raiz quadrada de %.2f e %.2f\n", numero, resultado);
            }
            break;
        case 102:
            resultado = numero / 2;
            printf("A metade de %.2f e %.2f\n", numero, resultado);
            break;
        case 103:
            resultado = numero * 0.10;
            printf("10%% de %.2f e %.2f\n", numero, resultado);
            break;
        case 104:
            resultado = numero * 2;
            printf("O dobro de %.2f e %.2f\n", numero, resultado);
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}