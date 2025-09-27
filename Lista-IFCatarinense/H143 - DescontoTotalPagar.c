//143. Refaça o algoritmo do exercício 42 usando registro.

#include <stdio.h>

struct Artigo {
    char nome[50];
    float preco;
    float desconto;
};

int main() {
    struct Artigo artigos[4];
    float precoComDesconto;
    float total = 0.0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o nome do artigo %d: ", i + 1);
        scanf(" %49[^\n]", artigos[i].nome);
        printf("Digite o preco do artigo %d: ", i + 1);
        scanf("%f", &artigos[i].preco);
        printf("Digite o percentual de desconto do artigo %d: ", i + 1);
        scanf("%f", &artigos[i].desconto);
        printf("\n");
    }

    printf("\n--- Detalhes dos artigos ---\n");
    for (int i = 0; i < 4; i++) {
        precoComDesconto = artigos[i].preco * (1 - artigos[i].desconto / 100.0);
        total += precoComDesconto;
        printf("Artigo: %s\n", artigos[i].nome);
        printf("Preco original: R$ %.2f\n", artigos[i].preco);
        printf("Preco com desconto: R$ %.2f\n\n", precoComDesconto);
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
