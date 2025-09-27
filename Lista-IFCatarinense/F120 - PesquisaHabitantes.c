//120. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e 
//salário. Faça um algoritmo que informe: 
//a) a média de salário do grupo; 
//b) a maior e a menor idade do grupo; 
//c) a quantidade de mulheres com salário até R$100,00. 
//Encerre a entrada de dados quando for digitada uma idade negativa.

#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, menorIdade = 150, countMulheres100 = 0;
    char sexo;
    float salario, somaSalarios = 0.0;
    int countPessoas = 0;

    while (1) {
        printf("Digite a idade (negativa para sair): ");
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        somaSalarios += salario;
        countPessoas++;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') && salario <= 100.0) {
            countMulheres100++;
        }
    }

    if (countPessoas > 0) {
        float mediaSalarios = somaSalarios / countPessoas;
        printf("Media de salario do grupo: R$%.2f\n", mediaSalarios);
        printf("Maior idade do grupo: %d\n", maiorIdade);
        printf("Menor idade do grupo: %d\n", menorIdade);
        printf("Quantidade de mulheres com salario ate R$100,00: %d\n", countMulheres100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}