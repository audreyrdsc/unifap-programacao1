//82. Construa um algoritmo que, tendo como dados de entrada o preço de um produto e um código de origem, 
//mostre o preço junto de sua procedência (ex. 500,00 – Sul). Caso o código não seja nenhum dos especificados, 
//o produto deve ser encarado como importado. 
//Código de origem  
//1           – Sul 
//5 ou 6      – Nordeste 
//2           – Norte 
//3           – Leste 
//4           – Oeste 
//7 ou 8 ou 9 – Sudeste 
//10 até 20   – Centro Oeste 
//25 até 35   – Nordeste 

#include <stdio.h>

int main() {
    float preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    printf("Preco: %.2f - Procedencia: ", preco);

    switch (codigo) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        default:
            if (codigo >= 10 && codigo <= 20) {
                printf("Centro Oeste\n");
            } else if (codigo >= 25 && codigo <= 35) {
                printf("Nordeste\n");
            } else {
                printf("Importado\n");
            }
            break;
    }

    return 0;
}
