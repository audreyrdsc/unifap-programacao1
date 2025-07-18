//24. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a 
//velocidade em m/s (metros por segundo).

#include <stdio.h>

int main() {

    float velKmh, velMS;

    printf("\nInforme a velocidade em Km/h: "); scanf("%f", &velKmh);

    velMS = velKmh / 3.6;

    printf("\n%.2f Km/h representa %.2f m/s ", velKmh, velMS);

    return 0;
}