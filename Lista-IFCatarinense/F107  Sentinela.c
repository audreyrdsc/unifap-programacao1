//107. Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o maior (Maximo) dentre eles. 
//Admita que o valor 9999 é utilizado como sentinela. 
//Ex.: 1, 2, 3 => Maior=3 

#include <stdio.h>

int main() {
    int numero, maximo;

    printf("Digite um numero (9999 para sair): ");
    scanf("%d", &numero);

    if (numero == 9999) {
        printf("Nenhum numero foi inserido.\n");
        return 0;
    }

    maximo = numero;

    while (1) {
        printf("Digite um numero (9999 para sair): ");
        scanf("%d", &numero);

        if (numero == 9999) {
            break;
        }

        if (numero > maximo) {
            maximo = numero;
        }
    }

    printf("O maior numero e: %d\n", maximo);
    return 0;
}