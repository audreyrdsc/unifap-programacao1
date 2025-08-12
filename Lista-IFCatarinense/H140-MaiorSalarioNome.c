//140. Fazer um programa que tenha um registro com os campos nome, endereco, telefone, email, 
//salário, leia os dados de entrada e processe o total dos salários e imprima o valor do maior
//salário, e a quem pertence (nome).   
//Observação: ler os MAX registros ou até que o nome seja "fim".

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    char   nome[50]; 
    char   endereco[100];
    char   telefone[15];
    char   email[30];
    double salario;
} Pessoa;

int main() {

    Pessoa pessoas[MAX];
    char nomeMaiorSalario[50] = "";
    int contador = 0;
    double maiorSalario = 0.0, totalSalarios = 0.0;

    while (contador < MAX) {
        
        printf("\n---------- CADASTRO DO FUNCIONÁRIO %d ----------", contador + 1);
        printf("\nNome: (digite 'fim' para encerrar) ");
        fgets(pessoas[contador].nome, sizeof(pessoas[contador].nome), stdin);
        pessoas[contador].nome[strcspn(pessoas[contador].nome, "\n")] = '\0';

        if (strcmp(pessoas[contador].nome, "fim") == 0 || strcmp(pessoas[contador].nome, "FIM") == 0)  
        {
            printf("\nO programa foi encerrado!\n");
            break;
        } else {

            printf("Endereço: ");
            fgets(pessoas[contador].endereco, sizeof(pessoas[contador].endereco), stdin);
            pessoas[contador].endereco[strcspn(pessoas[contador].endereco, "\n")] = '\0';

            printf("Telefone: ");
            fgets(pessoas[contador].telefone, sizeof(pessoas[contador].telefone), stdin);
            pessoas[contador].telefone[strcspn(pessoas[contador].telefone, "\n")] = '\0';

            printf("Email: ");
            fgets(pessoas[contador].email, sizeof(pessoas[contador].email), stdin);
            pessoas[contador].email[strcspn(pessoas[contador].email, "\n")] = '\0';

            printf("Salário: R$ ");
            scanf("%lf", &pessoas[contador].salario);
            getchar();

            if (pessoas[contador].salario > maiorSalario) {
                maiorSalario = pessoas[contador].salario;
                strcpy(nomeMaiorSalario, pessoas[contador].nome);
            }
            
            totalSalarios += pessoas[contador].salario;
            contador++;
        }
    }

    if (contador > 0) {
        printf("\n---------- RESUMO DA FOLHA DE PAGAMENTO ----------\n");
        printf("Total de funcionários cadastrados: %d\n", contador);
        printf("Total dos salários: R$ %.2lf\n", totalSalarios);
        printf("Maior salário: R$ %.2lf\n", maiorSalario);
        printf("Pertence a: %s\n", nomeMaiorSalario);
    }
    
    return 0;
}