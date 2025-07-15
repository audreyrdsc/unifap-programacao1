#include <stdio.h>

//Adição de dois números
int main() {
    int n1, n2, soma;

    printf("Digite n1: ");
    scanf("%d", &n1);

    printf("Digite n2: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("\nA soma de %d mais %d é: %d ", n1, n2, soma);

    return 0;

}