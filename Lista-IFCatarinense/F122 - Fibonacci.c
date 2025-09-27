//122. Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros termos da sequência de Fibonnaci 
//(0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N sempre será maior ou igual a 2. 

#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, proximoTermo;

    printf("Digite a quantidade de termos da sequencia de Fibonacci (N >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci:\n");
    printf("%d\n", t1);
    printf("%d\n", t2);

    for (i = 3; i <= n; i++) {
        proximoTermo = t1 + t2;
        printf("%d\n", proximoTermo);
        t1 = t2;
        t2 = proximoTermo;
    }

    return 0;
}