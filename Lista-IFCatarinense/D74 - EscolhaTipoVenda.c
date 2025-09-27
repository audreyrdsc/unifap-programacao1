//74. O programa de uma loja de móveis mostra o seguinte menu na tela de vendas: 
//1-Venda a Vista 
//2-Venda a Prazo 30 dias 
//3-Venda a Prazo 60 dias 
//4-Venda a Prazo com 90 dias 
//5-Venda com cartão de débito 
//6-Venda com cartão de crédito 
//Escolha a opção: 

#include <stdio.h>

int main() {
    int opcao;

    printf("Menu de opcoes de venda:\n");
    printf("1 - Venda a Vista\n");
    printf("2 - Venda a Prazo 30 dias\n");
    printf("3 - Venda a Prazo 60 dias\n");
    printf("4 - Venda a Prazo com 90 dias\n");
    printf("5 - Venda com cartao de debito\n");
    printf("6 - Venda com cartao de credito\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch(opcao) 
    {
        case 1:
            printf("Voce escolheu: Venda a Vista\n");
            break;
        case 2:
            printf("Voce escolheu: Venda a Prazo 30 dias\n");
            break;
        case 3:
            printf("Voce escolheu: Venda a Prazo 60 dias\n");
            break;
        case 4:
            printf("Voce escolheu: Venda a Prazo com 90 dias\n");
            break;
        case 5:
            printf("Voce escolheu: Venda com cartao de debito\n");
            break;
        case 6:
            printf("Voce escolheu: Venda com cartao de credito\n");
            break;
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}