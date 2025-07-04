//Questão 02. Escreva um programa em C que apresente uma pirâmide de números como a que se segue. Para isso 
//deverá pedir ao utilizador o valor de N que deverá ser obrigatoriamente maior ou igual 2. A pirâmide 
//apresentada é o exemplo para N = 5. 

#include <stdio.h>

int main() {

    int n = 0, meio;

    while (n < 2) {
        printf("\nInforme o valor de (N) "); scanf("%d", &n);

        if (n < 0) {
            printf("\nErro: O valor de (N) deve ser positivo ");
        } else if (n < 2) {
            printf("\nErro: O valor de (N) deve ser maior ou igual a 2 ");
        }
    }


    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++) {
            printf("  "); //necessários 2 espaços para alinhar
        }

        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        for (int t = i - 1; t >= 1; t--) {
            printf("%d ", t);
        }

        printf("\n");
    }

    return 0;
}