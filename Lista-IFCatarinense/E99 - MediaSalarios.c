//99. Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário a quantidade de 
//funcionários, o nome e o salário de cada funcionário e devolvendo a média, o salário mais alto e o salário 
//mais baixo.

#include <stdio.h>

int main() {
    int numFuncionarios, i;
    float salario, somaSalarios = 0, salarioMaisAlto = -1, salarioMaisBaixo = 1000000, mediaSalarios;
    char nome[50];

    printf("\nDigite a quantidade de funcionarios: ");
    scanf("%d", &numFuncionarios);

    for (i = 0; i < numFuncionarios; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &salario);

        somaSalarios += salario;

        if (salario > salarioMaisAlto) {
            salarioMaisAlto = salario;
        }
        if (salario < salarioMaisBaixo) {
            salarioMaisBaixo = salario;
        }
    }

    mediaSalarios = somaSalarios / numFuncionarios;

    printf("Media de salarios: %.2f\n", mediaSalarios);
    printf("Salario mais alto: %.2f\n", salarioMaisAlto);
    printf("Salario mais baixo: %.2f\n", salarioMaisBaixo);

    return 0;
}