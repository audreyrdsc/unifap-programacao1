//19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de
//números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a
//leitura será zero.

#include <stdio.h>

int main() {
    int numero = 99;
    int qtdePares = 0, qtdeImpares = 0, somaPares = 0, somaImpares = 0;
    int somaGeral = 0, qtdeGeral = 0;;
    float  mediaPares = 0.0, mediaImpares = 0.0, mediaGeral = 0.0;

    while (numero != 0) {
        
        printf("Digite um número inteiro positivo "); scanf("%d", &numero);

        if (numero > 0) {
            
            if (numero % 2 == 0) {
                qtdePares++;
                somaPares += numero;
            } else {
                qtdeImpares++;
                somaImpares += numero;
            }

        } else if (numero < 0) {
            printf("\nAVISO: números diferentes de inteiros positivos não são aceitos!\n");
        }
    }

    qtdeGeral = qtdePares + qtdeImpares;
    somaGeral = somaPares + somaImpares;
    mediaPares = (somaPares / (float) qtdePares);
    mediaImpares = (somaImpares / (float) qtdeImpares);
    mediaGeral = (somaGeral / (float) qtdeGeral);

    printf("\n---------- RESUMO DOS CÁLCULOS -------------");
    printf("\nQuantidade de números pares: %d", qtdePares);
    printf("\nQuantidade de números ímpares: %d", qtdeImpares);
    printf("\nMédia de valores pares: %.2f", mediaPares);
    printf("\nMédia de valores ímpares: %.2f", mediaImpares);
    printf("\n--------------------------------------------");
    printf("\nQuantidade geral de números lidos: %d", qtdeGeral);
    printf("\nMédia geral de números lidos: %.2f\n", mediaGeral);

    return 0;
}