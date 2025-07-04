//Questão 01. Triângulo de Pascal é um triângulo aritmético infinito onde são dispostos os coeficientes das 
//expansões binominais. Abaixo o exemplo de um Triângulo de Pascal até a linha 7 de altura.

//O primeiro e último número de cada linha deve ser 1. Cada número do triângulo de Pascal é igual à soma do 
//número imediatamente acima e do antecessor do número de cima, conforme o gif abaixo demostra.

//Agora que você já sabe o que é um triângulo de pascal, faça um programa em C que, dada a altura do triângulo
//de pascal, desenhe o triângulo resultante.

#include <stdio.h>

int main() {

    int altura;

    printf("Informe a altura do Triângulo de Pascal: "); scanf("%d", &altura);

    for (int i = 0; i < altura; i++) {
        for (int e = 0; e < altura - i - 1; e++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            int numerador = 1, denominador = 1; //variáveis que vão acumular

            // Calcula a combinação C(i, j) = i! / (j! * (i - j)!)
            for (int k = 1; k <= i; k++) { //cálculo do fatorial
                numerador *= k;
            }
            for (int k = 1; k <= j; k++) { //cálculo do fatorial
                denominador *= k;
            }
            for (int k = 1; k <= i - j; k++) { //cálculo do fatorial
                denominador *= k;
            }

            int combinacao = numerador / denominador;

            printf("%4d", combinacao); //Imprime o resultado da combinação
        }

        printf("\n");
    }

    return 0;
}