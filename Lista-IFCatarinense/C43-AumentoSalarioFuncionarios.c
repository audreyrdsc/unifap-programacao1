//43. Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a categoria de 
//cada empregado. O aumento seguirá a seguinte regra:  
//• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o salário; 
//• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre o salário; 
//• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
//• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento sobre o salário; 
//• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento sobre o salário. 
//Faça um algoritmo que escreva nome, categoria e salário reajustado de cada empregado.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char nomeFunc[30];
    char categoria;
    float salario;

    printf("\nDigite o nome do funcionário: "); 
    fgets(nomeFunc, sizeof(nomeFunc), stdin);
    nomeFunc[strcspn(nomeFunc, "\n")] = '\0';


    printf("Informe a letrada categoria: "); scanf(" %c", &categoria);
    categoria = toupper(categoria);

    printf("Salário: R$ "); scanf("%f", &salario);
    getchar();

    if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
        salario += salario * 0.10;
    }
    else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
        salario += salario * 0.15;
    }
    else if (categoria == 'K' || categoria == 'R') {
        salario += salario * 0.25;
    }
    else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
        salario += salario * 0.35;
    }
    else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
        salario += salario * 0.50;
    }
    else {
        printf("\nCategoria inválida.\n");
        return 1;
    }

    
    printf("\n------- RELATÓRIO DE REAJUSTE DE SALÁRIO -----");
    printf("\nNome do Funcionário: %s", nomeFunc);
    printf("\nCategoria: %c", categoria);
    printf("\nSalário reajustado: R$ %.2f\n", salario);

    return 0;
}