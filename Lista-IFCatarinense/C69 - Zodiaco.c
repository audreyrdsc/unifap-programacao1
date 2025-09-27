//69. Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu aniversário e atribuir um valor 
//para a variável inteira chamada signo, conforme lista abaixo: 
//a)  1o signo do zodíaco: Aquário (21/jan a 19/fev) 
//b)  2o signo do zodíaco: Peixes (20/fev a 20/mar) 
//c)  3o signo do zodíaco: Áries (21/mar a 20/abr) 
//d)  4o signo do zodíaco: Touro (21/abr a 20/mai) 
//e)  5o signo do zodíaco: Gêmeos (21/mai a 20/jun) 
//f)  6o signo do zodíaco: Câncer (21/jun a 21/jul) 
//g)  7o signo do zodíaco: Leão (22/jul a 22/ago) 
//h)  8o signo do zodíaco: Virgem (23/ago a 22/set) 
//i)  9o signo do zodíaco: Libra (23/set a 22/out) 
//j) 10o signo do zodíaco: Escorpião (23/out a 21/nov) 
//k) 11o signo do zodíaco: Sagitário (22/nov a 21/dez) 
//l) 12o signo do zodíaco: Capricórnio (22/dez a 20/jan) 

#include <stdio.h>

int main() {
    int dia, mes, signo;

    printf("Digite o dia do seu aniversario: ");
    scanf("%d", &dia);
    printf("Digite o mes do seu aniversario: ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        printf("Você é do seguinte signo do zodíaco: Aquário");
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        printf("Você é do seguinte signo do zodíaco: Peixes");
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        printf("Você é do seguinte signo do zodíaco: Áries");
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        printf("Você é do seguinte signo do zodíaco: Touro");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Você é do seguinte signo do zodíaco: Gêmeos");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        printf("Você é do seguinte signo do zodíaco: Câncer");
    } else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        printf("Você é do seguinte signo do zodíaco: Leão");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Você é do seguinte signo do zodíaco: Virgem");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Você é do seguinte signo do zodíaco: Libra");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Você é do seguinte signo do zodíaco: Escorpião");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Você é do seguinte signo do zodíaco: Sagitário");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        printf("Você é do seguinte signo do zodíaco: Capricórnio");
    } else {
        printf("Data invalida.\n");
        return 1;
    }
   
    return 0;
}