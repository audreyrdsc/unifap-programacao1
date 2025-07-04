//10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno,
//considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três
//notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
//média for menor que 5. Repita a operação até que o código lido seja negativo.

#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, aux, media;

    while (codigo >= 0) {
        printf("\n*** *** NOTAS DO ALUNO *** ***");
        printf("\nDigite o código do aluno: "); scanf("%d", &codigo);

        if (codigo >= 0) {
            printf("\nNota 01: "); scanf("%f", &n1);
            printf("\nNota 02: "); scanf("%f", &n2);
            printf("\nNota 03: "); scanf("%f", &n3);

            if (n1 > n2) {
                aux = n1;
                n1 = n2;
                n2 = aux;
            }
            
            if (n1 > n3) {
                aux = n1;
                n1 = n3;
                n3 = aux;
            }
            
            if (n2 > n3) {
                aux = n2;
                n2 = n3;
                n3 = aux;
            }

            media = (n1 * 3 + n2 * 3 + n3 * 4) / (3 + 3 + 4);

            printf("\n*** *** *** BOLETIM DO ALUNO *** *** ***");
            printf("\nCódigo: %d ", codigo);
            printf("\nNotas: %.2f, %.2f, %.2f", n1, n2, n3);
            printf("\nMédia Ponderada: %.2f", media);
            
            if (media >= 5) {
                printf("\nSituação: APROVADO\n");
            } else {
                printf("\nSituação: REPROVADO\n");
            }
        }
        
    }

    printf("\nPROGRAMA ENCERRADO!");

    return 0;
}