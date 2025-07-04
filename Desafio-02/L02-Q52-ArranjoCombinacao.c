//52. Faça um algoritmo que calcule a combinação e arranjo de um conjunto de tamanho N em subconjuntos de 
//p elementos.

#include <stdio.h>

int main() {
    int n, p;
    int i;
    long long fatorial_n = 1, fatorial_p = 1, fatorial_n_p = 1;
    long long arranjo, combinacao;

    printf("Digite o valor de N (tamanho do conjunto): ");
    scanf("%d", &n);
    
    printf("Digite o valor de P (tamanho dos subconjuntos): ");
    scanf("%d", &p);

    if (p > n || n < 0 || p < 0) {
        printf("AVISO: P deve ser menor ou igual a N e ambos devem ser não negativos.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial_n *= i;
    }

    for (i = 1; i <= p; i++) {
        fatorial_p *= i;
    }

    for (i = 1; i <= (n - p); i++) {
        fatorial_n_p *= i;
    }

    arranjo = fatorial_n / fatorial_n_p;
    combinacao = fatorial_n / (fatorial_p * fatorial_n_p);

    printf("\nArranjo A(%d, %d) = %lld", n, p, arranjo);
    printf("\nCombinação C(%d, %d) = %lld\n", n, p, combinacao);

    return 0;
}
