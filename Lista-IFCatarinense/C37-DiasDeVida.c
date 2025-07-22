//37. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. 
//Considere que um mês tenha 30 dias.

#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;

    printf("Digite sua idade completa:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    totalDias = (anos * 12 * 30) + (meses * 30) + dias;

    printf("\nVocê já viveu aproximadamente %d dias.\n", totalDias);

    return 0;
}
