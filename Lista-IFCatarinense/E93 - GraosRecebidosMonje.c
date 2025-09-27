//93. Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando
// de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um 
//tabuleiro de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas um grão 
//e os quadros subsequentes, o dobro do quadro anterior. Crie um algoritmo para calcular o total de grãos que 
//o monge recebeu.

#include <stdio.h>

int main() {
    unsigned long long int graos = 1;
    unsigned long long int total = 1;

    for (int i = 1; i < 64; i++) { 
        graos *= 2;      
        total += graos;  
    }

    printf("Total de graos recebidos: %llu\n", total);

    return 0;
}
