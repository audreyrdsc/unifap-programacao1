//26. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador 
//como contribuição à previdência social. Após esse desconto, há um outro desconto de 5% sobre o 
//valor restante do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o 
//salário bruto de um cidadão e imprima o seu salário líquido. 
//DICA: Para a solução dos exercícios abaixo utilize os operadores de divisão inteira e de módulo.

#include <stdio.h>

int main() {
    int salBruto, inss, salAposInss;
    int imposto, salLiquido;

    printf("\nInforme o Salário Bruto (em reais, sem centavos): ");
    scanf("%d", &salBruto);

    // Desconto de 10% para o INSS
    inss = salBruto * 10 / 100;
    salAposInss = salBruto - inss;

    // Desconto de 5% sobre o valor restante
    imposto = salAposInss * 5 / 100;
    salLiquido = salAposInss - imposto;

    printf("\n-------- -------- -- IMPRESSÃO DO CONTRACHEQUE -- -------- --------");
    printf("\nSalário Bruto: R$ %d", salBruto);
    printf("\nDesconto INSS (10%%): R$ %d  | Saldo: R$ %d", inss, salAposInss);
    printf("\nDesconto Imposto (5%%): R$ %d | Saldo: R$ %d", imposto, salLiquido);
    printf("\nSalário Líquido: R$ %d", salLiquido);
    printf("\n---------------------------------------------------------------------");

    return 0;
}
