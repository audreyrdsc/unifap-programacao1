//67.  Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado. Por padrão, o aumento será 
//de 15%. Entretanto, deve ser aplicada uma regra diferente para cada faixa salarial. Regras: 
//a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12% 
//b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10% 
//c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7% 
//d) se salarioAtual acima de 3.000,00: aumento igual a 5%. 

#include <stdio.h>

int main() {
    float salarioAtual, salarioAjustado;
    
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);
    
    if (salarioAtual < 1500.00) 
    {
        salarioAjustado = salarioAtual * 1.15;
    } 
    else if (salarioAtual >= 1500.00 && salarioAtual < 1750.00) 
    {
        salarioAjustado = salarioAtual * 1.12;
    } 
    else if (salarioAtual >= 1750.00 && salarioAtual < 2000.00) 
    {
        salarioAjustado = salarioAtual * 1.10;
    } 
    else if (salarioAtual >= 2000.00 && salarioAtual < 3000.00) 
    {
        salarioAjustado = salarioAtual * 1.07;
    } 
    else 
    {
        salarioAjustado = salarioAtual * 1.05;
    }
    
    printf("O novo salario ajustado do funcionario e: R$ %.2f\n", salarioAjustado);
    
    return 0;
}