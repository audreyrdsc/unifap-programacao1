//55. Faça uma algoritmo que receba duas datas e retorne a diferença entre elas em dias.

#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    int totalDias1 = 0, totalDias2 = 0, diferenca = 0;

    printf("\nDigite a primeira data (dd mm ano)"); scanf("%d %d %d", &dia1, &mes1, &ano1);
    printf("\nDigite a segunda data (dd mm ano)"); scanf("%d %d %d", &dia2, &mes2, &ano2);

    totalDias1 = dia1 + mes1 * 30 + ano1 * 365;
    totalDias2 = dia2 + mes2 * 30 + ano2 * 365;

    if (totalDias1 > totalDias2) {
        diferenca = totalDias1 - totalDias2;
    } else {
        diferenca = totalDias2 - totalDias1;
    }

    printf("A diferença entre as datas é de %d dias.\n", diferenca);

    return 0;

}