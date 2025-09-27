//117. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E. 
//E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! 

#include <stdio.h>

int main() {
    int N, i, fatorial;
    float E = 1.0;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N < 0) 
    {
        printf("Valor invalido! N deve ser um inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) 
    {
        fatorial = 1;
        for (int j = 1; j <= i; j++) 
        {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("O valor de E para N = %d é: %.6f\n", N, E);
    return 0;
}