//148. Refaça o algoritmo do exercício 120 usando registro.  

#include <stdio.h>
#include <string.h>

struct Habitante {
    int idade;
    char sexo;     
    float salario;
};

int main() {
    struct Habitante habitantes[1000];
    int count = 0;

    while (1) {
        printf("Digite a idade do habitante (ou negativa para encerrar): ");
        scanf("%d", &habitantes[count].idade);

        if (habitantes[count].idade < 0) {
            break;
        }

        getchar();
        printf("Digite o sexo do habitante (M/F): ");
        scanf("%c", &habitantes[count].sexo);

        printf("Digite o salário do habitante: R$ ");
        scanf("%f", &habitantes[count].salario);

        count++;
    }

    if (count == 0) {
        printf("\nNenhum dado foi inserido.\n");
        return 0;
    }

    float somaSalarios = 0;
    int maiorIdade = habitantes[0].idade;
    int menorIdade = habitantes[0].idade;
    int mulheresSalarioAte100 = 0;

    for (int i = 0; i < count; i++) {
        somaSalarios += habitantes[i].salario;

        if (habitantes[i].idade > maiorIdade) {
            maiorIdade = habitantes[i].idade;
        }

        if (habitantes[i].idade < menorIdade) {
            menorIdade = habitantes[i].idade;
        }

        if ((habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f') && habitantes[i].salario <= 100.0) {
            mulheresSalarioAte100++;
        }
    }

    printf("\nMédia de salário do grupo: R$ %.2f\n", somaSalarios / count);
    printf("Maior idade do grupo: %d anos\n", maiorIdade);
    printf("Menor idade do grupo: %d anos\n", menorIdade);
    printf("Quantidade de mulheres com salário até R$100,00: %d\n", mulheresSalarioAte100);

    return 0;
}
