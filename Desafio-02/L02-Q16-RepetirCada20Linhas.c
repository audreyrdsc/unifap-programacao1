//16. Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela 
//com cabeçalho, que deve ser repetido a cada 20 linhas. A tabela conterá o valor lido, seu quadrado, seu cubo e 
//sua raiz quadrada.

#include <stdio.h>
#include <math.h>

int main() {
    int valor, linha = 0;

    printf("\nDigite valores inteiros (9999 para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%d", &valor);

        if (valor == 9999) {
            break;
        }

        if (linha % 20 == 0) {
            printf("\n| Valor Lido | Quadrado |   Cubo   | Raiz Quadrada |\n");
        }

        float quadrado = valor * valor;
        float cubo = valor * valor * valor;
        float raiz = sqrt(valor);

        printf("| %10d | %8.2f | %8.2f | %14.2f |\n", valor, quadrado, cubo, raiz);
        linha++;
    }

    return 0;
}
