//27. Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador (DigitoV) 
//módulo 7 para o mesmo. Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular
//o dígito desejado, com módulo 7 é: DigitoV = resto da divisão de S por 7, onde 
//S = 6*A + 5*B + 4*C + 3*D + 2*E

#include <stdio.h>

int main() {

    int Codigo[5], S, V;

    printf("\nDigite um código com 5 algarismos: "); 
    printf("\nAlgarismo 1: "); scanf("%d", &Codigo[0]);
    printf("Algarismo 2: "); scanf("%d", &Codigo[1]);
    printf("Algarismo 3: "); scanf("%d", &Codigo[2]);
    printf("Algarismo 4: "); scanf("%d", &Codigo[3]);
    printf("Algarismo 5: "); scanf("%d", &Codigo[4]);

    S = 6*Codigo[0] + 5*Codigo[1] + 4*Codigo[2] + 3*Codigo[3] + 2*Codigo[4];
    
    V = S % 7;

    printf("\nO Código completo com verificador fica: %d%d%d%d%d-%d", Codigo[0],Codigo[1],Codigo[2],Codigo[3],Codigo[4],V);

    return 0;
}