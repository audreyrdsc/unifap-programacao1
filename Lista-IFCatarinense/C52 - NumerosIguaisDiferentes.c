//Faça um algoritmo que leia dois números e indique se são iguais ou se são diferentes. Mostre o maior 
//e o menor (nesta sequência).

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("Os numeros sao diferentes.\n");
        if (num1 > num2) {
            printf("Maior: %d\n", num1);
            printf("Menor: %d\n", num2);
        } else {
            printf("Maior: %d\n", num2);
            printf("Menor: %d\n", num1);
        }
    }

    return 0;
}