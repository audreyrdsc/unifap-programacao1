//40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e arruelas. Têm-se os 
//preços unitários de cada tipo de peça e sabe-se que sobre estes preços incidem descontos de 10%
//para porcas, 20% para parafusos e 30% para arruelas. Escreva um algoritmo que calcule o valor 
//total da compra de um cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
//que o mesmo comprou, o total de desconto e o total a pagar pela compra.

#include <stdio.h>

int main() {
    char nomeCliente[50];
    int qtde_parafusos, qtde_porcas, qtde_arruelas;
    float preco_parafusos = 1.5, preco_porcas = 0.5, preco_arruelas = 0.15;
    float valor_total_parafusos, valor_total_porcas, valor_total_arruelas;
    float desconto_parafusos, desconto_porcas, desconto_arruelas;
    float subtotal_parafusos, subtotal_porcas, subtotal_arruelas;
    float total_geral;

    printf("\n---------- MÓDULO DE VENDA DE PRODUTOS ----------\n");
    printf("Informe o nome do cliente: ");
    scanf("%s", nomeCliente);

    printf("Quantidade de parafusos: ");
    scanf("%d", &qtde_parafusos);

    printf("Quantidade de porcas: ");
    scanf("%d", &qtde_porcas);

    printf("Quantidade de arruelas: ");
    scanf("%d", &qtde_arruelas);

    // Cálculos para Parafusos
    valor_total_parafusos = qtde_parafusos * preco_parafusos;
    desconto_parafusos = valor_total_parafusos * 0.20;
    subtotal_parafusos = valor_total_parafusos - desconto_parafusos;

    // Cálculos para Porcas
    valor_total_porcas = qtde_porcas * preco_porcas;
    desconto_porcas = valor_total_porcas * 0.10;
    subtotal_porcas = valor_total_porcas - desconto_porcas;

    // Cálculos para Arruelas
    valor_total_arruelas = qtde_arruelas * preco_arruelas;
    desconto_arruelas = valor_total_arruelas * 0.30;
    subtotal_arruelas = valor_total_arruelas - desconto_arruelas;

    // Total geral da compra
    total_geral = subtotal_parafusos + subtotal_porcas + subtotal_arruelas;

// Impressão do relatório
printf("\n------------------------- NOTA FISCAL CLIENTE ------------------------");
printf("\nCliente: %s", nomeCliente);
printf("\n----------------------------------------------------------------------");
printf("\n%-12s %5s %10s %10s %14s %14s", "Produto", "Qtde", "V. Unit", "V. Total", "Desconto(R$)", "Subtotal(R$)");
printf("\n%-12s %5d %10.2f %10.2f %14.2f %14.2f", "Parafusos", qtde_parafusos, preco_parafusos, valor_total_parafusos, desconto_parafusos, subtotal_parafusos);
printf("\n%-12s %5d %10.2f %10.2f %14.2f %14.2f", "Porcas", qtde_porcas, preco_porcas, valor_total_porcas, desconto_porcas, subtotal_porcas);
printf("\n%-12s %5d %10.2f %10.2f %14.2f %14.2f", "Arruelas", qtde_arruelas, preco_arruelas, valor_total_arruelas, desconto_arruelas, subtotal_arruelas);
printf("\n----------------------------------------------------------------------");
printf("\nTOTAL GERAL DA COMPRA: R$ %.2f\n\n", total_geral);

    return 0;
}
