#include <stdio.h>
#include <string.h>

//Concatenar nome e sobrenome
int main() {
    char nome[20];
    char sobrenome[20];

    printf("Digite o nome: ");
    scanf("%s", &nome);

    printf("Digite o sobrenome: ");
    scanf("%s", &sobrenome);

    strcat(nome, " "); //concatena " " ao final de nome
    strcat(nome, sobrenome); //concatena sobrenome ao final de nome

    printf("O nome informado é: %s ", nome);

    return 0;

}