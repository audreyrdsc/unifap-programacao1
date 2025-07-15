//15. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando 
//um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na 
//viagem e a velocidade média durante ela. Desta forma, será possível obter a distância percorrida com 
//a fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de 
//litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12
//O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância 
//percorrida e a quantidade de litros utilizada na viagem.

#include <stdio.h>

int main() {

    float litros, tempo, vmedia, distancia;

    printf("\nInforme o tempo gasto na viagem em horas (h): "); scanf("%f", &tempo);

    if (tempo <= 0) {
        printf("Erro: O tempo deve ser maior que zero!\n");
        return 1;
    }

    printf("\nInforme a velocidade média em (Km/h): "); scanf("%f", &vmedia);

    if (vmedia <= 0) {
        printf("Erro: A velocidade média deve ser maior que zero!\n");
        return 1;
    }

    distancia = tempo * vmedia;
    
    litros = distancia / 12.0;

    printf("\n--- --- --- --- RELATÓRIO DE VIAGEM --- --- --- ---");
    printf("\nVelocidade média: %.2f Km/h", vmedia);
    printf("\nTempo gasto: %.2f h", tempo);
    printf("\nDistânca percorrida: %.2f Km", distancia);
    printf("\nCombustível utilizado: %.2f litros", litros);
    printf("\n---------------------------------------------------");


    return 0;
}