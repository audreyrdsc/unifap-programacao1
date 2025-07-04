// 6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. 
//Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
//- 1,2,3,4 = voto para os respectivos candidatos;- 5 = voto nulo;- 6 = voto em branco;
//Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:- total de votos para 
//cada candidato;- total de votos nulos;- total de votos em branco; 
//Como finalizador do conjunto de votos, tem-se o valor 0.

#include <stdio.h>
#include <Windows.h>

int main() {
    int voto = 9, totalVotos = 0;
    int contA = 0, contB = 0, contC = 0, contD = 0;
    int contNulo = 0, contBranco = 0;

    while (voto != 0) {
        printf("\n*** *** SISTEMA DE VOTAÇÃO ELETRÔNICA *** ***\n");
        printf("\nVote no número de seu candidato");
        printf("\n1 - Candidato A \n2 - Candidato B \n3 - Candidato C \n4 - Candidato D \n5 - Nulo \n4 - Branco \nVOTO: ");
        scanf("%d", &voto);

        if (voto > 0 && voto <= 6) {
            printf("\nVoto registrado com sucesso!\n");
            totalVotos++;
            Sleep(1000);
        }

        if (voto == 1) {
            contA++;
        } else if (voto == 2) {
            contB++;
        } else if (voto == 3) {
            contC++;
        } else if (voto == 4) {
            contD++;
        } else if (voto == 5) {
            contNulo++;
        } else if (voto == 6) {
            contBranco++;
        } else if (voto >= 7) {
            printf("\nVoto inválido. Descartado!\n");
            Sleep(1000);
        }   
    }

    printf("\n\n*** *** RESULTADO DA ELEIÇÃO *** ***");
    printf("\n----- ----- ----- ----- ----- ----- -----");
    printf("\nVotos no Candidato A: %d", contA);
    printf("\nVotos no Candidato B: %d", contB);
    printf("\nVotos no Candidato C: %d", contC);
    printf("\nVotos no Candidato D: %d", contD);
    printf("\nVotos Nulos: %d", contNulo);
    printf("\nVotos em Branco: %d", contBranco);
    printf("\n----- ----- ----- ----- ----- ----- -----");
    printf("\nTotal de votos contabilizados --> %d", totalVotos);

    return 0;
}