//85. Faça um algoritmo para o jogo “pedra-papel-tesoura”. O jogo deve imprimir vitória, empate ou derrota 
//conforme a opção que o jogador escolher e a opção que for sorteada aleatoriamente pelo computador. 
//Obs.: pedra ganha de tesoura; que ganha de papel; que ganha de pedra.  

//DICA: para gerar valores aleatórios use o comando ALEATORIO, conforme o exemplo abaixo: 
//aleatorio 1, 5    Indica que para gerar um valor aleatório entre 1 e 5 
//leia (numero)     Lê (gera) um número aleatório 
//aleatorio off     Termina o comando Aleatorio 
//escreva (numero)  Escreve o número gerado 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    printf("Escolha uma opcao:\n");
    printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
    scanf("%d", &jogador);

    if (jogador < 1 || jogador > 3) {
        printf("Opcao invalida!\n");
        return 0;
    }

    // Gera um número aleatório entre 1 e 3
    computador = (rand() % 3) + 1;

    printf("Computador escolheu: ");
    switch (computador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
    }

    switch (jogador) {
        case 1: // Pedra
            if (computador == 1) printf("Empate!\n");
            else if (computador == 3) printf("Vitoria! Pedra quebra Tesoura.\n");
            else printf("Derrota! Papel embrulha Pedra.\n");
            break;

        case 2: // Papel
            if (computador == 2) printf("Empate!\n");
            else if (computador == 1) printf("Vitoria! Papel embrulha Pedra.\n");
            else printf("Derrota! Tesoura corta Papel.\n");
            break;

        case 3: // Tesoura
            if (computador == 3) printf("Empate!\n");
            else if (computador == 2) printf("Vitoria! Tesoura corta Papel.\n");
            else printf("Derrota! Pedra quebra Tesoura.\n");
            break;
    }

    return 0;
}
