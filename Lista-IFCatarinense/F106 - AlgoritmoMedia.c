//106. Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma (Soma) e sua média (Media). 
//Admita que o valor 9999 é utilizado como sentinela para fim de leitura. 
//Ex.: 1, 2, 3 => Soma=6  Media=2 

#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    printf("Digite os numeros (9999 para terminar):\n");
    scanf("%d", &numero);

    // enquanto o número não for 9999
    while (numero != 9999) {
        soma += numero;
        contador++;
        scanf("%d", &numero);
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("Soma = %d\n", soma);
        printf("Media = %.2f\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}
