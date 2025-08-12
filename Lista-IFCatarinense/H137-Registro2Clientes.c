//137. Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias são:
//nome, endereço e telefone. Deve ser usada uma estrutura de registro para a construção deste 
//cadastro, usando Type para a declaração do registro.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[60];
    char endereco[100];
    char telefone[15];
} Cliente;

int main() {

    Cliente clientes[2];

     for (int i = 0; i < 2; i++) {
        printf("\n---------- CADASTRO DO CLIENTE %d ----------\n", i + 1);
        
        printf("Nome: ");
        fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
        clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';

        printf("Endereço: ");
        fgets(clientes[i].endereco, sizeof(clientes[i].endereco), stdin);
        clientes[i].endereco[strcspn(clientes[i].endereco, "\n")] = '\0';

        printf("Telefone: ");
        fgets(clientes[i].telefone, sizeof(clientes[i].telefone), stdin);
        clientes[i].telefone[strcspn(clientes[i].telefone, "\n")] = '\0';
    }

    printf("\n\n---------- RELATÓRIO DE CLIENTES ----------\n");
    printf("| %-3s | %-20s | %-35s | %-15s |\n", "ID", "Nome", "Endereço", "Telefone");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < 2; i++) {
        printf("| %03d | %-20s | %-35s | %-15s |\n", 
               i + 1, clientes[i].nome, clientes[i].endereco, clientes[i].telefone);
    }
    return 0;
}