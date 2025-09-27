//94. Dado o conjunto de instruções a seguir, faça um algoritmo com quatro variações, colocando o comando de 
//repetição adequadamente, de forma a: 
//a) Executar o conjunto 10 vezes; 
//b) Não executar nenhuma vez; 
//c) Executar o conjunto 100 vezes utilizando duas estruturas de repetição; 
//d) Executar N vezes, onde N é uma variável informada pelo usuário. - Ler A, B - Modulo = A mod B 
//(calcula o resto da divisão)

#include <stdio.h>

int main() {
    int A, B, Modulo;
    int N, i;

    // a) Executar o conjunto 10 vezes
    printf("a) Executar o conjunto 10 vezes:\n");
    for (i = 0; i < 10; i++) {
        printf("Iteracao %d:\n", i + 1);
        printf("Digite o valor de A: ");
        scanf("%d", &A);
        printf("Digite o valor de B: ");
        scanf("%d", &B);
        Modulo = A % B;
        printf("A mod B = %d\n", Modulo);
    }

    // b) Nao executar nenhuma vez
    printf("\nb) Nao executar nenhuma vez:\n");
    for (i = 0; i < 0; i++) { // laço nunca será executado
        printf("Digite o valor de A: ");
        scanf("%d", &A);
        printf("Digite o valor de B: ");
        scanf("%d", &B);
        Modulo = A % B;
        printf("A mod B = %d\n", Modulo);
    }

    // c) Executar o conjunto 100 vezes utilizando duas estruturas de repeticao
    printf("\nc) Executar o conjunto 100 vezes utilizando duas estruturas de repeticao:\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Iteracao %d-%d:\n", i + 1, j + 1);
            printf("Digite o valor de A: ");
            scanf("%d", &A);
            printf("Digite o valor de B: ");
            scanf("%d", &B);
            Modulo = A % B;
            printf("A mod B = %d\n", Modulo);
        }
    }

    // d) Executar N vezes, onde N e uma variavel informada pelo usuario
    printf("\nd) Executar N vezes, onde N e uma variavel informada pelo usuario:\n");
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Iteracao %d:\n", i + 1);
        printf("Digite A: ");
        scanf("%d", &A);
        printf("Digite B: ");
        scanf("%d", &B);
        Modulo = A % B;
        printf("A mod B = %d\n", Modulo);
    }

    return 0;
}
