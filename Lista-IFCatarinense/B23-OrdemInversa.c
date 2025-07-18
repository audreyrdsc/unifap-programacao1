//23. Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa ordem, e imprima 
//em ordem inversa, isto é, se os dados lidos forem 5 e 9, por exemplo, devem ser impressos na 
//ordem 9 e 5.

#include <stdio.h>

int main() {

    int numA, numB, aux;

    printf("\nInforme o valor de numA: "); scanf("%d", &numA);
    printf("Informe o valor de numB: "); scanf("%d", &numB);

    printf("\nOrdem de digitação: %d e %d", numA, numB);

    aux = numA;
    numA = numB;
    numB = aux;

    printf("\nOrdem inversa: %d e %d", numA, numB);

    return 0;
}