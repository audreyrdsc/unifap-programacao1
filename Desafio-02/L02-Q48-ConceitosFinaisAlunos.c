//48. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando 
//(use o comando CASO):  
//a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário
//b) a tabela de conceitos segue abaixo:

//Nota          Conceito  
//de 0,0 a 4,9        D
//de 5,0 a 6,9        C
//de 7,0 a 8,9        B
//de 9,0 a 10,0       A


#include <stdio.h>

int main() {
    int matricula, i;
    float nota;
    char conceito;
    int totalAlunos = 75;

    for (i = 1; i <= totalAlunos; i++) {
        printf("\nAluno %d", i);
        printf("\nDigite o número de matrícula: ");
        scanf("%d", &matricula);
        printf("Digite a nota final do aluno: ");
        scanf("%f", &nota);

        int notaTeste = (int)(nota * 10);
        switch (notaTeste) {
            case 0 ... 49:
                conceito = 'D';
                break;
            case 50 ... 69:
                conceito = 'C';
                break;
            case 70 ... 89:
                conceito = 'B';
                break;
            case 90 ... 100:
                conceito = 'A';
                break;
            default:
                conceito = '?';
        }

        if (conceito == '?') {
            printf("Nota inválida. Digite entre 0.0 e 10.0\n");
        } else {
            printf("Matrícula: %d | Nota: %.1f | Conceito final: %c\n", matricula, nota, conceito);
        }
    }

    return 0;
}
