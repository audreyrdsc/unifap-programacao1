//51. Faça um algoritmo que calcule o fatorial de um número.

#include <stdio.h>

int main() {

    int n = 0, fatorial = 1;

    printf("\nDigite o número (N) para calcular o fatorial: "); scanf("%d", &n);

    if (n >= 0) {
    
        printf("%d! = ", n);

        if (n == 0) {
            printf("1");
        }

        for (int i = n; i >= 1; i--) {
            fatorial *= i;
            printf("%d", i);
            
            if (i > 1) {
                printf(".");
            }
        }
    
        printf("\nFatorial de %d é: %d ", n, fatorial);
    } else {
        printf("\nO número (N) deve ser inteiro e positivo!");
    }
    
    return 0;
}