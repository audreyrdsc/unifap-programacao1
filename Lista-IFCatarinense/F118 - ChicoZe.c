//118. Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3 centímetros 
//por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que 
//Chico.

#include <stdio.h>

int main() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (ze <= chico) 
    {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);
    return 0;
}