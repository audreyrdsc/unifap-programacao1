//Questão 06. Escreva um programa em C que apresente uma árvore de Natal como a do exemplo abaixo. Para isso 
//deverá pedir ao usuário o valor de B que representa o número de asteriscos (*) na base da árvore. O valor 
//de B deverá ser obrigatoriamente ímpar e maior ou igual 3. Deverá pedir também o valor de L e A que representam,
//respectivamente a largura e a altura do tronco da árvore. A largura do tronco L deverá ser pelo menos 1 
//asterisco, deverá ser obrigatoriamente impar e não poderá ultrapassar metade de B, isto é metade do número de
//asteriscos da base. A altura do tronco A deverá ser pelo menos 2 asteriscos e não deverá ultrapassar metade 
//de B. Em caso de valores inválidos o programa deverá apresentar um erro e voltar a pedi-los. 
//O exemplo da árvore em baixo tem uma base com B = 13 asteriscos, um tronco com largura L = 3 asteriscos e 
//altura A = 4 asteriscos. 



#include <stdio.h>

int main() {
    int base, largura, altura, erro = 1;
    int metadeB;

    while (erro == 1) {
        printf("\nInforme o valor da base (B) da árvore de natal: "); scanf("%d", &base);
        
        if (base < 0) {
           printf("\nErro: O valor da base (B) deve ser positivo ");
           erro = 1; 
        } else if (base < 3) {
            printf("\nErro: O valor da base (B) deve ser maior ou igual a 3 ");
            erro = 1;
        } else if (base % 2 == 0) {
            printf("\nErro: O valor da base (B) deve ser ímpar ");
            erro = 1;
        } else {
            erro = 0;
        }
    }

    erro = 1; //reiniciar variável;
    metadeB = (base / 2) + 1;

    while (erro == 1) {
        printf("\nInforme a largura (L) do tronco: "); scanf("%d", &largura);
        
        if (largura < 0) {
           printf("\nErro: O valor da largura (L) deve ser positivo ");
           erro = 1; 
        } else if (largura < 1) {
            printf("\nErro: O valor da largura (L) deve ser no mínimo igual a 1 ");
            erro = 1;
        } else if (largura % 2 == 0) {
            printf("\nErro: O valor da largura (L) deve ser ímpar ");
            erro = 1;
        } else if (largura > metadeB) {
            printf("\nErro: O valor da largura (L) deve ser menor ou igual a %d (metade de B)", metadeB);
            erro = 1;
        } else {
            erro = 0;
        }
    }

    erro = 1; //reiniciar variável;

    while (erro == 1) {
        printf("\nInforme a altura (A) do tronco: "); scanf("%d", &altura);
        
        if (altura < 0) {
           printf("\nErro: O valor da altura (A) deve ser positivo ");
           erro = 1;
        } else if (altura < 2) {
           printf("\nErro: O valor da altura (A) deve ser no mínimo igual a 2 ");
           erro = 1;
        } else if (altura > metadeB) {
            printf("\nErro: O valor da altura (L) deve ser menor ou igual a %d (metade de B)", metadeB);
            erro = 1;
        } else {
            erro = 0;
        }
    }

    int meio = base / 2;

    //Impressão do topo da árvore
    for (int i = 0; i <= meio; i++) {

        for (int j = 0; j < meio - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    //Impressão da base da árvore
    for (int i = 0; i < altura; i++) {
        
        for (int j = 0; j < (base - largura) / 2; j++) {
            printf(" ");
        }

        for (int k = 0; k < largura; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}