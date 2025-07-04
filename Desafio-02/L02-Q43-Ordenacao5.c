//43. Fazer um algoritmo que leia 5 grupos de 4 valores (A,B,C,D) e mostre-os na ordem lida.
//Em seguida, ordene-os em ordem decrescente e mostre-os novamente, já ordenados.

#include <stdio.h>

int main() {

    int a, b, c, d;
    int aux;

    for (int i = 1; i <= 5; i++) {
        printf("\nPara o conjunto 0%d informe", i);
        printf("O valor de (A): "); scanf("%d", &a);
        printf("O valor de (B): "); scanf("%d", &b);
        printf("O valor de (C): "); scanf("%d", &c);
        printf("O valor de (D): "); scanf("%d", &d);

        printf("\nA ordem lida foi: %d, %d, %d, %d ", a, b, c, d);

        if (a < b) {
            aux = a;
            a = b;
            b = aux;
        }

        if (a < c) {
            aux = a;
            a = c;
            c = aux;
        }

        if (a < d) {
            aux = a;
            a = d;
            d = aux;
        }

        if (b < c) {
            aux = b;
            b = c;
            c = aux;
        }

        if (b < d) {
            aux = b;
            b = d;
            d = aux;
        }

        if (c < d) {
            aux = c;
            c = d;
            d = aux;
        }

        printf("\nApós a ordenação decrescente fica: %d, %d, %d, %d ", a, b, c, d);
    }

    return 0;

}