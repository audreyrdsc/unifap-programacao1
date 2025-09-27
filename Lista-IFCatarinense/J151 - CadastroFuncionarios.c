//151. Uma companhia resolveu cadastrar todos os funcionários em um sistema computacional. Você foi contratado 
//para desenvolver o sistema em questão. 
//Será necessário armazenar os seguintes dados do funcionário: 
//codigo      Código do funcionário 
//nome        Nome do funcionário (com até 40 caracteres) 
//cargo       Cargo do funcionário (com até 20 caracteres) 
//salario     Valor do salário do funcionário 
 
//endereco Endereço do funcionário (rua, número, cidade, estado, cep) 
//telefone    Telefone de contato do funcionário 
//status      “ ” (espaço em branco) -> indica funcionário ativo 
//            “*” (asterisco) -> indica funcionário removido 

//O sistema deverá ter as opções para: 
//a- Inclusão de funcionários 
//b- Consulta de funcionários por nome ou código 
//c- Alteração nos dados do funcionário 
//d- Exclusão de funcionário 
//e- Relatório de funcionários 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "funcionarios.dat"

struct Funcionario {
    int codigo;
    char nome[41];
    char cargo[21];
    float salario;
    char endereco[101];
    char telefone[21];
    char status;
};

void incluirFuncionario() {
    struct Funcionario f;
    FILE *fp = fopen(ARQUIVO, "ab");
    if (!fp) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o código do funcionário: ");
    scanf("%d", &f.codigo);
    getchar(); 

    printf("Digite o nome: ");
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strcspn(f.nome, "\n")] = '\0';

    printf("Digite o cargo: ");
    fgets(f.cargo, sizeof(f.cargo), stdin);
    f.cargo[strcspn(f.cargo, "\n")] = '\0';

    printf("Digite o salário: ");
    scanf("%f", &f.salario);
    getchar();

    printf("Digite o endereço: ");
    fgets(f.endereco, sizeof(f.endereco), stdin);
    f.endereco[strcspn(f.endereco, "\n")] = '\0';

    printf("Digite o telefone: ");
    fgets(f.telefone, sizeof(f.telefone), stdin);
    f.telefone[strcspn(f.telefone, "\n")] = '\0';

    f.status = ' ';

    fwrite(&f, sizeof(struct Funcionario), 1, fp);
    fclose(fp);
    printf("Funcionário cadastrado com sucesso!\n");
}

void consultarFuncionario() {
    FILE *fp = fopen(ARQUIVO, "rb");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    int opcao;
    printf("Consultar por:\n1 - Código\n2 - Nome\nEscolha: ");
    scanf("%d", &opcao);
    getchar();

    struct Funcionario f;
    int encontrado = 0;

    if (opcao == 1) {
        int codigo;
        printf("Digite o código: ");
        scanf("%d", &codigo);

        while (fread(&f, sizeof(struct Funcionario), 1, fp)) {
            if (f.codigo == codigo && f.status == ' ') {
                printf("Código: %d\nNome: %s\nCargo: %s\nSalário: %.2f\nEndereço: %s\nTelefone: %s\n",
                       f.codigo, f.nome, f.cargo, f.salario, f.endereco, f.telefone);
                encontrado = 1;
                break;
            }
        }
    } else if (opcao == 2) {
        char nome[41];
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        while (fread(&f, sizeof(struct Funcionario), 1, fp)) {
            if (strcmp(f.nome, nome) == 0 && f.status == ' ') {
                printf("Código: %d\nNome: %s\nCargo: %s\nSalário: %.2f\nEndereço: %s\nTelefone: %s\n",
                       f.codigo, f.nome, f.cargo, f.salario, f.endereco, f.telefone);
                encontrado = 1;
                break;
            }
        }
    } else {
        printf("Opção inválida!\n");
    }

    if (!encontrado) {
        printf("Funcionário não encontrado!\n");
    }

    fclose(fp);
}

void alterarFuncionario() {
    FILE *fp = fopen(ARQUIVO, "r+b");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    int codigo;
    printf("Digite o código do funcionário a alterar: ");
    scanf("%d", &codigo);
    getchar();

    struct Funcionario f;
    int encontrado = 0;

    while (fread(&f, sizeof(struct Funcionario), 1, fp)) {
        if (f.codigo == codigo && f.status == ' ') {
            encontrado = 1;
            printf("Alterando dados do funcionário %s\n", f.nome);

            printf("Digite o novo nome: ");
            fgets(f.nome, sizeof(f.nome), stdin);
            f.nome[strcspn(f.nome, "\n")] = '\0';

            printf("Digite o novo cargo: ");
            fgets(f.cargo, sizeof(f.cargo), stdin);
            f.cargo[strcspn(f.cargo, "\n")] = '\0';

            printf("Digite o novo salário: ");
            scanf("%f", &f.salario);
            getchar();

            printf("Digite o novo endereço: ");
            fgets(f.endereco, sizeof(f.endereco), stdin);
            f.endereco[strcspn(f.endereco, "\n")] = '\0';

            printf("Digite o novo telefone: ");
            fgets(f.telefone, sizeof(f.telefone), stdin);
            f.telefone[strcspn(f.telefone, "\n")] = '\0';

            fseek(fp, -sizeof(struct Funcionario), SEEK_CUR);
            fwrite(&f, sizeof(struct Funcionario), 1, fp);
            printf("Dados atualizados com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionário não encontrado!\n");
    }

    fclose(fp);
}

void excluirFuncionario() {
    FILE *fp = fopen(ARQUIVO, "r+b");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    int codigo;
    printf("Digite o código do funcionário a excluir: ");
    scanf("%d", &codigo);

    struct Funcionario f;
    int encontrado = 0;

    while (fread(&f, sizeof(struct Funcionario), 1, fp)) {
        if (f.codigo == codigo && f.status == ' ') {
            f.status = '*';
            fseek(fp, -sizeof(struct Funcionario), SEEK_CUR);
            fwrite(&f, sizeof(struct Funcionario), 1, fp);
            printf("Funcionário removido com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionário não encontrado!\n");
    }

    fclose(fp);
}

void relatorioFuncionarios() {
    FILE *fp = fopen(ARQUIVO, "rb");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    struct Funcionario f;
    printf("\nRelatório de Funcionários Ativos:\n");
    printf("Código | Nome | Cargo | Salário | Endereço | Telefone\n");
    printf("-----------------------------------------------------------\n");

    while (fread(&f, sizeof(struct Funcionario), 1, fp)) {
        if (f.status == ' ') {
            printf("%d | %s | %s | %.2f | %s | %s\n", f.codigo, f.nome, f.cargo, f.salario, f.endereco, f.telefone);
        }
    }

    fclose(fp);
}

int main() {
    int opcao;
    do {
        printf("\n=== Sistema de Funcionários ===\n");
        printf("1 - Incluir funcionário\n");
        printf("2 - Consultar funcionário\n");
        printf("3 - Alterar dados do funcionário\n");
        printf("4 - Excluir funcionário\n");
        printf("5 - Relatório de funcionários\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: incluirFuncionario(); break;
            case 2: consultarFuncionario(); break;
            case 3: alterarFuncionario(); break;
            case 4: excluirFuncionario(); break;
            case 5: relatorioFuncionarios(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
