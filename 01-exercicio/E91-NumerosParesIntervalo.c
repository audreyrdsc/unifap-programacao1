#include <stdio.h>

//Exibir os números pares entre 85 e 907 e soma
int main() {
    int soma = 0;
    for (int i = 86; i < 907; i+=2) {
        printf("\n %d", i);
        soma += i;
    }

    printf("\nA soma desses números pares é %d ", soma);

    return 0;
}