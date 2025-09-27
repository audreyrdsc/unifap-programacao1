//113. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e apresente o nome e peso da mais 
//pesada e o nome e altura da mais alta. 

#include <stdio.h>

int main() {
    char nome[50];
    float altura, peso;
    char continuar = 'S';

    char maisPesadoNome[50], maisAltoNome[50];
    float maiorPeso = 0, maiorAltura = 0;

    printf("Digite os dados das pessoas.\n");

    while (continuar == 'S' || continuar == 's') {
        printf("\nNome: ");
        scanf("%49s", nome);
        printf("Altura (m): ");
        scanf("%f", &altura);
        printf("Peso (kg): ");
        scanf("%f", &peso);

        // Verifica o mais pesado
        if (peso > maiorPeso) {
            maiorPeso = peso;
            snprintf(maisPesadoNome, sizeof(maisPesadoNome), "%s", nome);
        }

        // Verifica o mais alto
        if (altura > maiorAltura) {
            maiorAltura = altura;
            snprintf(maisAltoNome, sizeof(maisAltoNome), "%s", nome);
        }

        printf("\nDeseja cadastrar outra pessoa? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("\nA pessoa mais pesada é %s com %.2f kg.\n", maisPesadoNome, maiorPeso);
    printf("A pessoa mais alta é %s com %.2f m.\n", maisAltoNome, maiorAltura);

    return 0;
}
