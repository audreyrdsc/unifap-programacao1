//101. Escreva um algoritmo que determine o fatorial de um número. Para este problema, tem-se como entrada o 
//valor do número do qual se deseja calcular o fatorial. O fatorial de 0 é igual a 1. O fatorial de um número 
//N(N!) é definido conforme a seguir: 
//N! = 1 * 2 * 3 * 4 * ... * (N-1) * N 

#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e %d\n", numero, fatorial);
    }

    return 0;
}