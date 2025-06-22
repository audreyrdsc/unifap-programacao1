#include <stdio.h>

int main() {
    int altura, vazado;

    printf("Digite a altura do quadrado "); scanf("%d", &altura);

    printf("Vazado digite 0 - Preenchido digite 1 "); scanf("%d", &vazado);

    for (int l = 1; l <= altura; l++) {
            for (int c = 1; c <= altura; c++) {
                if (vazado == 1) {
                    printf("*");
                } else if (vazado == 0 && (l == 1 || c == 1 || c == altura || l == altura)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        printf("\n");
        }
    return 0;    
}