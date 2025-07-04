//11. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética), a1 ( o primeiro
//termo da progressão) e r (a razão da progressão) e escreva os n termos desta progressão, bem como a soma dos
//elementos.

#include <stdio.h>

int main() {
    int an, a1, n, r, Sn;

    printf("\n*** CÁLCULO DE PROGRESSÃO ARITMÉTICA ***\n");
    printf("\nInforme o número de termos da P.A.: "); scanf("%d", &n);
    printf("Informe o primeiro termo: "); scanf("%d", &a1);
    printf("Informe a razão da progressão: "); scanf("%d", &r);

    for (int i = 1; i <= n; i++) {
        an = a1 + (i - 1) * r;
        printf("\nTermo a%d = %d", i, an);
    }

    Sn = (n * (a1 + an)) / 2;
    printf("\nA soma dos elementos de S%d = %d", n, Sn);

    return 0;
}