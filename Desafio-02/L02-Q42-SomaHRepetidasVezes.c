// 42. Faça um algoritmo que calcule a seguinte soma: H = 10 + 10 + 10 + ... + 10 
//O algoritmo deve ler um número n (inteiro e positivo) e mostrar o resultado final de H. A soma deve ser 
//calculada apenas uma vez.

#include <stdio.h>

int main() {

    int n, soma = 0;

    printf("\nDigite o valor de (N): "); scanf("%d", &n);

    if (n > 0) {

        printf("\nH = ");

        for (int i = 0; i < n; i++) {
            printf("10");

            if (i < n - 1) {
                printf(" + ");
            }
            soma += 10;
        }

    } else if (n == 0) {
        printf("\nO resultado é H = 0\n");
    } else {
        printf("\nAVISO: N deve ser inteiro e positivo!\n");
    }

    if (soma > 0) {
        printf("\nO resultado é H = %d", soma);
    }

    return 0;
}