//18. Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um 
//de cada vez. Se m for par, verificar quantos divisores possui e escrever esta informação. Se m for ímpar e 
//menor do que 10 calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever
//a soma dos inteiros de 1 até m.

#include <stdio.h>

int main() {
    int m, contDivPar = 0, somaInteiros= 0, fatorial;

    while (1) {

        printf("\nInforme o valor de M: "); scanf("%d", &m);

        fatorial = 1;

        if (m < 0) {
            break;
        }

        if (m >= 0) {

            if (m % 2 == 0) {

                printf("\n-->> %d é um número par e seus divisores são: ", m);

                for (int i = 1; i <= m; i++) {
                    if (m % i == 0) {
                        contDivPar++;
                        printf("%d, ", i);
                    }
                }

            } else if (m < 10) {

                printf("\n-->> %d é um número ímpar e menor que 10", m);

                //if (m < 10) {
                    for (int f = m; f > 1; f--) {
                        fatorial *= f;
                    }
                    printf("\n-->>O fatorial do número %d é: %d", m, fatorial);
                //}
            } else if (m >= 10) {

                printf("\n-->> %d é um número ímpar e maior ou igual a 10", m);

                for (int s = 1; s <= m; s++) {
                    somaInteiros += s;
                }
                printf("\n-->>A soma dos inteiros de 1 até %d é: %d", m, somaInteiros);
            }

        }

    }
        

    return 0;
}