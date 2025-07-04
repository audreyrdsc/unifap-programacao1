//32. Escrever um algoritmo que lê 5 pares de valores a, b, todos inteiros e positivos, um par de cada vez, e 
//com a < b, escreve os inteiros pares de a até b, incluindo o a e o b se forem pares.

#include <stdio.h>

int main() {
    int a, b;

    for (int i = 1; i <= 5; i++) {
        printf("\nPar %d:\n", i);

        // Solicita valores até que a < b
        do {
            printf("Digite o valor de a (inteiro positivo): ");
            scanf("%d", &a);
            printf("Digite o valor de b (inteiro positivo, maior que a): ");
            scanf("%d", &b);

            if (a >= b || a <= 0 || b <= 0) {
                printf("Valores inválidos! a deve ser menor que b e ambos positivos.\n");
            }
        } while (a >= b || a <= 0 || b <= 0);

        // Mostra os pares no intervalo [a, b]
        printf("Números pares entre %d e %d:\n", a, b);
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
