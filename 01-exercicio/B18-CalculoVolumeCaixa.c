//18. Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do 
//volume de uma caixa retangular. Utilize para o cálculo a fórmula 
//VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main() {

    float comprimento, largura, altura, volume = 0.0;

    printf("\nInforme o COMPRIMENTO da caixa em (cm): "); scanf("%f", &comprimento);
    printf("Informe o LARGURA da caixa em (cm): "); scanf("%f", &largura);
    printf("Informe o ALTURA da caixa em (cm): "); scanf("%f", &altura);

    volume = (comprimento * largura * altura);

    printf("\n---------- RESULTADO DO CÁLCULO DO VOLUME ----------");
    printf("\nO VOLUME calculado da caixa é de %.2f (litros)", volume / 1000.0);
    printf("\nO VOLUME calculado da caixa é de %.2f (m3)", volume / 1000000.0);

    return 0;
}