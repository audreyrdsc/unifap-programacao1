#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("\nDigite a nota N1: ");
    scanf("%f", &n1);

    printf("\nDigite a nota N2: ");
    scanf("%f", &n2);

    printf("\nDigite a nota N3: ");
    scanf("%f", &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 3;

    printf("\nA média final do aluno é %.2f \n", media);

    return 0;

}