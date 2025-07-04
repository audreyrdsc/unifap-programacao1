//34. Escrever um algoritmo que leia 5 conjuntos de 2 valores, o primeiro representando o número de um aluno, 
//e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. 
//Mostre o número do aluno mais alto e do mais baixo, junto com suas alturas.

#include <stdio.h>

int main() {
    int numero, altura;
    int numMaisAlto = -1, alturaMaisAlto = -1;
    int numMaisBaixo = -1, alturaMaisBaixo = -1;

    for (int i = 0; i < 5; i++) {

        printf("\nDigite o número do aluno: "); scanf("%d", &numero);
        printf("Digite a altura do aluno em centímetros: "); scanf("%d", &altura);

        if (alturaMaisAlto == -1 || altura > alturaMaisAlto) {
            alturaMaisAlto = altura;
            numMaisAlto = numero;
        }

        if (alturaMaisBaixo == -1 || altura < alturaMaisBaixo) {
            alturaMaisBaixo = altura;
            numMaisBaixo = numero;
        }
    }

    printf("\n----- ----- --- RESULTADO DA PESQUISA --- ----- -----");
    printf("\nO aluno mais ALTO tem número %d e altura de %d cm", numMaisAlto, alturaMaisAlto);
    printf("\nO aluno mais BAIXO tem número %d e altura de %d cm", numMaisBaixo, alturaMaisBaixo);
    printf("\n-----------------------------------------------------");
    
    return 0;

}