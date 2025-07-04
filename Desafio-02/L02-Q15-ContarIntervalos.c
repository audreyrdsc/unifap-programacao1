//15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos
//seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido
//um número negativo.

#include <stdio.h>

int main() {
    int num;
    int cont_0_25 = 0, cont_26_50 = 0, cont_51_75 = 0, cont_76_100 = 0;
    int contFora = 0, contTotal = 0;

    printf("Digite números inteiros (número negativo para encerrar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        contTotal++;

        if (num >= 0 && num <= 25) {
            cont_0_25++;
        } else if (num >= 26 && num <= 50) {
            cont_26_50++;
        } else if (num >= 51 && num <= 75) {
            cont_51_75++;
        } else if (num >= 76 && num <= 100) {
            cont_76_100++;
        } else {
            contFora++;
        }
    }

    printf("\n\n*** RESUMO DOS CÁLCULOS ***");
    printf("\nNúmeros entre 0 e 25: %d", cont_0_25);
    printf("\nNúmeros entre 26 e 50: %d", cont_26_50);
    printf("\nNúmeros entre 51 e 75: %d", cont_51_75);
    printf("\nNúmeros entre 76 e 100: %d", cont_76_100);
    printf("\nNúmeros fora dos intervalos: %d", contFora);
    printf("\nTotal de números válidos lidos: %d\n", contTotal);

    return 0;
}
