//23. Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual 
//coletou os seguintes dados referentes a cada habitante para serem analisados:  - sexo (masculino e feminino)-
//cor dos olhos (azuis, verdes ou castanhos)- cor dos cabelos ( louros, castanhos, pretos)- idade 

#include <stdio.h>
#include <ctype.h>

int main() {
    char sexo, corOlhos, corCabelos;
    int idade;

    while (1) {

        printf("\n---------- PESQUISA DE CARACTERÍSTICAS FÍSICAS ----------\n");
        printf("Informe a idade: (negativa para encerrar) "); scanf("%d", &idade);

        if (idade < 0)
            break;
        
        if (idade > 0) 
            printf("Informe o sexo "); scanf(" %c", &sexo);
            printf("Informe a cor dos olhos: A - Azuis | V - Verdes | C - Castanhos "); scanf(" %c", &corOlhos);
            printf("Informe a cor dos olhos: L - Louros | CC - Castanhos | P - Pretos "); scanf(" %c", &corOlhos);

    }

    printf("\nPROGRAMA ENCERRADO");
    
    return 0;
}