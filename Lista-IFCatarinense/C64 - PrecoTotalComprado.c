//64. Um vendedor precisa de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve 
//receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo.
//Mostre uma mensagem no caso de código inválido.  
//Código        Preço Unitário 
//'ABCD'        R$ 5,30
//'XYPK'        R$ 6,00
// 'KLMP'       R$ 3,20
//'QRST'        R$ 2,50 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char codigo[5];
    int quantidade;
    float preco_unitario, preco_total;

    printf("\n---------- TABELA DE PREÇOS ----------");
    printf("\nCódigo        Preço Unitário");
    printf("\nABCD          R$ 5,30");
    printf("\nXYPK          R$ 6,00");
    printf("\nKLMP          R$ 3,20");
    printf("\nQRST          R$ 2,50\n"); 

    printf("\nDigite o código do produto (ABCD, XYPK, KLMP, QRST): ");
    scanf("%4s", codigo);

    for (int i = 0; codigo[i]; i++) {
        codigo[i] = toupper((unsigned char)codigo[i]);
    }

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (strcmp(codigo, "ABCD") == 0) {
        preco_unitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        preco_unitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        preco_unitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        preco_unitario = 2.50;
    } else {
        printf("Código inválido.\n");
        return 1;
    }

    preco_total = preco_unitario * quantidade;

    printf("Preço total devido: R$ %.2f\n", preco_total);

    return 0;
}