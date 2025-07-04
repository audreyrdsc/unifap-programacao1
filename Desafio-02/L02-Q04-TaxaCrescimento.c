//4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros 
//por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior
// que Chico.

#include <stdio.h> 

int main() {
    float altChico = 1.50, altZe = 1.10, taxaChico = 0.02, taxaZe = 0.03;
    int contAnos = 0;

    while (altZe < altChico ) 
    {
        altChico += taxaChico;
        altZe += taxaZe;
        contAnos++;
        printf("\nAno: %d  |  Altura Chico: %.2f m  |  Altura Zé: %.2f m", contAnos, altChico, altZe);
    }

    printf("\n\n*** *** *** RESUMO DO HISTÓRICO DE CRESCIMENTO *** *** ***");
    printf("\nSerão necessários %d anos para Zé ficar maior que Chico ", contAnos);
    printf("\nAltura de Chico: %.2f após %d anos", altChico, contAnos);
    printf("\nAltura de Zé: %.2f após %d anos", altZe, contAnos);
    
    return 0;
}