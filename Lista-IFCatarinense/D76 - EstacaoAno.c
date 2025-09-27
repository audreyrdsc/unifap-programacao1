//76. Faça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual a estação do ano 
//correspondente (Primavera, Verão, Outono, Inverno).

#include <stdio.h>

int main() {
    int data, dia, mes, ano;

    printf("Digite uma data no formato DDMMAAAA: ");
    scanf("%d", &data);

    dia = data / 1000000;          // dois primeiros dígitos (dia)
    mes = (data / 10000) % 100;    // dois dígitos do meio (mês)
    ano = data % 10000;            // quatro últimos dígitos (ano)

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data inválida!\n");
        return 1;
    }

    if ((mes == 3 && dia >= 20) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21)) {
        printf("Estação: Primavera\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 23)) {
        printf("Estação: Verão\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) {
        printf("Estação: Outono\n");
    } else {
        printf("Estação: Inverno\n");
    }

    return 0;
}