#include <stdio.h>

int main () {
    char *nome;
    float pt, mat, cg, media;

    printf("\nInforme o nome do aluno: ");
    scanf("%c", &nome);

    printf("\nInforme a nota de Português: ");
    scanf("%f", &pt);

    printf("\nInforme a nota de Matemática: ");
    scanf("%f", &mat);

    printf("\nInforme a nota de Conhecimentos Gerais: ");
    scanf("%f", &cg);

    media = (pt + mat + cg) / 3.0;

    if ((media < 7.0) || ((pt || mat || cg) < 5)) {
        printf("\n O candidato %c foi REPROVADO por possuir nota menor que 5 \n", nome);
    } else {
        printf("O candidato %c foi APROVADO com a média %.2f ", nome, media);
    }

    return 0;

}