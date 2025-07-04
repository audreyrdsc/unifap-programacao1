// 7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. 
//O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código 
//for igual a zero.

#include <stdio.h>

int main() {
    int cod;
    float nota = 0.0, notas, media = 0.0;

    do {

        printf("\nDigite o código do aluno: "); scanf("%d", &cod);

        if (cod != 0) {
            printf("\nDigite as 3 notas do aluno %d: \n", cod);
            notas = 0.0;

            for (int i = 0; i < 3; i++) {
                printf("Nota 0%d: ", i + 1); scanf("%f", &nota);
                notas += nota;                
            }
        
            media = notas / 3;

            printf("\n\n*** *** BOLETIM DO ALUNO *** ***");
            printf("\nCódigo do Aluno: %d", cod);
            printf("\nMédia: %.2f", media);
            printf("\n*** *** *** *** *** *** **** ***\n");
       
        } else {
            printf("\nPrograma encerrado!\n");
        }

    } while (cod != 0);
    
    return 0;
}