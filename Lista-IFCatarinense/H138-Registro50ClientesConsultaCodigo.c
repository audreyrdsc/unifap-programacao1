//138. O mesmo exercício 137, mas o programa deverá suportar até 50 clientes. Ao final do cadastro
//de cada cliente deverá ser perguntado: "Novo Cliente (S/N)?". 
//Deve-se utilizar um vetor do tipo declarado como um registro para a solução deste programa. 

//139. O mesmo exercício 138, mas após o término de todos os cadastros, ou seja, quando o usuário 
//digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 50 clientes, a tela 
//deverá ser limpa e deverá ser montada uma tela para permitir a consulta aos clientes por código 
//(que é o índice do vetor). Deverá ser digitado o código 999 para encerrar o programa.   
//A tela de consulta deverá ter o seguinte formato: 
//      Digite o código do cliente: _ 
//      Nome: 
//      Endereço: 
//      Telefone: 
//      <Digite 999 para sair...> 

//Observação1: Estas informações só deverão ser impressas uma vez, e não a cada execução do programa.
//Observação2: O fundo deve ser azul e as letras amarelas. 
//DICA.: Use os comandos abaixo: 
//uses crt;  // permite alterar as configurações da tela ... 
//textcolor ( yellow ) ; // muda a cor do texto de impressão  
                       // (as cores são em inglês)... 
//textbackground ( blue ) ; // escolhe a cor de fundo dos textos 
                          // de seu programa... 
//clrscr; // limpa a tela para aplicar a nova configuração 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define GREEN_BG   "\033[42m" //"\033[44m"
#define WHITE_TXT "\033[1;37m" //"\033[33m"
#define RESET_COLOR "\033[0m"
#define CLEAR_SCREEN "\033[2J\033[H"

typedef struct {
    int  codigo;
    char nome[60];
    char endereco[100];
    char telefone[15];
} Cliente;

int main() {

    Cliente clientes[50];
    int contaClientes = 0;
    char opcao;

     for (int i = 0; i < 50; i++) {
        printf("\n---------- CADASTRO DO CLIENTE - Código: %02d ----------\n", i + 1);
        
        clientes[i].codigo = i + 1;

        printf("Nome: ");
        fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
        clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';

        printf("Endereço: ");
        fgets(clientes[i].endereco, sizeof(clientes[i].endereco), stdin);
        clientes[i].endereco[strcspn(clientes[i].endereco, "\n")] = '\0';

        printf("Telefone: ");
        fgets(clientes[i].telefone, sizeof(clientes[i].telefone), stdin);
        clientes[i].telefone[strcspn(clientes[i].telefone, "\n")] = '\0';

        contaClientes++;
        printf("\nContaClientes %d", contaClientes);

        if (contaClientes == 50) {
            printf("\nForam preenchidos todos os 50 cadastros!");
        }

        printf("Novo Cliente (S/N)? ");
        scanf(" %c", &opcao);
        getchar();

        if (toupper(opcao) == 'N') {
            break;
        }

    }

    printf(CLEAR_SCREEN);           // limpa a tela
    printf(GREEN_BG WHITE_TXT);     // fundo azul, texto amarelo

    while (1) {
        int index = 0;
        printf("\n---------- TELA DE CONSULTA ----------");
        printf("\nDigite o código do cliente (1 a %d): ", contaClientes);
        scanf("%d", &index);

        if (index == 999) {
            printf(RESET_COLOR); // volta à cor normal
            printf("\nPrograma encerrado. Até logo!\n");
            break;
        }

        if (index >= 1 && index <= contaClientes) {
            printf("Nome: %s\n", clientes[index - 1].nome);
            printf("Endereço: %s\n", clientes[index - 1].endereco);
            printf("Telefone: %s\n", clientes[index - 1].telefone);
        } else {
            printf("Código inválido! Tente novamente.\n");
        }

        printf("<Digite 999 para sair...>\n");
    }

    return 0;
}