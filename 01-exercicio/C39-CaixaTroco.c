#include <stdio.h>

//Questão 39 - Troco
int main() {

    int valorCompra, valorPago, troco;
    int notas100 = 0, notas10 = 0, notas1 = 0;

    printf("Informe o valor da compra em R$ "); scanf("%d", &valorCompra);

    printf("Informe o valor da pago em R$ "); scanf("%d", &valorPago);

    troco = valorPago - valorCompra;

    printf("O troco é de R$ %d\n", troco);

    if (troco >= 100) {
        notas100 = troco / 100;
        troco = troco % 100;
    }
    if (troco >= 10) {
        notas10 = troco / 10;
        troco = troco % 10;
    }
    if (troco >= 1) {
        notas1 = troco;
    }

    printf("\nA compra foi de R$ %d e o valor pago de R$ %d \n", valorCompra, valorPago);
    printf("O troco será composto de: \n");
    printf("%d notas R$ 100,00\n", notas100);
    printf("%d notas R$ 10,00\n", notas10);
    printf("%d notas R$ 1,00\n", notas1);
        
    return 0;

}