//110. Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize as estruturas 
//ENQUANTO-FACA / REPITA-FACA para fazer um laço com as instruções de cálculo e incremento. 
//O laço deve terminar quando o valor de x se tornar 11.

#include <stdio.h>

int main() {
    int x = 1, soma = 0;

    while (x <= 10) 
    {
        soma += x;
        x++;
    }

    printf("A soma dos inteiros de 1 a 10 é: %d\n", soma);

    return 0;
}