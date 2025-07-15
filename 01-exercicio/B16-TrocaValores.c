//16. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores 
//de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir 
//o valor da variável A. Apresente os valores trocados.

#include <stdio.h>

int main() {
    int a, b, aux;

    printf("\nDigite o valor inteiro de A: "); scanf("%d", &a);
    printf("\nDigite o valor inteiro de B: "); scanf("%d", &b);


    printf("\n---------- TROCA DE VALORES DE VARIÁVEIS ----------");
    printf("\nA ordem inicial digitada é A = %d e B = %d", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("\nA ordem invertida fica A = %d e B = %d", a, b);
    printf("\n---------------------------------------------------");

    return 0;

}