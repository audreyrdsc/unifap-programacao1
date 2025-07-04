//41. Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média 
//ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, mediaPonderada = 0.0;
    float somaMediaPonderada = 0.0, mediaGeral = 0.0;

    for (int i = 1; i <= 50; i++) {

        do {
            printf("Digite a Nota 01 (0 a 10): "); scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("⚠️ Nota inválida! Digite um valor entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a Nota 02 (0 a 10): "); scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("⚠️ Nota inválida! Digite um valor entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        do {
            printf("Digite a Nota 02 (0 a 10): "); scanf("%f", &nota3);
            if (nota3< 0 || nota3 > 10) {
                printf("⚠️ Nota inválida! Digite um valor entre 0 e 10.\n");
            }
        } while (nota3 < 0 || nota3 > 10);

        mediaPonderada = ((nota1 * 2) + (nota2 * 4) + (nota3 * 3)) / 10.0; //cálculo da média ponderada do aluno
    
        somaMediaPonderada += mediaPonderada;  //soma das médias ponderadas

        printf("\n--- --- --- --- BOLETIM INDIVIDUAL --- --- --- ---\n");
        printf("Aluno: %d  |  Média: %.2f  |  Situação: ", i, mediaPonderada);
      
        if (mediaPonderada >= 7.0) {
            printf("APROVADO");
        } else {
            printf("REPROVADO");
        }

        printf("\n--------------------------------------------------\n");
    }

    mediaGeral = somaMediaPonderada / 50;

    printf("\n--- --- --- MÉDIA GERAL DA TURMA --- --- ---");
    printf("\nA média geral da turma é: %.2f ", mediaGeral);
    printf("\n--------------------------------------------\n");

    return 0;
}