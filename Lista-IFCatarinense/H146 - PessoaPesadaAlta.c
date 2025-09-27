//146. Refaça o algoritmo do exercício 113 usando registro.

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    float altura;
    float peso;
};

int main() {
    struct Pessoa pessoa1, pessoa2;

    printf("Digite o nome da primeira pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0';

    printf("Digite a altura da primeira pessoa (em metros): ");
    scanf("%f", &pessoa1.altura);

    printf("Digite o peso da primeira pessoa (em kg): ");
    scanf("%f", &pessoa1.peso);

    getchar();

    printf("\nDigite o nome da segunda pessoa: ");
    fgets(pessoa2.nome, sizeof(pessoa2.nome), stdin);
    pessoa2.nome[strcspn(pessoa2.nome, "\n")] = '\0';

    printf("Digite a altura da segunda pessoa (em metros): ");
    scanf("%f", &pessoa2.altura);

    printf("Digite o peso da segunda pessoa (em kg): ");
    scanf("%f", &pessoa2.peso);

    if (pessoa1.peso > pessoa2.peso) {
        printf("\nA pessoa mais pesada é %s, com %.2f kg.\n", pessoa1.nome, pessoa1.peso);
    } else {
        printf("\nA pessoa mais pesada é %s, com %.2f kg.\n", pessoa2.nome, pessoa2.peso);
    }

    if (pessoa1.altura > pessoa2.altura) {
        printf("A pessoa mais alta é %s, com %.2f m.\n", pessoa1.nome, pessoa1.altura);
    } else {
        printf("A pessoa mais alta é %s, com %.2f m.\n", pessoa2.nome, pessoa2.altura);
    }

    return 0;
}
