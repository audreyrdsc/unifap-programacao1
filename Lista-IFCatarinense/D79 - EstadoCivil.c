//79. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e mostre uma mensagem com a 
//sua descrição (Solteiro, Casado, Viúvo, Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário.

#include <stdio.h>

int main() {
    char estadoCivil;

    printf("Digite a primeira letra do seu estado civil:\n");
    printf("S - Solteiro\n");
    printf("C - Casado\n");
    printf("V - Viuvo\n");
    printf("D - Divorciado\n");
    printf("X - Desquitado\n");
    scanf(" %c", &estadoCivil);

    switch (estadoCivil) {
        case 'S':
        case 's':
            printf("Estado Civil: Solteiro\n");
            break;
        case 'C':
        case 'c':
            printf("Estado Civil: Casado\n");
            break;
        case 'V':
        case 'v':
            printf("Estado Civil: Viuvo\n");
            break;
        case 'D':
        case 'd':
            printf("Estado Civil: Divorciado\n");
            break;
        case 'X':
        case 'x':
            printf("Estado Civil: Desquitado\n");
            break;
        default:
            printf("Erro: Estado civil invalido!\n");
            break;
    }

    return 0;
}