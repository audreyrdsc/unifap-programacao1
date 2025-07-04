//8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. 
//Termine a leitura se, o usuário digitar zero (0).

#include <stdio.h>

int main() {
    int contPar = 0, numero, acumulaPar = 0;
    float media = 0.0;
    
    while (numero != 0) {

        printf("\nDigite o número desejado: "); scanf("%d", &numero);
            
        if (numero != 0) {
            if (numero % 2 == 0) {
                printf("\nO número %d é par e será considerado na média\n", numero);
                acumulaPar += numero;
                contPar++;
            } else {
                printf("\nO número %d é ímpar e não será considerado na média\n", numero);
            }
                
        } else {
            if (contPar != 0) {
                media = acumulaPar / contPar;
                printf("\n*** *** **** RESULTADO **** *** ***");
                printf("\nA média dos %d números pares é: %.2f \n\n", contPar, media);
            }
        }
            
    }

    return 0;
}