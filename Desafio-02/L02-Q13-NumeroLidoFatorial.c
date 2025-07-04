//13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. 
//Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.

#include <stdio.h>

int main() {
    int n, valor, fatorial;

    printf("\nDigite a quantidade de valores a serem lidos: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nDigite o número para imprimir o fatorial: "); scanf("%d", &valor);
        
         fatorial = 1;

        for (int f = valor; f >= 1; f--) {
            fatorial *= f;
        }
        printf("\n_________________________________");
        printf("\n|Número lido: %d | Fatorial: %d |", valor, fatorial);
        printf("\n---------------------------------");
    }

    return 0;

}