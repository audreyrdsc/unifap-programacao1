//123. Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual 
//coletaram os seguintes dados referentes a cada habitante para serem analisados:  - sexo 
//(masculino e feminino) - cor dos olhos (azuis, verdes ou castanhos) - cor dos cabelos 
//(louros, castanhos, pretos) - idade 
//Faça um algoritmo que determine e escreva: 
//a) a maior idade dos habitantes; 
//b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, inclusive; 
//c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros; 
//O final do conjunto de habitantes é reconhecido pelo valor -1 informado como idade.

#include <stdio.h>

int main() {
    int idade, maiorIdade = -1;
    char sexo, corOlhos, corCabelos;
    int countFeminino18a35 = 0;
    int countOlhosVerdesCabelosLouros = 0;

    while (1) {
        printf("Informe a idade (-1 para sair): ");
        scanf("%d", &idade);
        if (idade == -1) {
            break;
        }

        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Informe a cor dos olhos (A/V/C): ");
        scanf(" %c", &corOlhos);
        printf("Informe a cor dos cabelos (L/C/P): ");
        scanf(" %c", &corCabelos);

        // a) Maior idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        // b) Quantidade de mulheres entre 18 e 35 anos
        if (sexo == 'F' && idade >= 18 && idade <= 35) {
            countFeminino18a35++;
        }

        // c) Quantidade de indivíduos com olhos verdes e cabelos louros
        if (corOlhos == 'V' && corCabelos == 'L') {
            countOlhosVerdesCabelosLouros++;
        }
    }

    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos: %d\n", countFeminino18a35);
    printf("Quantidade de indivíduos com olhos verdes e cabelos louros: %d\n", countOlhosVerdesCabelosLouros);

    return 0;
}