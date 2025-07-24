//135. Escreva um algoritmo que lê uma matriz M(5,5) e calcule as somas:  
//a) da linha 4 de M;
//b) da coluna 2 de M;
//c) da diagonal principal;
//d) da diagonal secundária;
//e) de todos os elementos da matriz;
//f) Escreva estas somas e a matriz

#include <stdio.h>

int main() {

    int M[5][5] = {{ 1,  2,  3,  4,  5},
                   { 6,  7,  8,  9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};
    
    int somaL4 = 0, somaC2 = 0, somaDP = 0;
    int somaDS = 0, somaTodos = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            somaTodos += M[i][j];
            
            if (i == 3) {            // Soma da linha 4
                somaL4 += M[i][j];
            }
            if (j == 1) {            // Soma da coluna 2
                somaC2 += M[i][j];
            }
            if (i == j) {            // Diagonal principal
                somaDP += M[i][j];
            }
            if (i + j == 4) {        // Diagonal secundária
                somaDS += M[i][j];
            }
        }
    }

    printf("\n------- RESULTADO DAS SOMAS DA MATRIZ -------");
    printf("\na) da linha 4 de M:  %d", somaL4);
    printf("\nb) da coluna 2 de M: %d", somaC2);
    printf("\nc) da diagonal principal: %d", somaDP);
    printf("\nd) da diagonal secundária: %d", somaDS);
    printf("\ne) de todos os elementos da matriz: %d", somaTodos);
    printf("\nf) Escreva estas somas e a matriz: \n\n");

    for (int i = 0; i < 5; i++) {       //escrita da matriz em tela
        for (int j = 0; j < 5; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}