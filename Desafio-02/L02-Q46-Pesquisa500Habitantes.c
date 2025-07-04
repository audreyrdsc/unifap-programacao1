//46. Foi realizada uma pesquisa de algumas características físicas da população de um certa região. Foram
//entrevistadas 500 pessoas e coletados os seguintes dados:  
//a- sexo: M (masculino) e F (feminino)
//b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
//c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
//d- idade
//Deseja-se saber:
//a maior idade do grupo
//a quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e que tenham olhos verdes
//e cabelos louros.

#include <stdio.h>
#include <ctype.h>

int main() {
    int qtdePessoas = 500;
    char sexo, corOlhos, corCabelos;
    int idade, maiorIdade = -1, qtdeMulheres_18_35 = 0;

    for (int i = 1; i <= qtdePessoas; i++) {

        printf("\n---------- PESQUISA DE CARACTERÍSTICAS FÍSICAS ----------\n");
        printf("Informe a idade da pessoa %d: ", i); scanf("%d", &idade);

        if (idade < 0)
            break;    

        if (idade >= 0) {
  
            if (maiorIdade == -1 || idade > maiorIdade)
            maiorIdade = idade;
        
            if (idade > 0) {
                printf("Informe o sexo: "); scanf(" %c", &sexo);
                printf("Informe a cor dos olhos (A - Azuis | V - Verdes | C - Castanhos): "); scanf(" %c", &corOlhos);
                printf("Informe a cor dos cabelos (L - Louros | C - Castanhos | P - Pretos); "); scanf(" %c", &corCabelos);
            
                if ((toupper(sexo) == 'F') && (idade >= 18 && idade <=35) && (toupper(corOlhos) == 'V') && (toupper(corCabelos) == 'L')) {
                    qtdeMulheres_18_35++;
                }
            }
        }    
    }

    if (maiorIdade >= 0 || qtdeMulheres_18_35 > 0) {
        printf("\n---------- ---------- RESULTADO DA PESQUISA ---------- ----------");
        printf("\nA maior idade do grupo é: %d", maiorIdade);
        printf("\nA quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros é: %d", qtdeMulheres_18_35);
    }

    printf("\n\n*** PROGRAMA ENCERRADO ***");

    return 0;
}