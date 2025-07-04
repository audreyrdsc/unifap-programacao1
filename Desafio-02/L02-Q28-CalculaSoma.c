//28. Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:  
//S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

#include <stdio.h>

int main() {
    int numero;
    float soma = 0.0;

    printf("\nDigite um número inteiro e positivo: "); scanf("%d", &numero);

    if (numero < 0) {
        printf("\n⚠️ Número desconsiderado. Apenas números inteiros e positivos\n");
    } else {

        printf("\n------- RESULTADO DA OPERAÇÃO -------");
        printf("\nS := ");
        
        for (int n = 1; n <= numero; n++) {
           
            soma += (1.0f / n);

            if (n == 1) {
                printf("1");
            } else {
                printf(" + 1/%d", n);
            }
        }

    }

    printf("\nO resultado da soma é S = %.2f", soma);
    printf("\n-------------------------------------");

    return 0;
}