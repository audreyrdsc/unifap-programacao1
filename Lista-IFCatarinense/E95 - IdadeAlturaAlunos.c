//95. Para uma turma de 45 alunos, construa um algoritmo que determine: 
//a) A idade média dos alunos com menos de 1,70m de altura; 
//b) A altura média dos alunos com mais de 20 anos.

#include <stdio.h>

int main() {
    int idade, countIdade = 0;
    float altura, somaIdade = 0.0, mediaIdade;
    float somaAltura = 0.0, mediaAltura;
    int countAltura = 0;
    int totalAlunos = 45;

    for (int i = 0; i < totalAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        if (altura < 1.70) {
            somaIdade += idade;
            countIdade++;
        }

        if (idade > 20) {
            somaAltura += altura;
            countAltura++;
        }
    }

    if (countIdade > 0) {
        mediaIdade = somaIdade / countIdade;
        printf("a) A idade media dos alunos com menos de 1,70m de altura: %.2f anos\n", mediaIdade);
    } else {
        printf("a) Nao ha alunos com menos de 1,70m de altura.\n");
    }

    if (countAltura > 0) {
        mediaAltura = somaAltura / countAltura;
        printf("b) A altura media dos alunos com mais de 20 anos: %.2f metros\n", mediaAltura);
    } else {
        printf("b) Nao ha alunos com mais de 20 anos.\n");
    }

    return 0;
}