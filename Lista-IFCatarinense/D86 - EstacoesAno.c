//86. Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e armazenar na variável mes um número 
//entre 1 e 12, correspondendo a um dos meses do ano. No final, você deve imprimir uma mensagem conforme o exemplo:
//"A estação do ano correspondente ao mês 3 é Verão" 
//Considere a estação prevalente para cada mês: 
//a) Janeiro (1): Verão 
//b) Fevereiro (2): Verão 
//c) Março (3): Verão 
//d) Abril (4): Outono 
//e) Maio (5): Outono 
//f) Junho (6): Outono 
//g) Julho (7): Inverno 
//h) Agosto (8): Inverno 
//i) Setembro (9): Inverno 
//j) Outubro (10): Primavera 
//k) Novembro (10): Primavera 
//l) Dezembro (10): Primavera

#include <stdio.h>

int main() {
    int mes;

    printf("Digite o número do mês (1-12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 2:
        case 3:
            printf("A estação do ano correspondente ao mês %d é Verão\n", mes);
            break;
        case 4:
        case 5:
        case 6:
            printf("A estação do ano correspondente ao mês %d é Outono\n", mes);
            break;
        case 7:
        case 8:
        case 9:
            printf("A estação do ano correspondente ao mês %d é Inverno\n", mes);
            break;
        case 10:
        case 11:
        case 12:
            printf("A estação do ano correspondente ao mês %d é Primavera\n", mes);
            break;
        default:
            printf("Mês inválido! Por favor, insira um número entre 1 e 12.\n");
            break;
    }

    return 0;
}