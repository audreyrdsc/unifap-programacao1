//25. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o quociente e o 
//resto da divisão inteira de Int1 por Int2.

#include <stdio.h>

int main() {

    int Int1, Int2;
    int quociente = 0, resto = 0;

    printf("\nInforme o valor de Int1 "); scanf("%d", &Int1);
    printf("Informe o valor de Int2 "); scanf("%d", &Int2);

    if (Int2 == 0) {
        printf("\nErro: divisão por zero não é permitida.");
    } else {
        quociente = Int1 / Int2;
        resto = Int1 % Int2;

        printf("\nO quociente da divisão de %d/%d é: %d", Int1, Int2, quociente);
        printf("\nO resto da divisão de %d/%d é: %d", Int1, Int2, resto);
    }

    return 0;
}