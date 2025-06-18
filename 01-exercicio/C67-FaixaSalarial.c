#include <stdio.h>

//Cálculo do novo salário com reajuste conforme faixas
int main() {
    float salario;

    printf("Informe o salário atual: R$ "); scanf("%f", &salario);

    if (salario < 1750.0 && salario >= 1500.0) {
        salario = salario * 1.12;
        printf("O reajuste salarial é de 12%% - R$ %.2f", salario);
    } else if (salario < 2000.0 && salario >= 1750.0) {
        salario = salario * 1.1;
        printf("O reajuste salarial é de 10%% - R$ %.2f", salario);
    } else if (salario < 3000.0 && salario >= 2000.0) {
        salario = salario * 1.07;
        printf("O reajuste salarial é de 7%% - R$ %.2f", salario);
    } else if (salario >= 3000) {
        salario = salario * 1.05;
        printf("O reajuste salarial é de 5%% - R$ %.2f", salario);
    } else {
        salario = salario * 1.15;
        printf("O reajuste salarial é de 15%% - R$ %.2f", salario);
    }

    return 0;
}