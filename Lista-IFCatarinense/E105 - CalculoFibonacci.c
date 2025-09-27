//105. A série de Fibonacci é formada pela sequência: 
//0, 1, 1, 2, 3, 5, 8, 13, 21, ... 
//Construa um algoritmo que gere e mostre a série até o vigésimo termo.

#include <stdio.h>

int main() {
    int termos;

    printf("Digite a quantidade de termos da série de Fibonacci: ");
    scanf("%d", &termos);

    if (termos <= 0) {
        printf("Quantidade inválida. Informe um número maior que 0.\n");
        return 0;
    }

    int a = 0, b = 1, c;

    printf("Série de Fibonacci com %d termos:\n", termos);

    if (termos == 1) {
        printf("%d\n", a);
    } else {
        printf("%d %d ", a, b);
        for (int i = 2; i < termos; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
