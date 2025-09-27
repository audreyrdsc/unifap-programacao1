//115. Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário o nome dos 
//funcionários e os salários e devolvendo a média, o salário mais alto e o salário mais baixo. Use nome = “fim” 
//para encerrar a leitura.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float salario, soma = 0, media, maior = -1, menor = 999999;
    int count = 0;

    while (1) 
    {
        printf("Digite o nome do funcionario (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) 
        {
            break;
        }

        printf("Digite o salario de %s: ", nome);
        scanf("%f", &salario);

        soma += salario;
        count++;

        if (salario > maior) 
        {
            maior = salario;
        }

        if (salario < menor) 
        {
            menor = salario;
        }
    }

    if (count > 0) 
    {
        media = soma / count;
        printf("Media salarial: %.2f\n", media);
        printf("Maior salario: %.2f\n", maior);
        printf("Menor salario: %.2f\n", menor);
    } 
    else 
    {
        printf("Nenhum salario foi registrado.\n");
    }

    return 0;
}