//3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número 
//de filhos. A prefeitura deseja saber:  
//a) média do salário da população;
//b) média do número de filhos;
//c) maior salário;
//d) percentual de pessoas com salário até R$100,00.
//O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA) 

#include <stdio.h>

//População de "n" habitantes
int main() {
    float salario, acumSal = 0.0, contSalBaixo = 0.0, maiorSal = 0.0, mediaFilhos = 0.0, mediaSal = 0.0, perc = 0.0;
    int filhos, contFil = 0, contador = 0;

    printf("\n*** *** PESQUISA PARA A PREFEITURA DO MUNICÍPIO DE BELAS FLORES *** ***\n");
    do {
        printf("\nInforme o salário: R$ "); scanf("%f", &salario);

        if (salario >= 0) {
            printf("Informe a quantidade de filhos: "); scanf("%d", &filhos);
        
            contador++;

            acumSal += salario;
            contFil += filhos;
        
            if (salario <= 100.0) {
                contSalBaixo++;
            }
            if (salario > maiorSal) {
                maiorSal = salario;
            }
        }

    } while (salario >= 0);

    mediaSal = (float) (acumSal/contador);
    mediaFilhos = (float)(contFil/contador);
    perc = (float) (contSalBaixo/contador)*100.0;

    printf("\n*** *** *** RESUMO DA PESQUISA *** *** ***");
    printf("\na) A média de salário da população é de: R$ %.2f ", mediaSal);
    printf("\nb) A média do número de filhos é: %.2f ", mediaFilhos);
    printf("\nc) O maior salário é: R$ %.2f ", maiorSal);
    printf("\nd) O percentual de pessoas com salário até R$ 100,00 é: %.2f\%%", perc);
    printf("\ne) Quantidade de entrevistas válidas: %d ", contador);

    return 0;
}