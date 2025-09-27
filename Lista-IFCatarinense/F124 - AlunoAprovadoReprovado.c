//124. Faça um algoritmo que leia informações de alunos (Matricula, Nota1, Nota2 , Nota3) com o fim das 
//informações indicado por Matricula = 9999 . Para cada aluno deve ser calculada a média final de acordo com a 
//seguinte fórmula: 
//Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9 
//Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula, Média Final e a mensagem 
//"APROVADO" ; se a média final for inferior a 5, o algoritmo deve mostrar Matricula, Média Final e a mensagem 
//"REPROVADO". 
//Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o total de reprovados.

#include <stdio.h>

int main() {
    int matricula, totalAlunos = 0, totalAprovados = 0, totalReprovados = 0;
    float nota1, nota2, nota3, mediaFinal;

    while (1) 
    {
        printf("Digite a matricula do aluno (9999 para sair): ");
        scanf("%d", &matricula);

        if (matricula == 9999) 
        {
            break;
        }

        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        printf("Digite a nota 3: ");
        scanf("%f", &nota3);

        mediaFinal = ((2 * nota1) + (3 * nota2) + (4 * nota3)) / 9.0;
        totalAlunos++;

        if (mediaFinal >= 5.0) 
        {
            printf("Matricula: %d, Media Final: %.2f - APROVADO\n", matricula, mediaFinal);
            totalAprovados++;
        } 
        else 
        {
            printf("Matricula: %d, Media Final: %.2f - REPROVADO\n", matricula, mediaFinal);
            totalReprovados++;
        }
    }

    printf("\nTotal de Alunos: %d\n", totalAlunos);
    printf("Total de Aprovados: %d\n", totalAprovados);
    printf("Total de Reprovados: %d\n", totalReprovados);

    return 0;
}