//36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão calculada 
//de acordo com o valor de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 
//a comissão será de 12% do valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00
//e R$ 50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão 
//será de 7%. Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de
//cada um dos corretores. O relatório deve mostrar também o total de vendas da empresa.

#include <stdio.h>

int main() {

    int corretor;
    float valorVenda[3], comissao[3];
    float totalVendas = 0.0;

    for (int i = 0; i < 3; i++) {

        printf("# Informe o total de venda do Corretor %02d: R$ ", i + 1); scanf("%f", &valorVenda[i]);

        if (valorVenda[i] > 50000.0) {
            comissao[i] = valorVenda[i] * 0.12;
        } else if (valorVenda[i] >= 30000.0 && valorVenda[i] < 50000.0) {
            comissao[i] = valorVenda[i] * 0.095;
        } else {
            comissao[i] = valorVenda[i] * 0.07;
        }

        totalVendas += valorVenda[i];
    }

    printf("\n--------------- RELATÓRIO DE VENDAS -------------\n");
    printf("| %-12s | %-16s | %-12s |\n", "Corretor", "Valor em Vendas", "Comissão");

    for (int i = 0; i < 3; i++) {
        printf("| Corretor %02d  | R$ %13.2f | R$ %8.2f |\n", i + 1, valorVenda[i], comissao[i]);
    }

    printf("-------------------------------------------------\n");
    printf("| %-12s | R$ %13.2f |\n", "TOTAL DE VENDAS ------->  ", totalVendas);

    return 0;
}