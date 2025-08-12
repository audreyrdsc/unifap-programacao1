//136. Com base em seu conhecimento defina os registros abaixo. Crie um algoritmo que solicite ao 
//usuário informar os dados do registro e imprima os mesmos na tela:
//a) cheque bancário; 
//b) livro; 
//c) aluno; 
//d) endereço; 
//e) cadastro de pessoa;

#include <stdio.h>
#include <string.h>

typedef struct {
    int numero;
} Cheque;

typedef struct {
    int numero;
} Livro;

typedef struct {
    char nome[50];
} Aluno;

typedef struct {
    char rua[100];
} Endereco;

typedef struct {
    Cheque cheque;
    Livro livro;
    Aluno aluno;
    Endereco endereco;
} Pessoa;

int main() {

    Pessoa pessoa;

    printf("\n---------- FORMULÁRIO DE DADOS DO ALUNO ----------");
    printf("\nCheque Bancário: "); scanf("%d", &pessoa.cheque.numero);
    getchar();
    
    printf("Número do Livro: "); scanf("%d", &pessoa.livro.numero);
    getchar();

    printf("Nome do Aluno: ");
    fgets(pessoa.aluno.nome, sizeof(pessoa.aluno.nome), stdin);
    pessoa.aluno.nome[strcspn(pessoa.aluno.nome, "\n")] = '\0';
    
    printf("Endereço: ");
    fgets(pessoa.endereco.rua, sizeof(pessoa.endereco.rua), stdin);
    pessoa.endereco.rua[strcspn(pessoa.endereco.rua, "\n")] = '\0';

    printf("\n---------- RESULTADO DO CADASTRO ----------");
    printf("\nCheque Bancário: %d", pessoa.cheque.numero);
    printf("\nLivro: %d", pessoa.livro.numero);
    printf("\nNome do Aluno: %s", pessoa.aluno.nome);
    printf("\nEndereço: %s", pessoa.endereco.rua);

    return 0;
}