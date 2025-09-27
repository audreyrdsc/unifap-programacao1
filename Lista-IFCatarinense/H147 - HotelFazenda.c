//147. Refaça o algoritmo do exercício 114 usando registro. 

#include <stdio.h>
#include <string.h>

struct Hotel {
    char nome[50];
    float distancia;    
    int visitantes;      
    int acesso;          
};

int main() {
    int n, i;
    printf("Digite o número de hoteis: ");
    scanf("%d", &n);

    struct Hotel hoteis[n];

    for (i = 0; i < n; i++) {
        getchar(); 
        printf("\nDigite o nome do hotel %d: ", i + 1);
        fgets(hoteis[i].nome, sizeof(hoteis[i].nome), stdin);
        hoteis[i].nome[strcspn(hoteis[i].nome, "\n")] = '\0';

        printf("Digite a distância do centro (km): ");
        scanf("%f", &hoteis[i].distancia);

        printf("Digite o número médio de visitantes: ");
        scanf("%d", &hoteis[i].visitantes);

        printf("Digite o tipo de acesso (0 = não asfaltado, 1 = asfaltado): ");
        scanf("%d", &hoteis[i].acesso);
    }

    int countMais15km = 0;
    int countNaoAsfaltado = 0;
    int somaVisitantesNaoAsfaltado = 0;

    printf("\nHoteis com acesso asfaltado e menos de 1000 visitantes:\n");

    for (i = 0; i < n; i++) {
      
        if (hoteis[i].distancia > 15) {
            countMais15km++;
        }

        if (hoteis[i].acesso == 0) {
            somaVisitantesNaoAsfaltado += hoteis[i].visitantes;
            countNaoAsfaltado++;
        }

        if (hoteis[i].acesso == 1 && hoteis[i].visitantes < 1000) {
            printf("Nome: %s, Distância: %.2f km, Visitantes: %d\n",
                   hoteis[i].nome, hoteis[i].distancia, hoteis[i].visitantes);
        }
    }

    printf("\nNúmero de hotéis a mais de 15 km do centro: %d\n", countMais15km);

    if (countNaoAsfaltado > 0) {
        float mediaVisitantes = (float)somaVisitantesNaoAsfaltado / countNaoAsfaltado;
        printf("Quantidade média de visitantes nos hotéis com acesso não asfaltado: %.2f\n", mediaVisitantes);
    } else {
        printf("Não há hotéis com acesso não asfaltado.\n");
    }

    return 0;
}


