//78. Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro e positivo e 
//A, B, e C são quaisquer valores reais. O programa deve escrever os valores lidos e: 
//• se I = 1, escrever os três valores A, B e C em ordem crescente; 
//• se I = 2, escrever os três valores A, B e C em ordem decrescente; 
//• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique entre os outros dois; 
//• se I não for um dos três valores acima, dar uma mensagem indicando isto.

#include <stdio.h>

int main() {
    int I;
    float A, B, C, temp;

    printf("Digite um numero inteiro positivo (I): ");
    scanf("%d", &I);
    printf("Digite tres valores reais (A, B e C): ");
    scanf("%f %f %f", &A, &B, &C);

    switch (I) {
        case 1:
            // Ordem crescente
            if (A > B) { temp = A; A = B; B = temp; }
            if (A > C) { temp = A; A = C; C = temp; }
            if (B > C) { temp = B; B = C; C = temp; }
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, B, C);
            break;

        case 2:
            // Ordem decrescente
            if (A < B) { temp = A; A = B; B = temp; }
            if (A < C) { temp = A; A = C; C = temp; }
            if (B < C) { temp = B; B = C; C = temp; }
            printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C);
            break;

        case 3:
            // Maior valor no meio
            if (A >= B && A >= C) {
                if (B > C)
                    printf("Ordem: %.2f, %.2f, %.2f\n", B, A, C);
                else
                    printf("Ordem: %.2f, %.2f, %.2f\n", C, A, B);
            } 
            else if (B >= A && B >= C) {
                if (A > C)
                    printf("Ordem: %.2f, %.2f, %.2f\n", A, B, C);
                else
                    printf("Ordem: %.2f, %.2f, %.2f\n", C, B, A);
            } 
            else {
                if (A > B)
                    printf("Ordem: %.2f, %.2f, %.2f\n", A, C, B);
                else
                    printf("Ordem: %.2f, %.2f, %.2f\n", B, C, A);
            }
            break;

        default:
            printf("Valor de I invalido! Digite 1, 2 ou 3.\n");
            break;
    }

    return 0;
}
