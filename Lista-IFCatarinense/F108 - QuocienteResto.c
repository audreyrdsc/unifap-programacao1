//108. Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e imprima o quociente (Quoc) 
//e o resto (Resto) da divisão de Num1 por Num2, utilizando apenas as operações de adição e subtração. 
//Ex.: N1=10; N2=2 => Q=5 R=0 

#include <stdio.h>

int main() {
    int Num1, Num2, Quoc=0, Resto;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &Num1, &Num2);

    Resto = Num1;

    while (Resto >= Num2)
    {
        Resto = Resto - Num2;
        Quoc++;
    }

    printf("Quociente: %d\nResto: %d\n", Quoc, Resto);

    return 0;
}