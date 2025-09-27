//84. Crie um algoritmo que execute as funcionalidades da conta-corrente de uma pessoa. Toda a conta tem um 
//número, uma pessoa vinculada e um saldo. O saldo é atualizado conforme o tipo de movimentação bancária: 
//depósito ou retirada. Se for um depósito, o dinheiro é creditado ao saldo; se for retirada, o dinheiro é 
//debitado do saldo.

#include <stdio.h>
#include <string.h>

struct ContaCorrente {
    int numero;
    char pessoa[100];
    float saldo;
};

void exibirSaldo(struct ContaCorrente conta) {
    printf("Saldo atual da conta %d de %s: R$ %.2f\n", conta.numero, conta.pessoa, conta.saldo);
}

int main() {
    struct ContaCorrente minhaConta;
    int opcao;
    float valor;

    minhaConta.numero = 123456;
    strcpy(minhaConta.pessoa, "João Silva");
    minhaConta.saldo = 0.0;

    do {
        printf("\n===== MENU CONTA CORRENTE =====\n");
        printf("1 - Exibir saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Retirar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirSaldo(minhaConta);
                break;

            case 2:
                printf("Digite o valor do deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    minhaConta.saldo += valor;
                    printf("Deposito de R$ %.2f realizado com sucesso!\n", valor);
                } else {
                    printf("Valor de deposito invalido!\n");
                }
                break;

            case 3:
                printf("Digite o valor da retirada: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= minhaConta.saldo) {
                    minhaConta.saldo -= valor;
                    printf("Retirada de R$ %.2f realizada com sucesso!\n", valor);
                } else if (valor > minhaConta.saldo) {
                    printf("Saldo insuficiente para retirada de R$ %.2f!\n", valor);
                } else {
                    printf("Valor de retirada invalido!\n");
                }
                break;

            case 0:
                printf("Encerrando sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
