//55. Calcule a média aritmética das três notas de um aluno e mostre, além do valor da média, uma mensagem de 
//"Aprovado", caso a média seja igual ou superior a 7; 
//a mensagem “em prova final” caso a média seja menor que 7 e maior ou igual a 4;
//e "reprovado", caso contrário. 

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 4.0) {
        printf("Em prova final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}