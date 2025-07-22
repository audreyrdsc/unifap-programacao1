//41. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores dois salários
//mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e mais 5% do valor das vendas.
//Faça um algoritmo que determine o salário total de um vendedor.

#include <stdio.h>

int main() {

    float salMinimo = 1412.0, comissao = 0.0, totalVendas, adicional = 0.0;
    int qtdeCarros;
    char nomeVendedor[20];

    printf("\nInforme o nome do vendedor: "); scanf("%s", nomeVendedor);
    printf("Quantidade de carros vendidos: "); scanf("%d", &qtdeCarros);
    printf("Total de vendas: R$ "); scanf("%f", &totalVendas);

    comissao = qtdeCarros * 50.0;
    adicional = totalVendas * 0.05;

    float salFixo = 2 * salMinimo;
    float salarioTotal = salFixo + comissao + adicional;

    printf("\n-------------------------------------- RELATÓRIO DE VENDAS --------------------------------------");
    printf("\n| %-20s | %11s | %14s | %10s | %11s | %13s |", "Nome do Vendedor", "Sal. Fixo", "Qtde. Carros", "Comissão", "Adicional", "Tot. Vendas");
    printf("\n| %-20s | %11.2f | %14d | %10.2f | %11.2f | %13.2f |", nomeVendedor, salFixo, qtdeCarros, comissao, adicional, totalVendas);
    printf("\n--------------------------------------------------------------------------------------------------");
    printf("\nSalário total: R$ %.2f\n", salarioTotal);

    return 0;
}