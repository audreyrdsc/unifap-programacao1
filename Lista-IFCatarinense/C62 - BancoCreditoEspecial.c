//62. Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.
//Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a 
//tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito. 
//Saldo médio     Percentual
// de 0 a 200     nenhum crédito   
//de 201 a 400    20% do valor do saldo médio 
//de 401 a 600    30% do valor do saldo médio 
//acima de 601    40% do valor do saldo médio 

#include <stdio.h>

int main() {
    float saldo_medio, valor_credito;

    printf("Digite o saldo medio do cliente: ");
    scanf("%f", &saldo_medio);

    if (saldo_medio >= 0 && saldo_medio <= 200) 
    {
        valor_credito = 0;
    } 
    else if (saldo_medio >= 201 && saldo_medio <= 400) 
    {
        valor_credito = saldo_medio * 0.20;
    } 
    else if (saldo_medio >= 401 && saldo_medio <= 600) 
    {
        valor_credito = saldo_medio * 0.30;
    } 
    else if (saldo_medio > 600) 
    {
        valor_credito = saldo_medio * 0.40;
    } 
    else 
    {
        printf("Saldo medio invalido.\n");
        return 1;
    }

    printf("Saldo medio: R$ %.2f\n", saldo_medio);
    printf("Valor do credito: R$ %.2f\n", valor_credito);

    return 0;
}
 


