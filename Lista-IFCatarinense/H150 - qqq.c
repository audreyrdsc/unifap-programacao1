//150. Refaça o algoritmo do exercício 124 usando registro. 

#include <stdio.h>

struct Aluno {
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno aluno;
    int totalAlunos = 0, totalAprovados = 0, totalReprovados = 0;

    while (1) {
     
        printf("Digite a matrícula do aluno (9999 para encerrar): ");
        scanf("%d", &aluno.matricula);

        if (aluno.matricula == 9999) {
            break;
        }

        printf("Digite a Nota 1: ");
        scanf("%f", &aluno.nota1);
        printf("Digite a Nota 2: ");
        scanf("%f", &aluno.nota2);
        printf("Digite a Nota 3: ");
        scanf("%f", &aluno.nota3);

        float mediaFinal = (2 * aluno.nota1 + 3 * aluno.nota2 + 4 * aluno.nota3) / 9.0;

        if (mediaFinal >= 5.0) {
            printf("Matrícula: %d, Média Final: %.2f - APROVADO\n\n", aluno.matricula, mediaFinal);
            totalAprovados++;
        } else {
            printf("Matrícula: %d, Média Final: %.2f - REPROVADO\n\n", aluno.matricula, mediaFinal);
            totalReprovados++;
        }

        totalAlunos++;
    }

    printf("\nTotal de alunos da turma: %d\n", totalAlunos);
    printf("Total de aprovados: %d\n", totalAprovados);
    printf("Total de reprovados: %d\n", totalReprovados);

    return 0;
}
