//Questão 03. Implemente um programa que desenhe o losango abaixo na tela. O usuário deve informar a largura 
//central do losango.

#include <stdio.h>

int main() {

    int largura, meio;

    printf("\nInforme a largura central do losango: "); scanf("%d", &largura);

    if (largura % 2 == 0) {
        printf("\nA largura deve ser ímpar!");
        return 1;
    } 

    meio = largura / 2;

    //Parte superior do losango
    for (int i = 0; i <= meio; i++) {

        for (int j = 0; j < meio - i; j++) { //imprime a qtde de espaços por linha
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++) { //imprime a qtde de asteriscos
            printf("*");
        }

        printf("\n");
    }

    for (int i = meio - 1; i >= 0; i--) {

        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");

    }

    return 0;
}