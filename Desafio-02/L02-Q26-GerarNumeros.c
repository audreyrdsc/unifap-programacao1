//26. Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto 
//igual a 5.

#include <stdio.h>

int main() {

    for (int i = 1000; i <= 1999; i++) {
        if (i % 11 == 5) {
            printf("\n%d dividido por 11 tem resto igual a 5 ", i);
        }
        
    }
    
    return 0;
}