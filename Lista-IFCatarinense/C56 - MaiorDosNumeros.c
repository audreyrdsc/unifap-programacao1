//56. Elaborar um algoritmo que lê três valores a, b, c e os escreve. A seguir, encontre o maior dos três 
//valores e o escreva com a mensagem : "É o maior”.

#include <stdio.h>

int main() {
    int a, b, c, maior;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Valores lidos: a = %d, b = %d, c = %d\n", a, b, c);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("%d é o maior.\n", maior);

    return 0;
}