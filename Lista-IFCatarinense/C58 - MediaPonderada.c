//58. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno,
//considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas 
//três notas, a média calculada e uma mensagem: "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se 
//a média for menor que 5.

#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3;
    float media;

    printf("Digite o codigo do aluno: ");
    scanf("%d", &codigo);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    if (nota1 >= nota2 && nota1 >= nota3) {
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10;
    } else {
        media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
    }

    printf("\nCodigo do aluno: %d\n", codigo);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Media ponderada: %.2f\n", media);
    
    if (media >= 5) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}