//103. Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, 
//em gramas, faça um programa que determine o tempo necessário para que essa massa se torne menor que 0,05 gramas.

#include <stdio.h>

int main() {
    float massa_inicial, massa_atual;
    int tempo = 0;

    // Solicita a massa inicial ao usuário
    printf("Digite a massa inicial do material radioativo (em gramas): ");
    scanf("%f", &massa_inicial);

    // Inicializa a massa atual com a massa inicial
    massa_atual = massa_inicial;

    // Loop até que a massa atual seja menor que 0,05 gramas
    while (massa_atual >= 0.05) {
        massa_atual /= 2; // Perde metade da massa
        tempo += 50;     // Incrementa o tempo em 50 segundos
    }

    // Exibe o tempo necessário
    printf("Tempo necessário para que a massa se torne menor que 0,05 gramas: %d segundos\n", tempo);

    return 0;
}