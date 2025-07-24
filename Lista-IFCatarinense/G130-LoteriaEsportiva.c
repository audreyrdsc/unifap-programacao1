//130. Escrever um algoritmo que lê um vetor G(13) que é o gabarito de um teste de loteria esportiva,
//contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Ler, a seguir, para cada 
//apostador, o número de seu cartão e um vetor Resposta R (13). Verificar para cada apostador o número
//de acertos e escrever o número do apostador e seu número de acertos. Se tiver 13 acertos, acrescentar 
//a mensagem: "GANHADOR, PARABENS".

#include <stdio.h>

int main() {
    int G[13] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    int R[3][13] = {
        {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1},
        {1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1},
        {3, 3, 3, 2, 2, 2, 1, 1, 1, 3, 2, 1, 1}
    };

    int num_apostadores = 3;
    int cartoes[3] = {101, 102, 103};

    for (int a = 0; a < num_apostadores; a++) {
        int acertos = 0;
        for (int i = 0; i < 13; i++) {
            if (R[a][i] == G[i]) {
                acertos++;
            }
        }

        printf("Cartão %d: %d acertos", cartoes[a], acertos);
        if (acertos == 13) {
            printf(" - GANHADOR, PARABÉNS!");
        }
        printf("\n");
    }

    return 0;
}
