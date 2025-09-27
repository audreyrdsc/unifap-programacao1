//111. Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual se perguntou para cada aluno o
// número de vezes que utilizou o restaurante da universidade no último mês. Construa um algoritmo que determine: 
//a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante; 
//b) O percentual de alunos que utilizaram entre 10 e 15 vezes; 
//c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes. 
//Ex.: 2, 3, 11, 12, 21, 22, 23 =  a) 28%; b) 28%; c) 42% 

#include <stdio.h>

int main() {
    int numAlunos, i, vezes;
    int menosDe10 = 0, entre10e15 = 0, maisDe15 = 0;

    printf("Digite o numero de alunos pesquisados: ");
    scanf("%d", &numAlunos);

    for (i = 0; i < numAlunos; i++) {
        printf("Digite o numero de vezes que o aluno %d utilizou o restaurante no ultimo mes: ", i + 1);
        scanf("%d", &vezes);

        if (vezes < 10) {
            menosDe10++;
        } else if (vezes <= 15) {
            entre10e15++;
        } else {
            maisDe15++;
        }
    }

    printf("Percentual de alunos que utilizaram menos que 10 vezes: %.2f%%\n", (menosDe10 / (float)numAlunos) * 100);
    printf("Percentual de alunos que utilizaram entre 10 e 15 vezes: %.2f%%\n", (entre10e15 / (float)numAlunos) * 100);
    printf("Percentual de alunos que utilizaram mais de 15 vezes: %.2f%%\n", (maisDe15 / (float)numAlunos) * 100);

    return 0;
}