//25. Uma empresa deseja aumentar seus preços em 20%. Faça um algoritmo que leia o código e o preço de custo de
//cada produto e calcule o preço novo. Calcule também, a média dos preços com e sem aumento. Mostre o código e o
//preço novo de cada produto e, no final, as médias. A entrada de dados deve terminar quando for lido um código de
//produto negativo. (Use o comando enquanto-faça)

#include <stdio.h>

int main() {

    int codProd, contProd = 0;
    float preco, novoPreco = 0, acumPreco = 0.0, percAumento = 1.20;
    float mediaSemAumento = 0.0, mediaComAumento = 0.0;

    do {

        printf("\nDigite o código do produto: (-1 para SAIR) "); scanf("%d", &codProd);

        if (codProd < 0)
            break;
        
        if (codProd >= 0) {            
            printf("Digite o preço de custo: R$ "); scanf("%f", &preco);
            novoPreco = preco * percAumento;
            printf("Produto: %d | Preço de custo: R$ %.2f | Preço reajustado: R$ %.2f \n", codProd, preco, novoPreco);
            contProd++;
            acumPreco += preco;
        }

    } while (codProd >= 0);

    if (contProd > 0) {

        mediaSemAumento = acumPreco / contProd;
        mediaComAumento = (acumPreco * percAumento) / contProd;
        printf("\n---------- RESUMO DOS REAJUSTES APLICADOS AOS PRODUTOS ----------");
        printf("\nMédia dos preços sem aumento %.2f", mediaSemAumento);
        printf("\nMédia dos preços com aumento %.2f", mediaComAumento);
        printf("\n-----------------------------------------------------------------");
    
    } else {
        printf("\nNenhum produto foi cadastrado.");
    }

    printf("\n\n*** PROGRAMA ENCERRADO ***");
    return 0;
}