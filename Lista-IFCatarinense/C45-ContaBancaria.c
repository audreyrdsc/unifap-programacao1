//45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de operação a ser 
//realizada (depósito ou retirada) e o valor da operação.
//Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser mostrada, também, a 
//mensagem “conta estourada”.

#include <stdio.h>

int main() {
    int numero, tipoOP;
    float saldo, valor;

    printf("\n----- SISTEMA BANCÁRIO -----");
    printf("\nInforme o número da conta: ");
    scanf("%d", &numero);

    printf("Saldo: R$ ");
    scanf("%f", &saldo);

    printf("Escolha 1-Depósito  | 2-Retirada: ");
    scanf("%d", &tipoOP);

    printf("Digite o valor da operação: R$ ");
    scanf("%f", &valor);

    if (tipoOP == 1) { // depósito
        saldo += valor;
        printf("\nDepósito realizado com sucesso!\n");
    } 
    else if (tipoOP == 2) { // retirada
        saldo -= valor;
        printf("\nRetirada realizada com sucesso!\n");
    } 
    else {
        printf("\nOperação inválida!\n");
        return 1; // encerra
    }

    printf("\n----- EXTRATO BANCÁRIO -----");
    printf("\nConta bancária: %d", numero);
    printf("\nSaldo atual: R$ %.2f", saldo);

    if (saldo < 0) {
        printf("\nConta estourada!\n");
    }

    return 0;
}
