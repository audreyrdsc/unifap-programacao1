//21. Faça um algoritmo que leia vários números inteiros e positivos e calcule o produtório dos números pares. 
//O fim da leitura será indicado pelo número 0.

#include <stdio.h>

int main() {
    int numero, produtPares = 1, existePar = 0;

    while (1) {

        printf("Digite um número inteiro positivo: "); scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
           
            if (numero % 2 == 0) {
                        produtPares *= numero;
                        existePar = 1;
            } else {
                printf("\nNúmero desconsiderado\n");    
            }

        } else if (numero < 0) {
            printf("\nAVISO: São aceitos apenas números inteiros e positivos\n");
        }

    }

    if (existePar == 1) {
        printf("\nA produtória dos números pares é: %d\n", produtPares);
    } else if (existePar == 0){
        printf("\nNão foram digitados números pares. Sem produtória calculada!");
    }

    
    
    return 0;

}