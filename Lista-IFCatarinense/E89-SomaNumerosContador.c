#include <stdio.h>

//a) A soma dos números positivos
//b) A quantidade de valores negativos
int main() {
    int soma = 0, count = 0, a=0;
    for (int i = -25; i <= 25; i++) {
        
        if (i >= 0) {
            soma = soma + i;
        } else {
            count = count + 1;
        }
        
    }
    printf("\nA) A soma dos números positivos é: %d", soma);
    printf("\nB) A quantidade de valores negativos é: %d\n", count);
}