//102. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de serviços. A taxa de serviços é de: 
//• R$ 4,00 por diária, se o número de diárias for < 15; 
//• R$ 3,60 por diária, se o número de diárias for = 15; 
//• R$ 3,00 por diária, se o número de diárias for > 15. 
//Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel. 
//Imprima também o total ganho pelo hotel.

#include <stdio.h>

int main() {
    char nome[50];
    int num_diarias;
    float diaria = 50.0, taxa_servico, total_conta, total_hotel = 0.0;

    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o numero de diarias: ");
    scanf("%d", &num_diarias);

    if (num_diarias < 15) {
        taxa_servico = 4.0;
    } else if (num_diarias == 15) {
        taxa_servico = 3.6;
    } else {
        taxa_servico = 3.0;
    }

    total_conta = num_diarias * (diaria + taxa_servico);
    total_hotel += total_conta;

    printf("Nome do cliente: %s", nome);
    printf("Total da conta: R$ %.2f\n", total_conta);
    printf("Total ganho pelo hotel: R$ %.2f\n", total_hotel);

    return 0;
}