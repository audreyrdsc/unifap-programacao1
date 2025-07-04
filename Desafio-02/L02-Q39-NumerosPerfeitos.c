//39. Escrever um algoritmo que gera e escreve os 5 primeiros números perfeitos. Um número perfeito é aquele 
//que é igual a soma dos seus divisores. (Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).

#include <stdio.h>

int main() {
    int contNumPerfeito = 0;
    int inicial = 1, soma;

    printf("\nOs 5 primeiros números perfeitos são: \n ");

    while (contNumPerfeito != 5) {
        
        soma = 0;
        
        for (int i = 1; i < inicial; i++) {
            
            if (inicial % i == 0) {
                soma += i;
            }
        }

        if (soma == inicial) {
            printf("%d ", inicial);
            contNumPerfeito++;
        }

        inicial++;
    }

    return 0;
}