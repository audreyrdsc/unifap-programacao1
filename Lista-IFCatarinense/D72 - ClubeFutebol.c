//72. Um determinado clube de futebol pretende classificar seus atletas em categorias e para isto ele contratou 
//um programador para criar um programa que executasse esta tarefa. Para isso o clube criou uma tabela que 
//continha a faixa etária do atleta e sua categoria. A tabela está demonstrada abaixo:  
//IDADE         CATEGORIA
//De 05 a 10    Infantil
//De 11 a 15    Juvenil 
//De 16 a 20    Junior
//De 21 a 25    Profissional 
//Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome do atleta: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    switch (idade) {
        case 5: case 6: case 7: case 8: case 9: case 10:
            printf("Atleta: %s | Categoria: Infantil\n", nome);
            break;

        case 11: case 12: case 13: case 14: case 15:
            printf("Atleta: %s | Categoria: Juvenil\n", nome);
            break;

        case 16: case 17: case 18: case 19: case 20:
            printf("Atleta: %s | Categoria: Junior\n", nome);
            break;

        case 21: case 22: case 23: case 24: case 25:
            printf("Atleta: %s | Categoria: Profissional\n", nome);
            break;

        default:
            printf("Atleta: %s | Categoria: Nao classificado\n", nome);
            break;
    }

    return 0;
}
