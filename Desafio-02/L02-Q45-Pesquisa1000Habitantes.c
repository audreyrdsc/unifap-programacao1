//45. Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: 
//sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas 
//e mostre as seguintes informações: (use o comando repita-até)  
//a) média da idade do grupo;
//b) média da altura das mulheres;
//c) média da idade dos homens;
//d) percentual de pessoas com idade entre 18 e 35 anos (inclusive).

#include <stdio.h>

int main() {

    int habitante = 1;
    int sexo, idade, somaIdades = 0;
    float altura;
    float mediaIdadeGrupo = 0.0, mediaAlturaMulheres = 0.0;
    int qtdeMulheres = 0;
    float somaAlturaMulheres = 0.0;  
    int somaIdadeHomens = 0, qtdeHomens = 0;
    float mediaIdadeHomens = 0.0, perc_18_35 = 0.0;
    int qtdeIdade_18_35 = 0;


    do {
        printf("\nInforme o sexo ([0] -> feminino  | [1] -> masculino) "); scanf("%d", &sexo);
        printf("Informe a idade: "); scanf("%d", &idade);
        printf("Informe a altura em metros (ex: 1.75) "); scanf("%f", &altura);

        somaIdades += idade;

        if (sexo == 0) {
            somaAlturaMulheres += altura;
            qtdeMulheres++; 
        }

        if (sexo == 1) {
            somaIdadeHomens += idade;
            qtdeHomens++;
        }

        if (idade >= 18 && idade <= 35) {
            qtdeIdade_18_35++;
        }
        
        habitante++;

    } while (habitante <= 1000);

    mediaIdadeGrupo = somaIdades / (float) (habitante - 1);
    
    
    perc_18_35 = (qtdeIdade_18_35 / (float) (qtdeHomens + qtdeMulheres)) * 100;

    printf("\n---------------- RESUMO DA PESQUISA ----------------");
    printf("\na) A média da idade do grupo é: %.2f ", mediaIdadeGrupo);
    
    if (qtdeMulheres > 0) {
        mediaAlturaMulheres = somaAlturaMulheres / (float) qtdeMulheres;
        printf("\nb) A média da altura das mulheres é: %.2f ", mediaAlturaMulheres);
    } else {
        printf("\nb) Não foram registradas mulheres, portanto sem cálculo da média.");
    }

    if (qtdeHomens > 0) {
        mediaIdadeHomens = somaIdadeHomens / (float) qtdeHomens;
        printf("\nc) A média da idade dos homens é: %.2f ", mediaIdadeHomens);
    } else {
        printf("\nc) Não foram registrados homens, portanto sem cálculo da média.");
    }
        printf("\nd) O percentual de pessoas com idade entre 18 e 35 anos é: %.2f \%%", perc_18_35);

    return 0;
}