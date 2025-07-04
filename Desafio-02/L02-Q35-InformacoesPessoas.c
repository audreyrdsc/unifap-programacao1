//35. Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a altura e o sexo 
//de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:  
//a) a maior e a menor altura da turma
//b) a média da altura das mulheres
//c) a média da altura da turma.

#include <stdio.h>

int main() {
    int sexo;
    int contMulheres = 0, contTurma = 0;
    float altura, maiorAltura = 0.0, menorAltura = 0.0;
    float somaAlturaMulheres = 0.0, mediaAlturaMulheres = 0.0;
    float somaAlturaTurma = 0.0, mediaAlturaTurma = 0.0; 

    for (int i = 0; i < 5; i++) {

        printf("\nDigite a altura em metros: "); scanf("%f", &altura);
        printf("Informe o sexo (1 -> Masculino | 0 -> Feminino) : "); scanf("%d", &sexo);

        if (maiorAltura == 0.0 || altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (menorAltura == 0.0 || altura < menorAltura) {
            menorAltura = altura;
        } 

        contTurma++;
        somaAlturaTurma += altura;

        if (sexo == 0) {
            contMulheres++;
            somaAlturaMulheres += altura;
        }
    }

    if (contTurma > 0) {
        
        if (contMulheres > 0) {
           mediaAlturaMulheres = somaAlturaMulheres / contMulheres;
        } else {
            printf("\nNenhuma mulher foi registrada.");
        }
        
        mediaAlturaTurma = somaAlturaTurma / contTurma;

        printf("\n----- ---- RESUMO DOS CÁLCULOS ---- -----");
        printf("\nA maior altura da turma é: %.2f ", maiorAltura);
        printf("\nA menor altura da turma é: %.2f ", menorAltura);
        printf("\n----------------------------------------");
        printf("\nA média da altura das mulheres é: %.2f ", mediaAlturaMulheres);
        printf("\nA média da altura da turma é: %.2f ", mediaAlturaTurma);
        printf("\n----------------------------------------");
    }

    return 0;

}