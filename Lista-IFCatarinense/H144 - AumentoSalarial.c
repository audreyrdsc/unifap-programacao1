//144. Refaça o algoritmo do exercício 43 usando registro.

#include <stdio.h>
#include <string.h>

struct Funcionario {
    char nome[50];
    char categoria;
    float salario;
};

int main() {
    int n;
    float percentual;
    
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &n);

    struct Funcionario funcionarios[n];

    for (int i = 0; i < n; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", funcionarios[i].nome);
        printf("Categoria (uma letra maiuscula): ");
        scanf(" %c", &funcionarios[i].categoria);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
    }

    printf("\n--- Salarios reajustados ---\n");
    for (int i = 0; i < n; i++) {
        
        switch (funcionarios[i].categoria) {
            case 'A': case 'C': case 'F': case 'H':
                percentual = 0.10; break;
            case 'B': case 'D': case 'E': case 'I': case 'J': case 'T':
                percentual = 0.15; break;
            case 'K': case 'R':
                percentual = 0.25; break;
            case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'S':
                percentual = 0.35; break;
            case 'U': case 'V': case 'X': case 'Y': case 'W': case 'Z':
                percentual = 0.50; break;
            default:
                percentual = 0.0;
        }

        float salarioReajustado = funcionarios[i].salario * (1 + percentual);

        printf("\nNome: %s\n", funcionarios[i].nome);
        printf("Categoria: %c\n", funcionarios[i].categoria);
        printf("Salario reajustado: R$ %.2f\n", salarioReajustado);
    }

    return 0;
}
