//63. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O algoritmo deve 
//receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo: 
//Código do produto   Preço unitário
//1001                5,32
//1324                6,45
//6548                2,37 
//0987                5,32 
//7623                6,45

#include <stdio.h>

int main() {
    int codigo_produto, quantidade;
    float preco_unitario, preco_total;

    printf("\n------------- TABELA DE VALORES ------------------");
    printf("\nCódigo do produto   Preço unitário");
    printf("\n1001                5,32");
    printf("\n1324                6,45");
    printf("\n6548                2,37");
    printf("\n0987                5,32");
    printf("\n7623                6,45\n");

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo_produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    switch (codigo_produto) {
        case 1001:
            preco_unitario = 5.32;
            break;
        case 1324:
            preco_unitario = 6.45;
            break;
        case 6548:
            preco_unitario = 2.37;
            break;
        case 987:
            preco_unitario = 5.32;
            break;
        case 7623:
            preco_unitario = 6.45;
            break;
        default:
            printf("Codigo de produto invalido.\n");
            return 1;
    }

    preco_total = preco_unitario * quantidade;

    printf("Preco total a pagar: R$ %.2f\n", preco_total);

    return 0;
}
       
       
       
      
       