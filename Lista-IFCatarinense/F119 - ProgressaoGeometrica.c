//119. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética), a1 
//(o primeiro termo da progressão) e r (a razão da progressão) e escreva os n termos desta progressão, 
//bem como a soma dos elementos.

#include <stdio.h>
#include <math.h>

int main() {
    int n, a1, r, termo, soma = 0;

    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);
    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Digite a razao (r): ");
    scanf("%d", &r);

    printf("Os termos da progressao geometrica sao:\n");

    for (int i = 0; i < n; i++) {
        termo = a1 * pow(r, i); 
        printf("%d ", termo);   
        soma += termo;          
    }

    printf("\nA soma dos elementos e: %d\n", soma);

    return 0;
}