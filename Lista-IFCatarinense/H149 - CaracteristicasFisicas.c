//149. Refaça o algoritmo do exercício 123 usando registro. 

#include <stdio.h>
#include <string.h>

struct Habitante {
    char sexo;        
    char corOlhos[10];  
    char corCabelos[10];
    int idade;
};

int main() {
    struct Habitante habitantes[1000];
    int count = 0;

    while (1) {
        printf("Digite a idade do habitante (ou -1 para encerrar): ");
        scanf("%d", &habitantes[count].idade);

        if (habitantes[count].idade == -1) {
            break;
        }

        getchar();
        printf("Digite o sexo do habitante (M/F): ");
        scanf("%c", &habitantes[count].sexo);

        getchar();
        printf("Digite a cor dos olhos (azuis, verdes, castanhos): ");
        fgets(habitantes[count].corOlhos, sizeof(habitantes[count].corOlhos), stdin);
        habitantes[count].corOlhos[strcspn(habitantes[count].corOlhos, "\n")] = '\0';

        printf("Digite a cor dos cabelos (louros, castanhos, pretos): ");
        fgets(habitantes[count].corCabelos, sizeof(habitantes[count].corCabelos), stdin);
        habitantes[count].corCabelos[strcspn(habitantes[count].corCabelos, "\n")] = '\0';

        count++;
    }

    if (count == 0) {
        printf("\nNenhum dado foi inserido.\n");
        return 0;
    }

    int maiorIdade = habitantes[0].idade;
    int mulheres18a35 = 0;
    int olhosVerdesCabelosLouros = 0;

    for (int i = 0; i < count; i++) {
        
        if (habitantes[i].idade > maiorIdade) {
            maiorIdade = habitantes[i].idade;
        }

        if ((habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f') &&
            habitantes[i].idade >= 18 && habitantes[i].idade <= 35) {
            mulheres18a35++;
        }

        if (strcmp(habitantes[i].corOlhos, "verdes") == 0 &&
            strcmp(habitantes[i].corCabelos, "louros") == 0) {
            olhosVerdesCabelosLouros++;
        }
    }

    printf("\nMaior idade dos habitantes: %d anos\n", maiorIdade);
    printf("Quantidade de mulheres com idade entre 18 e 35 anos: %d\n", mulheres18a35);
    printf("Quantidade de indivíduos com olhos verdes e cabelos louros: %d\n", olhosVerdesCabelosLouros);

    return 0;
}
