//59. Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é 
//par ou ímpar e se é positivo ou negativo.

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero %d e par\n", num);
    }else{
        printf("O numero %d e impar\n", num);
    }

    if(num >= 0){
        printf("O numero %d e positivo\n", num);
    }else{
        printf("O numero %d e negativo\n", num);
    }

    return 0;
}