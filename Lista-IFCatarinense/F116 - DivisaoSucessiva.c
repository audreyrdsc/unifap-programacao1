//116. Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) ate que o resultado seja menor 
//que 1. Mostre o resultado da ultima divisão e a quantidade de divisões efetuadas. 

#include <stdio.h>

int main() {
    float numero, resultado;
    int contador = 0;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    resultado = numero;

    while (resultado >= 1) 
    {
        resultado = resultado / 2;
        contador++;
    }

    printf("Resultado da ultima divisao: %.2f\n", resultado);
    printf("Quantidade de divisoes efetuadas: %d\n", contador);

    return 0;
}