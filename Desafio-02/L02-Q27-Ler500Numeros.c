//27. Escreva um algoritmo que leia 500 valores inteiros e positivos e:  
//a) encontre o maior valor;
//b) encontre o menor valor;
//c) calcule a média dos números lidos.

#include <stdio.h>

int main() {
    int numero, menor = -1, maior = -1, soma = 0, contNum = 0;
    float media = 0.0;

    for (int i = 0; i < 500; i++) {

        printf("Digite um número inteiro e positivo "); scanf("%d", &numero);

        if (numero < 0) {
            printf("\n\nAVISO: Número desconsiderado. Apenas inteiros e positivos\n");
        } else {

            if (menor == -1 || numero < menor) {
                menor = numero;
            }

            if (maior == -1 || numero > maior) {
                maior = numero;
            }

            contNum++;
            soma += numero;
        }
    }

    media = soma / (float) contNum; 

    printf("\n------- RESUMO DOS CÁLCULOS -------");
    printf("\nO maior valor lido foi %d", maior);
    printf("\nO menor valor lido foi %d", menor);
    printf("\nA soma dos valores lidos é de %d", soma);
    printf("\nA média dos valores lidos é de %.2f", media);
    printf("\n------------------------------------");
    
    return 0;
}