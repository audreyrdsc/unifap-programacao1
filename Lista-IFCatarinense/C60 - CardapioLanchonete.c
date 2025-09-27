//60. O cardápio de uma lanchonete é o seguinte: 
//Especificação         Preço unitário
//100 Cachorro quentem      1,10
//101 Bauru simples         1,30 
//102 Bauru c/ovo           1,50 
//103 Hamburger             1,10
//104 Cheeseburger          1,30
//105 Refrigerante          1,00
//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele
//lanche. Considere que a cada execução somente será calculado um item.

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    printf("Cardapio da Lanchonete:\n");
    printf("100 - Cachorro quente - R$ 1,10\n");    
    printf("101 - Bauru simples - R$ 1,30\n");
    printf("102 - Bauru c/ovo - R$ 1,50\n");
    printf("103 - Hamburger - R$ 1,10\n");
    printf("104 - Cheeseburger - R$ 1,30\n");
    printf("105 - Refrigerante - R$ 1,00\n");

    printf("\nDigite o codigo do item pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            preco = 1.10;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.10;
            break;
        case 104:
            preco = 1.30;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    total = preco * quantidade;
    printf("O valor a ser pago e: R$ %.2f\n", total);

    return 0;
}