//28. Dado um número de três algarismos N = CDU (onde C é o algarismo das centenas, D é o 
//algarismo das dezenas e U o algarismo das unidades), considere o número M constituído pelos 
//algarismos de N em ordem inversa, isto é, M = UDC. Gerar M a partir de 
//N (p.ex.: N = 123  -> M = 321).

#include <stdio.h>

int main() {

    int N, M, C, D, U, aux;

    printf("\nDigite um número N com 3 algarismos: "); scanf("%d", &N);

    C = N / 100;
    D = (N % 100) / 10;
    U = N % 10;

    M = U * 100 + D * 10 + C;

    printf("\nO novo número (M) representando a ordem inversa fica: %d", M);

    return 0;
    
}