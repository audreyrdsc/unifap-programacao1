//20. Faça um algoritmo que leia vários números inteiros e calcule o somatório dos números negativos. O fim da 
//leitura será indicado pelo número 0.

#include <stdio.h>

int main() {
    int numero, somaPositiva = 0, somaNegativa = 0;

    while (numero != 0) {

        printf("Digite um número inteiro: "); scanf("%d", &numero);

        if (numero > 0) {
            somaPositiva += numero;
        } else if (numero < 0) {
            somaNegativa += numero;
        }
    }

    printf("\n------ RESUMO DOS CÁLCULOS ------");
    printf("\nA somatória dos números positivos é: %d", somaPositiva);
    printf("\nA somatória dos números negativos é: %d", somaNegativa);

    return 0;

}