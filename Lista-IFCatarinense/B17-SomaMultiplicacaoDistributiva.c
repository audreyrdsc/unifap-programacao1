//17. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação 
//dos valores entre si, baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas
//as variáveis A, B, C e D, devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, 
//B com D e por último C com D.

#include <stdio.h>

int main() {

    int a, b, c, d, soma = 0, prod = 0;

    printf("\nDigite o valor de A: "); scanf("%d", &a);
    printf("Digite o valor de B: "); scanf("%d", &b);
    printf("Digite o valor de C: "); scanf("%d", &c);
    printf("Digite o valor de D: "); scanf("%d", &d);

    soma = a + b;
    prod = a * b;
    printf("\n------- RESULTADO DE A e B -------");
    printf("\nA soma de A + B = %d", soma);
    printf("\nO produto de A x B = %d", prod);

    soma = a + c;
    prod = a * c;
    printf("\n------- RESULTADO DE A e C -------");
    printf("\nA soma de A + C = %d", soma);
    printf("\nO produto de A x C = %d", prod);

    soma = a + d;
    prod = a * d;
    printf("\n------- RESULTADO DE A e D -------");
    printf("\nA soma de A + D = %d", soma);
    printf("\nO produto de A x D = %d", prod);

    soma = b + c;
    prod = b * c;
    printf("\n------- RESULTADO DE B e C -------");
    printf("\nA soma de B + C = %d", soma);
    printf("\nO produto de B x C = %d", prod);

    soma = b + d;
    prod = b * d;
    printf("\n------- RESULTADO DE B e D -------");
    printf("\nA soma de B + D = %d", soma);
    printf("\nO produto de B x D = %d", prod);

    soma = c + d;
    prod = c * d;
    printf("\n------- RESULTADO DE C e D -------");
    printf("\nA soma de C + D = %d", soma);
    printf("\nO produto de C x D = %d", prod);

    return 0;
}