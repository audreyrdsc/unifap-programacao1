//46. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de: 
//•  R$ 5.50 por diária, se o número de diárias for maior que 15;
//•  R$ 6.00 por diária, se o número de diárias for igual a 15; 
//•  R$ 8.00 por diária, se o número de diárias for menor que 15. 
//Construa um algoritmo que mostre o nome e o total da conta de um cliente.

#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    int qtdeDiarias = 0;
    const float precoDiaria = 60.00;
    const float taxaServMaior15 = 5.50, taxaServIgual15 = 6.0, taxaServMenor15 = 8.0;
    float totalConta = 0.0;

    printf("\n----- SISTEMA DE HOTELARIA -----");
    
    printf("\nNome do cliente: "); 
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Quantidade de diárias: ");
    scanf("%d", &qtdeDiarias);
    getchar();

    if (qtdeDiarias >= 15) {
        totalConta = (precoDiaria + taxaServMaior15) * qtdeDiarias;
    } else if (qtdeDiarias == 15) {
        totalConta = (precoDiaria + taxaServIgual15) * qtdeDiarias;
    } else {
        totalConta = (precoDiaria + taxaServMenor15) * qtdeDiarias;
    }

    printf("\n--------- RELATÓRIO DE CONTA ---------");
    printf("\nNome do cliente: %s", nome);  
    printf("\nTotal da conta: R$ %.2f", totalConta);    
    printf("\n--------------------------------------");

    return 0;
}