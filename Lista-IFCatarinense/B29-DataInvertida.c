//29. Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em uma variável 
//do tipo data, crie um algoritmo que leia uma data no formato DDMMAA e imprima essa data no formato
//AAMMDD, onde: 
//• A letra D corresponde a dois algarismos representando o dia; 
//• A letra M corresponde a dois algarismos representando o mês; 
//• A letra A corresponde aos dois últimos algarismos representando o ano.

#include <stdio.h>

int main() {

    int data, dia, mes, ano, dataInvertiva;

    printf("\nInforme a Data no formado DDMMAA: ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    printf("\nData: %d / %d / %d ", dia, mes, ano);

    dataInvertiva = ano * 10000 + mes * 100 + dia;


    printf("Data invertida no formato AAMMDD: %06d\n", dataInvertiva);

    return 0;
}