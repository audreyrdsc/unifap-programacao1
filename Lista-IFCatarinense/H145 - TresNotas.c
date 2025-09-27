//145. Refaça o algoritmo do exercício 58 usando registro. 

#include <stdio.h>

struct Aluno {
    int codigo;
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno aluno;
    float maior, media;

    printf("Digite o codigo do aluno: ");
    scanf("%d", &aluno.codigo);

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3);

    maior = aluno.nota1;
    if (aluno.nota2 > maior) maior = aluno.nota2;
    if (aluno.nota3 > maior) maior = aluno.nota3;

    if (maior == aluno.nota1)
        media = (aluno.nota1 * 4 + aluno.nota2 * 3 + aluno.nota3 * 3) / 10.0;
    else if (maior == aluno.nota2)
        media = (aluno.nota1 * 3 + aluno.nota2 * 4 + aluno.nota3 * 3) / 10.0;
    else
        media = (aluno.nota1 * 3 + aluno.nota2 * 3 + aluno.nota3 * 4) / 10.0;

    // Saída dos dados
    printf("\n--- Resultado do Aluno ---\n");
    printf("Codigo: %d\n", aluno.codigo);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno.nota1, aluno.nota2, aluno.nota3);
    printf("Media ponderada: %.2f\n", media);

    if (media >= 5.0)
        printf("Status: APROVADO ✅\n");
    else
        printf("Status: REPROVADO ❌\n");

    return 0;
}
