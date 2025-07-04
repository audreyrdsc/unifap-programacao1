//23. Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual 
//coletou os seguintes dados referentes a cada habitante para serem analisados:  - sexo (masculino e feminino)-
//cor dos olhos (azuis, verdes ou castanhos)- cor dos cabelos ( louros, castanhos, pretos)- idade 

//24. Faça um algoritmo que determine e escreva:   - a maior idade dos habitantes- a quantidade de indivíduos
//do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
//O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.

#include <stdio.h>
#include <ctype.h>

//maior idade
//qtde de mulheres entre 18 e 35 olhos verdes e cabelos louros
//saída -1

int main() {
    char sexo, corOlhos, corCabelos;
    int idade, maiorIdade = -1, qtdeMulheres_18_35 = 0;

    while (1) {

        printf("\n---------- PESQUISA DE CARACTERÍSTICAS FÍSICAS ----------\n");
        printf("Informe a idade: (digite -1 para encerrar) "); scanf("%d", &idade);

        if (idade < 0)
            break;    

        if (idade >= 0) {
  
            if (maiorIdade == -1 || idade > maiorIdade)
            maiorIdade = idade;
        
            if (idade > 0) {
                printf("Informe o sexo "); scanf(" %c", &sexo);
                printf("Informe a cor dos olhos: A - Azuis | V - Verdes | C - Castanhos "); scanf(" %c", &corOlhos);
                printf("Informe a cor dos cabelos: L - Louros | C - Castanhos | P - Pretos "); scanf(" %c", &corCabelos);
            
                if ((toupper(sexo) == 'F') && (idade >= 18 && idade <=35) && (toupper(corOlhos) == 'V') && (toupper(corCabelos) == 'L')) {
                    qtdeMulheres_18_35++;
                }
            }
        }    
    }

    if (maiorIdade >= 0 || qtdeMulheres_18_35 > 0) {
        printf("Maior: %d", maiorIdade);
        printf("\n---------- ---------- RESULTADO DA PESQUISA ---------- ----------");
        printf("\nA maior idade dos habitantes da amostra é: %d", maiorIdade);
        printf("\nA quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros é: %d", qtdeMulheres_18_35);
    }

    printf("\n*** PROGRAMA ENCERRADO ***");

    return 0;
}