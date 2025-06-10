#include <stdio.h>

//Receber 3 valores e imprimir em ordem crescente
int main() {
    float v1, v2, v3;

    printf("\nDigite o valor V1: ");
    scanf("%f", &v1);

    printf("\nDigite o valor V2: ");
    scanf("%f", &v2);

    printf("\nDigite o valor V3: ");
    scanf("%f", &v3);

    if (v1 > v2 && v2 > v3) {
        printf("V3: %.2f < V2: %.2f < V1: %.2f ", v3, v2, v1);
    } else if (v1 > v3 && v3 > v2) {
        printf("V2: %.2f < V3: %.2f < V1: %.2f ", v2, v3, v1);
    } else if (v2 > v1 && v1 > v3) {
        printf("V3: %.2f < V1: %.2f < V2: %.2f ", v3, v1, v2);
    } else if (v2 > v3 && v3 > v1) {
        printf("V1: %.2f < V3: %.2f < V2: %.2f ", v1, v3, v2);
    } else if (v3 > v1 && v1 > v2) {
        printf("V2: %.2f < V1: %.2f < V3: %.2f ", v2, v1, v3);
    } else if (v3 > v2 && v2 > v1) {
        printf("V1: %.2f < V2: %.2f < V2: %.2f ", v1, v2, v3);
    } else {
        printf("\nNão foi possível ordenar");
    }

    return 0;

    //v1 v2 v3
    //v1 v3 v2
    //v2 v1 v3
    //v2 v3 v1
    //v3 v1 v2
    //v3 v2 v1
}