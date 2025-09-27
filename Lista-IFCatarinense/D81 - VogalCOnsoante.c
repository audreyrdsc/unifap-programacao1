//81. Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é 
//vogal ou consoante.

#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra >= 'a' && letra <= 'z') {
        switch (letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("A letra '%c' e uma vogal.\n", letra);
                break;
            default:
                printf("A letra '%c' e uma consoante.\n", letra);
                break;
        }
    } else {
        printf("Erro: Entrada invalida. Por favor, insira uma letra do alfabeto.\n");
    }

    return 0;
}
