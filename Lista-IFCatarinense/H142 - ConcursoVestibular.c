//142. Refaça o algoritmo do exercício 35 usando registro. 

#include <stdio.h>
#include <string.h>

// Definição do registro (struct) para armazenar os dados do candidato
struct Candidato {
    char nome[50];
    float portugues;
    float matematica;
    float conhecimentosGerais;
};

int main() {
    struct Candidato candidato;
    float media;

    // Entrada de dados
    printf("Digite o nome do candidato: ");
    scanf("%49s", candidato.nome);

    printf("Digite a nota em Português: ");
    scanf("%f", &candidato.portugues);

    printf("Digite a nota em Matemática: ");
    scanf("%f", &candidato.matematica);

    printf("Digite a nota em Conhecimentos Gerais: ");
    scanf("%f", &candidato.conhecimentosGerais);

    // Cálculo da média
    media = (candidato.portugues + candidato.matematica + candidato.conhecimentosGerais) / 3.0;

    // Saída: nome e notas
    printf("\n--- Resultado do Candidato ---\n");
    printf("Nome: %s\n", candidato.nome);
    printf("Português: %.2f\n", candidato.portugues);
    printf("Matemática: %.2f\n", candidato.matematica);
    printf("Conhecimentos Gerais: %.2f\n", candidato.conhecimentosGerais);
    printf("Média: %.2f\n", media);

    // Verificação da aprovação
    if (media > 7.0 && candidato.portugues >= 5.0 && candidato.matematica >= 5.0 && candidato.conhecimentosGerais >= 5.0) {
        printf("Status: APROVADO ✅\n");
    } else {
        printf("Status: REPROVADO ❌\n");
    }

    return 0;
}
