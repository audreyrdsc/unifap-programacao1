//44. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de 
//trânsito. Foram obtidos os seguintes dados:  - código da cidade- estado (RS, SC, PR, SP, RJ, ...)- número de
//veículos de passeio (em 1992)- número de acidentes de trânsito com vítimas (em 1992)
//Deseja-se saber:
//a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
//b) qual a média de veículos nas cidades brasileiras
//c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int qtdeCidades = 200;  //Quantidade de cidades
    int codCidade, numVeiculosPasseio = 0, numAcidentesVitimas = 0;
    char siglaEstado[3];
    
    int maiorNumAcidentes = -1, menorNumAcidentes = -1;
    
    float indiceCidade = 0.0, maiorIndice = -1.0, menorIndice = -1.0;

    int codCidadeMaiorIndice = 0, codCidadeMenorIndice = 0;
    char siglaEstadoMaiorIndice[3], siglaEstadoMenorIndice[3];
    
    float somaVeiculosCidades = 0.0, mediaVeiculosCidades = 0.0;

    int qtdeCidadesRS = 0;
    float somaAcidentesRS = 0.0, mediaAcidentesRS = 0.0;

    for (int cid = 1; cid <= qtdeCidades; cid++) {

        printf("\n--- --- Informe os dados abaixo --- ---\n");
        printf("Número do registro: %d \n", cid);
        printf("Código da cidade: "); scanf("%d", &codCidade);
        printf("Sigla do Estado: (ex: RS) "); scanf("%2s", siglaEstado);
        printf("Número de veículos de passeio (1992): "); scanf("%d", &numVeiculosPasseio);
        printf("Número de acidentes de trânsito com vítima: "); scanf("%d", &numAcidentesVitimas);

        siglaEstado[0] = toupper(siglaEstado[0]); //Letras em maiúsculo
        siglaEstado[1] = toupper(siglaEstado[1]);
        siglaEstado[2] = '\0';

        somaVeiculosCidades += numVeiculosPasseio;

        indiceCidade = numAcidentesVitimas / (float) numVeiculosPasseio;

        printf("Índice de acidentes: %d | %s | %.2f \n", codCidade, siglaEstado, indiceCidade);

        //if (maiorNumAcidentes == -1 || numAcidentesVitimas > maiorNumAcidentes) {
        if (maiorIndice == -1 || indiceCidade > maiorIndice) {
            //maiorNumAcidentes = numAcidentesVitimas;
            maiorIndice = indiceCidade;
            codCidadeMaiorIndice = codCidade;
            siglaEstadoMaiorIndice[0] = siglaEstado[0];
            siglaEstadoMaiorIndice[1] = siglaEstado[1];
            siglaEstadoMaiorIndice[2] = '\0';
        }

        //if (menorNumAcidentes == -1 || numAcidentesVitimas < menorNumAcidentes) {
        if (menorIndice == -1 || indiceCidade < menorIndice) {    
            //menorNumAcidentes = numAcidentesVitimas;
            menorIndice = indiceCidade;
            codCidadeMenorIndice = codCidade;
            siglaEstadoMenorIndice[0] = siglaEstado[0];
            siglaEstadoMenorIndice[1] = siglaEstado[1];
            siglaEstadoMenorIndice[2] = '\0';
        }

        

        if (siglaEstado[0] == 'R' && siglaEstado[1] == 'S') {
            somaAcidentesRS += numAcidentesVitimas;
            qtdeCidadesRS++;
        }

    }
    
    mediaVeiculosCidades = somaVeiculosCidades / qtdeCidades;

    printf("\n------------------- RESUMO DA PESQUISA ACIDENTES DE TRÂNSITO -------------------");
    //printf("\nMaior índice: %d  |  Cidade: %d  |  Estado: %s ", maiorNumAcidentes, codCidadeMaiorIndice, siglaEstadoMaiorIndice);
    //printf("\nMenor índice: %d  |  Cidade: %d  |  Estado: %s ", menorNumAcidentes, codCidadeMenorIndice, siglaEstadoMenorIndice);
    printf("\nMaior índice: %.2f  |  Cidade: %d  |  Estado: %s ", maiorIndice, codCidadeMaiorIndice, siglaEstadoMaiorIndice);
    printf("\nMenor índice: %.2f  |  Cidade: %d  |  Estado: %s ", menorIndice, codCidadeMenorIndice, siglaEstadoMenorIndice);
    printf("\n--------------------------------------------------------------------------------");
    printf("\nA média de veículos nas cidades brasileiras é: %.2f ", mediaVeiculosCidades);
    printf("\n--------------------------------------------------------------------------------");

    if (qtdeCidadesRS > 0) {
        mediaAcidentesRS = somaAcidentesRS / qtdeCidadesRS;
        printf("\nA média de acidentes com vítimas entre as cidades do Rio Grande do Sul é: %.2f ", mediaAcidentesRS);
        printf("\n--------------------------------------------------------------------------------");
    } else {
        printf("\nNenhuma cidade do RS foi informada!");
        printf("\n--------------------------------------------------------------------------------");
    }
    


    return 0;
}