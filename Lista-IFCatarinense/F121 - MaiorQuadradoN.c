//121. Faça um algoritmo que leia um número inteiro N, calcule e mostre o maior quadrado menor ou igual a N. 
//Por exemplo, se N for igual a 38, o Menor quadrado é 36 (quadrado de 6). 

#include <stdio.h>
#include <math.h>

int main() {
    int N, maiorQuadrado, raiz;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    raiz = (int)sqrt(N); // Calcula a raiz quadrada inteira de N
    maiorQuadrado = raiz * raiz; // Calcula o maior quadrado menor ou igual a N

    printf("O maior quadrado menor ou igual a %d e: %d\n", N, maiorQuadrado);

    return 0;
}