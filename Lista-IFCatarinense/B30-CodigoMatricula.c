//30. Suponha que uma escola utilize, como código de matrícula, um número inteiro no formato AASDDD,
//onde: 
//• Os dois primeiros dígitos, representados pela letra A, são os dois últimos algarismos do ano da 
//matrícula; 
//• O terceiro dígito, representado pela letra S, vale 1 ou 2, conforme o aluno tenha se matriculado
//no 1º ou 2º semestre; 
//• Os quatro últimos dígitos, representados pela letra D, correspondem à ordem da matrícula do 
//aluno, no semestre e no ano em questão. 
//Crie um algoritmo que leia o número de matrícula de um aluno e imprima o ano e o semestre em que
//ele foi matriculado.

#include <stdio.h>

int main() {

    int codigo, ano, semestre, aluno;

    printf("\nDigite o número da matrícula do aluno no formato AASDDD: ");
    scanf("%d", &codigo);

    ano = codigo / 10000;
    semestre = (codigo / 1000) % 10;
    aluno = codigo % 1000;
    
    printf("\n---------- DADOS DO ALUNO ----------");
    printf("\nCódigo de Matrícula: %06d ", codigo);
    printf("\nOrdem do Aluno: %03d ", aluno);
    printf("\nAno: 20%02d ", ano);
    printf("\nSemestre: %dº", semestre);

    return 0;
}