// 5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, 
//lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.

#include <stdio.h>

int main() {
    int soma = 0, numero = 0, contNum = 0;;
    float media = 0.0;

    while (numero >= 0) {

        printf("\nDigite o número inteiro e positivo: "); scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
            contNum++;
        } else {
            printf("\nAVISO: São aceitos apenas números positivos. Programa encerrado!");
        }
    }

    media = soma / contNum;

    printf("\nForam inseridos %d números inteiros e positivos.", contNum);
    printf("\nA soma dos valores desses números é: %d", soma);
    printf("\nA média dos valores é: %.2f", media);

    return 0;
}