//42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se nome, preço e 
//percentual de desconto. Faça um algoritmo que imprima nome, preço e preço com desconto de 
//cada artigo e o total a pagar. 

#include <stdio.h>

int main() {

    char nomeArtigo[4][20];
    float preco[4], desc[4], precoDesc[4];
    float total = 0.0;

    printf("\n---------- SISTEMA DE VENDAS ----------");
    
    for (int i = 0; i < 4; i++) {
        printf("\nArtigo %d", i + 1);
        printf("\nNome do artigo: ");
        scanf(" %[^\n]", nomeArtigo[i]);  // Lê nome com espaços

        printf("Preço: R$ "); scanf("%f", &preco[i]);
        printf("Percentual de desconto (%%): "); scanf("%f", &desc[i]);

        precoDesc[i] = preco[i] - (preco[i] * desc[i] / 100);
        total += precoDesc[i];
    }

    printf("\n----------------------------- NOTA FISCAL CLIENTE ----------------------------");
    printf("\n| %-30s | %10s  | %10s | %15s |", "Nome do Artigo", "Preço", "(%) Desc.", "Com Desconto");
    printf("\n------------------------------------------------------------------------------");

    for (int i = 0; i < 4; i++) {
        printf("\n| %-30s | %10.2f | %10.2f | %15.2f |", nomeArtigo[i], preco[i], desc[i], precoDesc[i]);
    }

    printf("\n------------------------------------------------------------------------------");
    printf("\n| TOTAL A PAGAR: R$ %-56.2f |\n", total);
    printf("------------------------------------------------------------------------------\n");

    return 0;
}