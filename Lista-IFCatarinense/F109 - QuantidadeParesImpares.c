//109. Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) 
//e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para 
//fim de leitura. 
//Ex.: 1,2,3,4,5 => Pares=2  Impares=3 

#include <stdio.h>

int main() {
    int numero, QPares = 0, QImpares = 0;

    printf("Digite uma sequencia de numeros (9999 para terminar):\n");

    while (1) 
    {
        scanf("%d", &numero);
        
        if (numero == 9999) 
        {
            break;
        }

        if (numero % 2 == 0) 
        {
            QPares++;        } 
        else 
        {
            QImpares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", QPares);
    printf("Quantidade de numeros impares: %d\n", QImpares);

    return 0;
}