//125. Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para cada andar do prédio, leia o 
//número de pessoas que entraram e saíram do elevador. 
//Considere que o elevador está vazio e está subindo, os dados se referem a apenas uma “subida” do elevador e que 
//o número de pessoas dentro do elevador sempre será maior ou igual a 0. 
//Se o número de pessoas, após a entrada e saída for maior que 15, deve ser mostrada a mensagem “EXCESSO DE 
//PASSAGEIROS . DEVEM SAIR" em seguida, o número de pessoas que devem sair do elevador, de modo que seja obedecido
// o limite de 15 passageiros. 
//Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas pessoas irão descer.

#include <stdio.h>

int main() {
    int num_andares, pessoas_dentro = 0;

    printf("Digite o numero de andares do predio: ");
    scanf("%d", &num_andares);

    for (int andar = 1; andar <= num_andares; andar++) {
        int pessoas_entraram, pessoas_sairam;

        printf("Andar %d:\n", andar);
        printf("Numero de pessoas que entraram: ");
        scanf("%d", &pessoas_entraram);
        printf("Numero de pessoas que sairam: ");
        scanf("%d", &pessoas_sairam);

        pessoas_dentro += pessoas_entraram - pessoas_sairam;

        if (pessoas_dentro > 15) {
            int excesso = pessoas_dentro - 15;
            printf("EXCESSO DE PASSAGEIROS. DEVEM SAIR: %d\n", excesso);
            pessoas_dentro = 15; // Ajusta para o limite maximo
        }
    }

    printf("No ultimo andar, %d pessoas irao descer.\n", pessoas_dentro);

    return 0;
}