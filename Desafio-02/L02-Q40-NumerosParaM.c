//40. Escrever um algoritmo que lê um valor n que indica quantos valores devem ser lidos para m, valores inteiros
//e positivos, com leitura de um valor de cada vez. Escreva uma tabela contendo o valor lido, o somatório dos 
//inteiros de 1 até m e o fatorial de m.

#include <stdio.h>

int main() {
    int n, m, fatorial, somatoria;

    printf("\nInforme o número de leituras (N): "); scanf("%d", &n);

    if (n > 0) {

        for (int i = 0; i < n; i++) {

            printf("--> Digite um número inteiro positivo (M): "); scanf("%d", &m);

            if (m >= 0) {
                
                somatoria = 0;
                fatorial = 1;

                for (int k = 1; k <= m; k++) {
                    somatoria += k;
                }
                
                for (int j = m; j >= 1; j--) {
                    fatorial *= j;
                }

                printf("Valor: %d  |  Somatória: %d  |  Fatorial: %d\n", m, somatoria, fatorial);

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