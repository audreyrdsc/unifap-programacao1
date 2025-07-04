//31. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20]
//e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>

int main() {
    int valor, contDentro = 0, contFora = 0;

    for (int i = 0; i < 10; i++) {
        
        printf("Digite o valor: "); scanf("%d", &valor);
        
        if (valor >= 10 && valor <= 20) {
            contDentro++;
        } else {
            contFora++;
        }
    }

    printf("\n----- -----  -----  ----- RESULTADO -----  -----  ----- -----");
    printf("\nQuantidade de números dentro do intervalo [10 - 20]: %d", contDentro);
    printf("\nQuantidade de números fora do intervalo [10 - 20]: %d", contFora);
    printf("\n-------------------------------------------------------------");
    
    return 0;
}