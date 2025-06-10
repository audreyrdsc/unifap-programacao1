#include <stdio.h>

int main() {
    int a, b;

    printf("\nDigite o primeiro número (A): ");
    scanf("%d", &a);

    printf("\nDigite o segundo número (B): ");
    scanf("%d", &b);

    if (a > b) {
        printf("\n%d é maior que %d ", a, b);
    } else if (a < b) {
        printf("\n%d é maior que %d ", b, a);
    } else {
        printf("\n%d é igual a %d", a, b);
    }

    return 0;
}