//114. Considere que, para cada um dos hotéis fazenda da região, se tenha registrado o nome do hotel, a sua 
//distância do centro da cidade, o número médio de visitantes no último feriado e o tipo de acesso ao hotel 
//(0 – acesso não asfaltado; 
//1 – acesso asfaltado). Construa um algoritmo que forneça: 
//a) O número de hoteis que distam mais de 15km do centro; 
//b) A quantidade média de visitantes no último feriado, nos hoteis com acesso não asfaltado; 
//c) O nome e a distância do centro em Km, de todos os hoteis de acesso asfaltado que tiveram menos de 1.000 visitantes. 
//Ex.: HA, DA=10, V=100, AC=0 
//       HB, DA=20, V=50, AC=1 

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float distancia;
    int visitantes, acesso;
    int count_hoteis_mais_15km = 0;
    int count_hoteis_acesso_nao_asfaltado = 0;
    int total_visitantes_acesso_nao_asfaltado = 0;

    while (1) {
        printf("Digite o nome do hotel (ou 'sair' para encerrar): ");
        scanf("%s", nome);
        if (strcmp(nome, "sair") == 0) {
            break;
        }

        printf("Digite a distância do centro da cidade (em km): ");
        scanf("%f", &distancia);
        printf("Digite o número médio de visitantes no último feriado: ");
        scanf("%d", &visitantes);
        printf("Digite o tipo de acesso ao hotel (0 - não asfaltado, 1 - asfaltado): ");
        scanf("%d", &acesso);

        if (distancia > 15) {
            count_hoteis_mais_15km++;
        }

        if (acesso == 0) {
            total_visitantes_acesso_nao_asfaltado += visitantes;
            count_hoteis_acesso_nao_asfaltado++;
        }

        if (acesso == 1 && visitantes < 1000) {
            printf("Hotel com acesso asfaltado e menos de 1000 visitantes: %s, Distância: %.2f km\n", nome, distancia);
        }
    }

    printf("Número de hotéis que distam mais de 15km do centro: %d\n", count_hoteis_mais_15km);
    
    if (count_hoteis_acesso_nao_asfaltado > 0) {
        float media_visitantes = (float)total_visitantes_acesso_nao_asfaltado / count_hoteis_acesso_nao_asfaltado;
        printf("Quantidade média de visitantes nos hotéis com acesso não asfaltado: %.2f\n", media_visitantes);
    } else {
        printf("Nenhum hotel com acesso não asfaltado foi registrado.\n");
    }   
 
    return 0;
}