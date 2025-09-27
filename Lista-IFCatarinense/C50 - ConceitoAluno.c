//Suponha que o conceito de um aluno seja determinado em função da sua nota. 
//Suponha, também, que esta nota seja um valor inteiro na faixa de 0 a 100, conforme a seguinte faixa: 
//Nota        Conceito
// 0 a 49     Insuficiente 
//50 a 64     Regular 
//65 a 84     Bom 
//85 a 100    Ótimo
//Crie um algoritmo que apresente o conceito e a nota do aluno.

#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    int nota;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

   if (nota < 0 || nota > 100) {
        printf("Nota inválida. Por favor, insira uma nota entre 0 e 100.\n");
    } else if (nota < 50) {
        printf("Aluno: %s\nNota: %d\nConceito: Insuficiente\n", nome, nota);
    } else if (nota < 65) {
        printf("Aluno: %s\nNota: %d\nConceito: Regular\n", nome, nota);
    } else if (nota < 85) {
        printf("Aluno: %s\nNota: %d\nConceito: Bom\n", nome, nota);
    } else {
        printf("Aluno: %s\nNota: %d\nConceito: Ótimo\n", nome, nota);
    }

    return 0;
}