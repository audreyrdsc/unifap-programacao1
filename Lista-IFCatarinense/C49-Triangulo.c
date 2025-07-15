#include <stdio.h>

//Tipo de triângulo conforme medidas dos lados
int main() {
    int a, b, c;
    
    printf("Digite o lado A do triângulo: "); scanf("%d", &a);

    printf("Digite o lado B do triângulo: "); scanf("%d", &b);

    printf("Digite o lado C do triângulo: "); scanf("%d", &c);

    if(a < (b + c) && b < (a + c) && c < (a + b)) {
    
        if (a == b && a == c) {
            printf("Este triângulo é equilátero com todos os lado iguais");

        } else if (a == b || a == c || b == c) {
            printf("Este triângulo é isósceles com dois lado iguais");
        
        } else {
            printf("Este triângulo é escaleno");
        }

    } else {
        printf("Estas medidas de lados %d, %d e %d não formam um triângulo", a, b, c);
    }
    
    return 0;
}