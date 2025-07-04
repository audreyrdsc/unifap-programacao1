//14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores
//lidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos e
//positivos. Mostre os resultados.

#include <stdio.h>

int main() {
    int valor, soma = 0, contPos = 0, contNeg = 0, qtdeTotal = 0;
    float media = 0.0, percPos = 0.0, percNeg = 0.0;

    printf("Digite os valores (9999 para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor == 9999) {
            break;
        }

        soma += valor;
        qtdeTotal++;

        if (valor >= 0) {
            contPos++;
        } else {
            contNeg++;
        }
    }

    if (qtdeTotal > 0) {
        media = (float)soma / qtdeTotal;
        percPos = (float)contPos / qtdeTotal * 100;
        percNeg = (float)contNeg / qtdeTotal * 100;

        printf("\n\n*** *** RESUMO DOS CÁLCULOS *** ***");
        printf("\nQuantidade de valores positivos: %d", contPos);
        printf("\nQuantidade de valores negativos: %d", contNeg);
        printf("\nQuantidade de valores lidos: %d", qtdeTotal);
        printf("\nA soma dos valores lidos: %d", soma);
        printf("\nMédia aritmética dos valores lidos: %.2f", media);
        printf("\nPercentual de valores positivos: %.2f%%", percPos);
        printf("\nPercentual de valores negativos: %.2f%%", percNeg);
    } else {
        printf("\nNenhum valor foi informado.");
    }

    return 0;
}
