//75. Faça um programa que receba o valor da venda, escolha a condição de pagamento no menu e mostre o total 
//da venda final conforme condições a seguir: 
//Venda a Vista - desconto de 10% 
//Venda a Prazo 30 dias - desconto de 5% 
//Venda a Prazo 60 dias - mesmo preço 
//Venda a Prazo 90 dias - acréscimo de 5% 
//Venda com cartão de débito - desconto de 8% 
//Venda com cartão de crédito - desconto de 7% 

#include <stdio.h>

int main() {
    float valorVenda, valorFinal;
    int opcao;

    printf("Digite o valor da venda: ");
    scanf("%f", &valorVenda);

    printf("Escolha a condição de pagamento:\n");
    printf("1. Venda à Vista (10%% de desconto)\n");
    printf("2. Venda a Prazo 30 dias (5%% de desconto)\n");
    printf("3. Venda a Prazo 60 dias (mesmo preço)\n");
    printf("4. Venda a Prazo 90 dias (5%% de acréscimo)\n");
    printf("5. Venda com cartão de débito (8%% de desconto)\n");
    printf("6. Venda com cartão de crédito (7%% de desconto)\n");
    printf("Digite a opção (1-6): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            valorFinal = valorVenda * 0.90; // 10% de desconto
            break;
        case 2:
            valorFinal = valorVenda * 0.95; // 5% de desconto
            break;
        case 3:
            valorFinal = valorVenda; // mesmo preço
            break;
        case 4:
            valorFinal = valorVenda * 1.05; // 5% de acréscimo
            break;
        case 5:
            valorFinal = valorVenda * 0.92; // 8% de desconto
            break;
        case 6:
            valorFinal = valorVenda * 0.93; // 7% de desconto
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("O valor final da venda é: R$ %.2f\n", valorFinal);

    return 0;
}