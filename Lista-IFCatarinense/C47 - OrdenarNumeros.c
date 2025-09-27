//Construir um algoritmo que tome como entradas três valores distintos e os apresente (imprima) em 
//ordem crescente (menor para o maior).

#include <stdio.h>

int main() {

    int a, b, c, aux;

    printf("Digite três numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}