// 47. Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles anunciando um
//bônus especial. Escreva um algoritmo que leia o nome do cliente e o valor das suas compras no ano passado e 
//calcule um bônus de 10% se o valor das compras for menor que 500.000 e de15 %, caso contrário.

#include <stdio.h>
#include <string.h>

int main() {
    int qtdeClientes = 3;
    char nomeCliente[80];
    float valorCompra, bonus;

    for (int i = 1; i <= qtdeClientes; i++) {
        printf("\nDigite o nome do cliente %d: ", i); scanf(" %[^\n]", nomeCliente);
        printf("\nValor das compras em 2024: "); scanf("%f", &valorCompra);

        if (valorCompra < 500000.0) {
            bonus = valorCompra * 0.10;
        } else {
            bonus = valorCompra * 0.15;
        }

        //Corpo do email a ser enviado:
        printf("\n-------- BÔNUS DE FIDELIZAÇÃO DE CLIENTES --------");
        printf("\nCaro cliente %s, estamos enviando este bônus no ", nomeCliente);
        printf("\nvalor de R$ %.2f, para que retorne a nossa loja.", bonus);
        printf("\nFicaremos felizes em atender.\n");

    }
    

    return 0;

}