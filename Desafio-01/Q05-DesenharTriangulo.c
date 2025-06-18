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