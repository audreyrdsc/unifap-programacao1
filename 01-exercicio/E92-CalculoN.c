#include <stdio.h>

//Cálculo de A a partir de N
int main() {
    float n, a = 0;

    printf("\nInforme o valor de N: \n"); scanf("%f", &n);
    
    for (int i = 0; i <= n; i++) {
        if(i == 0) {
            a = n;
        } else {
            a = a + ((n - i) / (i + 1));
        }
        
    }
    printf("%f\n A = ", a);

}