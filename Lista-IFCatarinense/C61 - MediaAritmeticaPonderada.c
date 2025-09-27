//61. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média deseja calcular a partir de 
//três notas. Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média: 
//1- aritmética  
//2- ponderada (pesos 3, 3, 4) 

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Escolha o tipo de média:\n");
    printf("1 - Média Aritmética\n");
    printf("2 - Média Ponderada (pesos 3, 3, 4)\n");
    printf("Digite sua opção (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("Média Aritmética: %.2f\n", media);
    } else if (opcao == 2) {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10.0;
        printf("Média Ponderada: %.2f\n", media);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}