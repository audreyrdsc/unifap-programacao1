//Questão 05. Faça um programa em C que apresente um triângulo como o do exemplo abaixo. O usuário deve 
//informar qual a altura ele deseja para o triângulo e se ele gostaria que o triângulo fosse apresentado 
//vazado ou preenchido.

#include <stdio.h>

int main() {

    int altura, vazado;

    printf("Digite a altura do triângulo? "); scanf("%d", &altura);

    printf("Vazado digite 0 - Preenchido digite 1 "); scanf("%d", &vazado);
    
    for (int l = 1; l <= altura; l++) {
        for (int c = 1; c <= l; c++) {
            if (vazado == 1) {
                // Triângulo preenchido
                printf("*");
            } else {
                // Triângulo oco
                if (c == 1 || c == l || l == altura) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}