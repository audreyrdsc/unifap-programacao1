// 36. Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir. 
//Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.

#include <stdio.h>

int main() {
    int n, valor, fatorial;

    printf("\nInforme o número de leituras (N): "); scanf("%d", &n);

    if (n > 0) {

        for (int i = 0; i < n; i++) {

            printf("--> Digite um número inteiro positivo: "); scanf("%d", &valor);

            if (valor >= 0) {
                
                fatorial = 1;
                
                for (int j = valor; j >= 1; j--) {
                    fatorial *= j;
                }

                printf("Valor: %d\tFatorial: %d\n", valor, fatorial);

            } else {
                printf("⚠️ Valor inválido! Fatorial não definido para negativos.\n");
                i--;
            }
        }

    } else {
        printf("\n⚠️ N deve ser inteiro e positivo.\n");
    }

    return 0;

}