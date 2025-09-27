//44. Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é vendido por R$ 0.50, o 
//do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um algoritmo que, para cada tipo de picolé, mostre a 
//quantidade vendida e o total arrecadado.

#include <stdio.h>

int main() {
    const float precoTipo1 = 0.50, precoTipo2 = 0.60, precoTipo3 = 0.75;
    int tipoPicole;
    int qtdeTipo1 = 0, qtdeTipo2 = 0, qtdeTipo3 = 0;
    int vendas;

    printf("Quantas vendas deseja registrar? ");
    scanf("%d", &vendas);

    for (int i = 0; i < vendas; i++) {
        printf("Informe o tipo de picolé [1, 2 ou 3]: ");
        scanf("%d", &tipoPicole);

        if (tipoPicole == 1) {
            qtdeTipo1++;
        } else if (tipoPicole == 2) {
            qtdeTipo2++;
        } else if (tipoPicole == 3) {
            qtdeTipo3++;
        } else {
            printf("Tipo inválido! Venda ignorada.\n");
        }
    }

    printf("\n------------ RELATÓRIO DE VENDAS DE PICOLÉS ------------");
    printf("\nForam vendidos %d Picolés do Tipo 1 - Subtotal: R$ %.2f", qtdeTipo1, qtdeTipo1 * precoTipo1);
    printf("\nForam vendidos %d Picolés do Tipo 2 - Subtotal: R$ %.2f", qtdeTipo2, qtdeTipo2 * precoTipo2);
    printf("\nForam vendidos %d Picolés do Tipo 3 - Subtotal: R$ %.2f", qtdeTipo3, qtdeTipo3 * precoTipo3);

    float total = qtdeTipo1 * precoTipo1 + qtdeTipo2 * precoTipo2 + qtdeTipo3 * precoTipo3;
    printf("\nForam vendidos %d picolés. O total arrecadado em vendas foi de R$ %.2f\n", (qtdeTipo1 + qtdeTipo2 + qtdeTipo3), total);

    return 0;
}
