//22. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e 
//salário. Faça um algoritmo que informe:  
//a) a média de salário do grupo;
//b) maior e menor idade do grupo;
//c) quantidade de mulheres com salário até R$100,00.
//Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça e não use 
//vetores ou matrizes)

#include <stdio.h>
#include <ctype.h>

int main() {
    int idade, maiorIdade = -1, menorIdade = -1;
    int qtdePessoas = 0, qtdeMulheresAte100 = 0;
    char sexo;
    float salario, somaSalario = 0.0, mediaSalario = 0.0;

    do {

        printf("\n------ PESQUISA REGIONAL ------");
        printf("\nInforme a idade (negativa para encerrar): "); scanf("%d", &idade);

        if (idade == -1)
            break;
        
        if (idade >= 0) {
            printf("Informe o sexo (M/F): "); scanf(" %c", &sexo);
            printf("Informe a salário: R$ "); scanf("%f", &salario);

            qtdePessoas++;
            somaSalario += salario; 

            if (maiorIdade == -1 || idade > maiorIdade) 
                maiorIdade = idade;    
            
            if (menorIdade == -1 || idade < menorIdade)
                menorIdade = idade;

            if (toupper(sexo) == 'F' && salario <= 100)
                qtdeMulheresAte100++;
        
        }
    
    } while (idade >= 0);

    if (qtdePessoas > 0) {
        mediaSalario = (somaSalario / qtdePessoas);
    
        printf("\n------------------ RESUMO DOS CÁLCULOS ------------------");
        printf("\nA média de salário do grupo é: %.2f ", mediaSalario);
        printf("\nA maior idade do grupo é: %d ", maiorIdade);
        printf("\nA menor idade do grupo é: %d ", menorIdade);
        printf("\nA quantidade de mulheres com salário até R$ 100,00 é: %d ", qtdeMulheresAte100);
        printf("\n---------------------------------------------------------");
    }

    printf("\nPROGRAMA ENCERRADO");
    
    return 0;
}
