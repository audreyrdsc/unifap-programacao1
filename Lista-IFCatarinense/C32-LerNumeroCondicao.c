#include <stdio.h>

int main() {
    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if (num <= 10) {
        printf("O número %d é MENOR ou igual a 10. RESULTADO: F1 ", num);
    } else if (num > 100) {
        printf("O número %d é MAIOR que 100. RESULTADO: F3 ", num);
    } else {
        printf("O número %d é maior que 10 E menor ou igual a 100. RESULTADO: F2 ", num);
    }

    return 0;
}